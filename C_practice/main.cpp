#include<iostream>
#include<math.h>
class phuong_trinh_bac_2 {
public:
	double a;
	double b;
	double c;
	double nghiem_1, nghiem_2;  
	int so_nghiem;  
    phuong_trinh_bac_2() {
		a = 1;
		b = 2;
		c = 3;
		so_nghiem = 0;
		nghiem_1 = 0;
		nghiem_2 = 0;
	}
	void tinh_nghiem(phuong_trinh_bac_2 &result, double a, double b, double c);
	};

void phuong_trinh_bac_2::tinh_nghiem(phuong_trinh_bac_2 &result, double a, double b, double c) {
	result.a = a;
	result.b = b;
	result.c = c;
	double delta = b * b - 4 * a * c;
	if (delta > 0) {
		result.so_nghiem = 2;
		result.nghiem_1 = (-b + std::sqrt(delta)) / (2 * a);
		result.nghiem_2 = (-b - std::sqrt(delta)) / (2 * a);
	}
	else if (delta == 0) {
		result.so_nghiem = 1;
		result.nghiem_1 = -b / (2 * a);
	}
	else {
		result.so_nghiem = 0;
	}
}
int main() {
	phuong_trinh_bac_2 pt;
	double a = 1;
	double b = 2;
	double c = 3;
    pt.tinh_nghiem(pt , a, b, c);

}