#include<stdio.h>
#include<math.h>
int main() {

float x1, x2,x, a, b, c, d,dd,q,p;
scanf_s("%f,%f,%f", &a, &b, &c);


	d = b * b - 4 * a * c;


		dd = sqrt(d);
		if (d > 0) {
			q = -b / 2 * a;
			p = dd / 2 * a;
			x1 = q + p;
			x2 = q - p;
			printf("x1Ϊ:%g,x2Ϊ:%g\n", x1, x2);
		}

		else if (d == 0) {
			x = -b / 2 * a;

			printf("x1+x2Ϊ:%g\n", x);

		};





		if (d > 0) {
			q = -b / 2 * a;
			p = dd / 2 * a;
			x1 = q + p;
			x2 = q - p;
			printf("x1Ϊ:%g,x2Ϊ:%g\n", x1, x2);
		}
		else if(d<0) {
			printf("x1=%g+%g", -b / 2 * a, sqrt(-d));
			printf("x1=%g-%g", -b / 2 * a, sqrt(-d));

		};
		return 1;

	
}