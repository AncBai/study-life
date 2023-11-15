#include<stdio.h>
#include<math.h>



int  main() {
	float   a, b, c, x1, x2, p, q, delta;

	scanf_s("%f%f%f", &a, &b, &c);
	delta = b * b - 4 * a * c;

	if (delta > 0) {
		x1 = (-b + sqrt(delta)) / 2.0 * a;
		x2 = (-b - sqrt(delta)) / 2.0 * a;
		printf("%g,%g", x1, x2);
	}
	else if (delta < 0) {
		p = -b / 2.0 * a;
		q = sqrt(-delta) / 2.0 * a;



		printf("%g-%gi", p, q);
		printf("%g+%gi", p, q);
	}
	else if (delta == 0) {
		x1 = (-b + sqrt(delta)) / 2.0 * a;

		printf("x1=x2=%g", x1);

	}

}





	


  





