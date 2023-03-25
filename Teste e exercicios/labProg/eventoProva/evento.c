#include <stdio.h>

int main() {
	
	int diaInicial, hh, mm, ss;
	int diaFinal, hh2, mm2, ss2;
	int conversaoSeg1, conversaoSeg2, tempSeg;
	int dia=0, hr=0, min=0, seg=0;
	char form[3];

	scanf("%s %d",form,&diaInicial);
	scanf("%d %c %d %c %d", &hh, form, &mm, form, &ss);
	scanf("%s %d", form,&diaFinal);
	scanf("%d %c %d %c %d", &hh2, form, &mm2, form, &ss2);

	conversaoSeg1 = (diaFinal - diaInicial) * 24 * 60 *60;
	conversaoSeg2 = (((hh2*60+mm2)*60)+ss2) - (((hh*60+mm)*60)+ss);

	tempSeg = conversaoSeg1 + conversaoSeg2;

	if (tempSeg / 3600 > 0) {
		hr = (tempSeg / 3600) % 24;
		tempSeg = (tempSeg % 3600)%24;
	}
	if (tempSeg / 60 > 0) {
		min = tempSeg / 60;
		tempSeg = tempSeg % 60;
	}
	if (tempSeg / 24 > 0) {
		seg = tempSeg / 60 ;
		tempSeg = tempSeg % 60;
	}
	dia = hr / 24;
	printf("%d dia(s)\n", dia);
	printf("%d hora(s)\n", hr);
	printf("%d minuto(s)\n", min);
	printf("%d segundo(s)\n", seg);
	return 0;
}
