#include<stdio.h>
typedef struct {
	char light;
	char fan;
	char motor;
}smartHome_t;

const char* data = "light:on,fan:off,motor:off";


smartHome_t pair_data(const char* data) {
	smartHome_t result = { 0 };
	char item[10];   
	char status[10] = "0"; 
	int i = 0;
	int j = 0;
	int k = 0;
	while (data[i] != '\0') {
		j = 0;
		while (data[i] != ':'  && data[i] != '\0') {
			item[j++] = data[i++];
		}
		j = 0;
		if (data[i] == ':') {
			i++;
		}
		while (data[i] != ':' && data[i] != '\0') {
			status[j++] = data[i++];
		}
		if (data[i] == ',') {
			i++;
		}
		k++;
		switch (k) {
		case 1:
			if (status[1] == 'n') {
				result.light = 1;
			} else result.light = 0;
			break;
		case 2:
			if (status[1] == 'n') {
				result.fan = 1;
			}
			else result.fan = 0;
			break;
		case 3:
			if (status[1] == 'n') {
				result.motor = 1;
			}
			else result.motor = 0;
			break;
		}
	}
	return result;
}

int main()
{
	smartHome_t x = pair_data(data);
	printf("Light: %d\n", x.light); 
	printf("Fan: %d\n", x.fan);     
	printf("Motor: %d\n", x.motor); 
	return 0;
}

