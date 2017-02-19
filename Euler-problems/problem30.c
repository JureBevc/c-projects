#include <stdio.h>

int power(int a, int b){
 int r = 1;
 for(int i = 0; i < b; i++){
  r *= a;
 }
 return r;
}

int sumOf(int n){
 int r = 0;
 while(n > 0){
  int dig = n % 10;
  r += power(dig, 5);
  n /= 10;
 }
 return r;
}

int main(){

int sum = 0;
for(int i = 10; i < 2000000; i++){ // Brute force :)
 if(sumOf(i) == i){
  sum += i;
 }
}

printf("Sum = %d\n", sum);
return 0;
}
