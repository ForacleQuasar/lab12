#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main(void)
{
	setlocale(LC_CTYPE, "RUS");
	//3
	float PI = 3.14159, * p1, * p2;
	long double y = 5, * pa;
	p1 = p2 = &PI;
	printf("�� ������ p1=%p �������� *p1=%g\n", p1, *p1);
	printf("�� ������ p2=%p �������� *p2=%g\n", p2, *p2);
	pa = &y;
	printf("�� ������ %p �������� *ptr=%f\n", pa, *pa);
	pa++;
	printf("�� ������ %p �������� *ptr=%f\n", pa, *pa);
	pa--;
	printf("�� ������ %p �������� *ptr=%f\n", pa, *pa);
	//4
	float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1,};
	float* ptr_a;
	ptr_a = &array[9];
	printf("������ array - %p\n", &array[10]);
	printf("�������� ptr_a - %f\n", *ptr_a);
	printf("����� ptr_a - %p\n", ptr_a);
	for (int i = 1; i < 5; i++) {
		printf("�������� ptr_a - %f\n", *ptr_a);
		printf("����� ptr_a - %p\n", ptr_a);
		ptr_a -=2;
	}
	//5
	int x = 0x12345678;
	int* prt;
	unsigned char *a1, *a2, *a3, *a4;
	unsigned char *a;
	prt = &x;
	a = (unsigned char*)prt;
	a1 = a + 3;
	a2 = a + 2;
	a3 = a + 1;
	a4 = a;
	printf("%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);
}