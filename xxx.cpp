#include<stdio.h>


int  zuan_si();



int  main() {

	zuan_si();

}



int  zuan_si() {
	char a[5][5] = { {' ',' ','*',' ',' '},{' ','*',' ','*',' '},{'*',' ','*',' ','*'},{' ','*',' ','*',' '} ,{' ',' ','*', ' ',' '} };
	int c, b; 

		for (c = 0; c < 5; c++)
	{
		for (b = 0; b < 5; b++) {


			printf("%c", a[c][b]);



		}
		printf("\n" );
		
	}
	return 0;

}
