#include <stdio.h>
#include <math.h>

int main(){

 int m ,n;
 scanf("%d %d", &m, &n);
 int i, j, st = 0;
 double check;
 for(i = m; i <= n; i++){
  for(j = 1; j * j < i * i; j++){
   check = sqrt(i * i - j * j);
   if(check - (int)check == 0){
    st++;
    //printf("%d^2 = %d^2 + %d^2\n", i, j, (int)check);
    break;
   }
  }
 }

 printf("%d\n", st);

 return 0;
}
