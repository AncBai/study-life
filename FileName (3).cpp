#include<stdio.h>
int main() {
	int a[2][2] = { 1,2,3,4 };
	int* p;
	p = &a[0][0];
	int i, j;
	for (j = 0; j < 2; j++) {
		for (i = 0; i < 2; i++)
		{
			printf("%d", *(*(a + j) + i));
			printf("  ");
		}
	}
}