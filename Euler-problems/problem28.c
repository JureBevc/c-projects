#include <stdio.h>

int main(){

 int max = 1001;
 int sum = 1;
 int current = 1;
 for(int i = 3; i <= max; i+=2){
  for(int j = 1; j < i; j++)
   current++;
  sum+=current;
  for(int k = 0; k < 3; k++){
  for(int j = 0; j < i - 1; j++)
   current++;
  sum+=current;
  }
 }

 printf("The sum is %d\n", sum);
 return 0;
}
