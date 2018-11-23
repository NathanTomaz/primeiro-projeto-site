#include <stdio.h>

main(){
       int n;
       float n2;
       printf("Insira um numero: ");
       scanf("%d", &n);
       printf("Insira outro numero: ");
       scanf("%f", &n2);
       if(n<n2) printf("%f\n", n2);
       if(n>=n2) printf("%d\n", n);
                             
                             system("pause");
       }
