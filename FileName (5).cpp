#include<stdio.h>

int sum(int x, int y);




int main() {
	int  a[5], b[5], c[5];
	int i;
	for(i=0;i<=4;i++)
	scanf_s("%d", &a[i]);
	for (i = 0; i <= 4; i++)
		scanf_s("%d", &b[i]);
	c[i] = sum(a[i] , b[i]);
	printf("%   d",c[i]);
}

int sum(int x, int y) {
	int z;
	z = x + y;
	return z;

}