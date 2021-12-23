#include <stdio.h> 
#include <locale.h>

main(){ 
  setlocale(LC_ALL, "Portuguese");
  int cont=1, tab; 
  printf("Digite o número da tabuada a ser calculada: "); 
  scanf("%d",&tab); 
  
  while (cont<=10){
    printf("%d x %d = %d\n",cont,tab,cont*tab);
    cont++; 
  }
}
