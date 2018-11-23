#include <stdio.h>


main() {
	char letra;
	int a, b, c, d, e, soma;
	float media;
	printf("Insira uma LETRA: ");
		scanf("%c", &letra);
	
	if (letra=='s') {
			printf("Insira 2 numeros: ");
				scanf("%d%d", &a, &b);
		soma= a+b;		
			printf("SOMA: %d\n", soma);
		
	}
	if (letra=='m') {
			printf("Insira 3 numeros: ");
				scanf("%d%d%d", &c, &d, &e);
		media= (c+d+e)/3.0;
			printf("MEDIA: %.2f\n", media);
		
system("pause");
		
		
	}
	
	
	
	
	
	
}
