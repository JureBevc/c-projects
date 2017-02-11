#include <stdio.h>

int abs(int n){
 return ((n > 0)? n : -n);
}

int isPrime(int n){
 for(int i = 2; i <= abs(n)/2; i++){
  if(n % i == 0)
   return 0;
 }
 return 1;
}

int findCon(int a, int b){
 int check = isPrime(b);
 int r = 0;
 while(check == 1){
  r++;
  check = isPrime(r * r + a * r + b);
 }
 return r;
}

int main(){

 int max = 0;
 int maxA = 0;
 int maxB = 0;

 for(int a = -999; a < 1000; a++){
  for(int b = -1000; b <= 1000; b++){
   int con = findCon(a, b);
   if(max <= con){
    max = con;
    maxA = a;
    maxB = b;
   }
  }
 }

 printf("%d consecutive primes for a=%d and b=%d, a*b=%d\n", max, maxA, maxB, maxA * maxB);

 return 0;
}
