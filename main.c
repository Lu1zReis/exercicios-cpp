#include <stdio.h>

typedef struct numComplx {
    double real;
    double img;
} numeroComplexo;

numeroComplexo somaComplexos (numeroComplexo n1, numeroComplexo n2) {
    	numeroComplexo r;
    	r.real = n1.real + n2.real;
    	r.img  = n1.img + n2.img;
    	return r;
}

numeroComplexo subComplexos (numeroComplexo n1, numeroComplexo n2) {
    	numeroComplexo r;
    	r.real = n1.real - n2.real;
    	r.img  = n1.img - n2.img;
    	return r;
}

numeroComplexo mutComplexos (numeroComplexo n1, numeroComplexo n2) {
    	numeroComplexo r;
    	r.real = (n1.real * n2.real) + (n1.img * n2.img) * -1;
    	r.img  = (n1.img * n2.real) + (n1.real * n2.img);
    	return r;
}

numeroComplexo diviComplexos (numeroComplexo n1, numeroComplexo n2) {
	numeroComplexo r;
	r.real = ((n1.real * n2.real) + (n1.img * n2.img) *-1)/((n2.real * n2.real)+( n2.img * n2.img)*-1);
	r.img  = ((n1.real * n2.img) + (n1.img * n2.real))/((n2.real * n2.img)+(n2.img * n2.real));
	return r;	
}

int main () {
	int ch = 0;
	numeroComplexo n, m, aux;
	n.real = 0;
	n.img = 0;
	m.real = 0;
	m.img = 0;
	while (ch != 6) {
    		printf("O que deseja fazer?\n");
    		printf("[1] Colocar novos números complexos\n");
		printf("[2] Somar os números complexos\n");
    		printf("[3] Subtrair os números complexos\n");
    		printf("[4] Mutiplicar os números complexos\n");
    		printf("[5] Dividir os números complexos\n");
		printf("[6] Sair\n");
		scanf("%d", &ch);
		if (ch == 1) {
			printf ("1 - Digite sua parte real: ");
			scanf("%lf",&n.real);
			printf ("1 - Digite sua parte imaginaria: ");
			scanf("%lf",&n.img);
			printf ("2 - Digite sua parte real: ");
			scanf("%lf",&m.real);
			printf ("2 - Digite sua parte imaginaria: ");
			scanf("%lf",&m.img);
		}
		else if (ch == 2) {
			if (n.real == 0 || m.real == 0)
				printf("Digite primeiramente os valores\n\n");
			else {
				printf("%2f + ", somaComplexos(n,m).real);
				printf("%2fi\n\n", somaComplexos(n,m).img);
			}
		} else if (ch == 3) {
			if (n.real == 0 || m.real == 0)
				printf("Digite primeiramente os valores\n\n");
			else {
				printf("%2f + ", subComplexos(n,m).real);
				printf("%2fi\n\n", subComplexos(n,m).img);
			}
		} else if (ch == 4) {
			if (n.real == 0 || m.real == 0)
				printf("Digite primeiramente os valores\n\n");
			else {
				printf("%2f + ", mutComplexos(n,m).real);
				printf("%2fi\n\n", mutComplexos(n,m).img);
			}
		} else if (ch == 5) {
			if (n.real == 0 || m.real == 0)
				printf("Digite primeiramente os valores\n\n");
			else {
				printf("%2f + ", diviComplexos(n,m).real);
				printf("%2fi\n\n", diviComplexos(n,m).img);
			}
		}
		
	}
    return 0;
}
