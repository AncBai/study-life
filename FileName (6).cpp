#include<stdio.h>
int lingdaoyibai(int a, int b);
int oshu(int a, int b);
int jshu(int a, int b);
int bidax(int a, int b);
int  main() {
	
	int a,b,c,d;
	
	a= lingdaoyibai(0,0);
	b=oshu(0,0);
	c = jshu(1,0);
	d= bidax(c,b);
	printf("�ܺ�Ϊ%d   ż��Ϊ%d   ����Ϊ%d ������ż����������%d", a,b,c,d);
}




int lingdaoyibai(int a, int b) {
	
	
	while (a<=100)
	{
		
		b += a;
		a += 1;
	}



	return b;
}
int oshu(int a, int b) {
	while (a<=100)
	{
		b += a;
		a += 2;
	}
	
	return b;
}
int jshu(int a, int b){
	while (a <= 100)
	{
		b += a;
		a += 2;
	}

	return b;
}
int bidax(int a, int b) {
	int max; max = 0;
	if (a > b) {
		


	}
	else { a = b; }
	return  a;
}