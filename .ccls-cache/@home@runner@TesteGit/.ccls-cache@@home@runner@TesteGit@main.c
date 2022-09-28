#include <stdio.h>
int main(){
  int cp=0, ci=0, c=0, sp=0, si=0, n;
  float media;
  for(c=0; c<=9; c++){
    printf("digite número inteiro: ");
    scanf("%d", &n);
      if(n % 2 == 0){
        cp++;
          sp = sp + n;
    }
      else if(n % 2 == 1){
          ci++;
            si = si + n;
    }
  }
  media = si/ci;
  printf("número de pares lidos: %d\n", cp);
  printf("número de ímpares lidos: %d\n", ci);
  printf("somatório dos pares: %d\n", sp);
  printf("media dos ímpares: %.2f\n", media);
}
