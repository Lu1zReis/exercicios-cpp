#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
	/*
	int arvore = 9, m, meio1, meio2;
	m = (arvore / 2)+1;
	meio1 = (arvore / 2) + 1;
	meio2 = (arvore / 2) + 1;
	for (int i = 0; i < arvore; i++) {
		for (int j = 0; j < arvore; j ++) {
			if ( j == m && i == 0) 
				printf("*");
			else {
				if (j >= meio1 && j <= meio2 && i != arvore-1) {
					printf("*");
				} 
			}
		}
		meio1--;
		meio2++;
		printf("\n");
	}
	*/
	int n, val;
	scanf("%d", &n);
	if (n % 2 == 0) 
		val = 2;
	else
		val = 1;

	for (int i = 0; i < n; i++) {
		for (int j = i; j > 0; j -= val)
			printf("*");
		printf("\n");
	}
	return 0;
}
