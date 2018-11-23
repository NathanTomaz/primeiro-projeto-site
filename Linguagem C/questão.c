#include <stdio.h>


main() {
	int a, b, c, S, M;
	
	printf("Insira um numero: ");
	scanf("%d", &a);
	printf("Insira um segundo numero: ");
	scanf("%d", &b);
	printf("Insira um terceiro numero: ");
	scanf("%d", &c);
	S = a + b + c;
	M = S/3;
	printf("Soma: %d\n", S);
	printf("Media: %d\n", M);
	system("pause");
	
	
	
}
