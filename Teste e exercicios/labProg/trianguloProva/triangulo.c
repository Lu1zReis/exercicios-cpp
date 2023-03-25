#include <stdio.h>
#include <math.h>
void triangulo(double a, double b, double c) {
	if (a >= b+c) {
		printf("NAO FORMA TRIANGULO\n");
	} else {
		if ((a*a) == (b*b)+(c*c)) {
			printf("TRIANGULO RETANGULO\n");
		}
		if ((a*a) > (b*b)+(c*c)) {
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if ((a*a) < (b*b) + (c*c)) {
			printf("TRIANGULO ACUTANGULO\n");
		}
		if (a == b && b == c) {
			printf("TRIANGULO EQUILATERO\n");
		}
		if ((a == b && b != c) || (a == c && a != b) || (b == c && c != a)) {
			printf("TRIANGULO ISOSCELES\n");
		}
	}
}

int main() {
	double a, b, c, aux;
	scanf("%lf %lf %lf", &a, &b, &c);

	if (b > a) {
		aux = a;
		a = b;
		b = aux;
	}
	if (c > a) {
		aux = a;
		a = c;
		c = aux;
	}

	triangulo(a,b,c);

	return 0;
}
