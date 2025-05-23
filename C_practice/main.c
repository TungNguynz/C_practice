#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef union
{
unsigned short gia_tri;
struct {
	unsigned char bit_thap;
	unsigned char bit_cao;
};
}union_t;
unsigned char tach_bit(union_t a, unsigned short gia_tri, int vi_tri) {
	a.gia_tri = gia_tri;
	unsigned char low = a.bit_thap;
	unsigned char high = a.bit_cao;
	if (vi_tri == 0) {
		return low;
	}
	else return high;
}
void main()
{
	union_t x ;
	printf("hay nhap gia tri 16 bit: ");
	scanf("%hu", &x.gia_tri);
	printf("bit cao la %#x\n", tach_bit(x,x.gia_tri,1));
	printf("bit thap la %#x\n", tach_bit(x, x.gia_tri, 0));
}