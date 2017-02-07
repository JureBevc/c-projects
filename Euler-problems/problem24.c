#include <stdio.h>

int mil = 1000000 - 1; // -1 becuase it starts with 0
int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


int firstFree(int n){

 int i = 0;
 int c = -1;
 int r = 0;

 while(c < n){
  if(num[i] != -1){
   c++;
   if(c == n){
    r = num[i];
    num[i] = -1;
    break;
   }
  }
  i++;
  if(i == 10)
    i = 0;
 }
 return r;
}

int fact(int n){
 int r = 1;

 for(int i = 1; i <= n; i++){
  r *= i;
 }
 return r;
}


int getNumb(int f){
 if(f == 10){
  return mil;
 }else{
  int n = getNumb(f + 1);
  printf("%d", firstFree(n / fact(f)));
  return n - fact(f) * (n / fact(f));
 }
}

int main(){
 getNumb(0);
 printf("\n");
 return 0;
}
