#include <stdio.h>

int ab[30000];
int last = 0;

int comb[60000];


int sum(int n){
 int r = 0;
 for(int i = 1; i <= n/2; i++){
  if(n % i == 0){
   r+=i;
  }
 }
 return r;
}

int main(){

 fprintf(stderr, "Calculating abundant numbers...\n");

 for(int i = 1; i <= 30000; i++){
   if(sum(i) > i){
    ab[last] = i;
    last++;
  }
 }

 fprintf(stderr, "Tagging combinations...\n");
 for(int i = 0; i < last; i++){
  for(int j = 0; j < last; j++){
   int c = ab[i] + ab[j];
   comb[c] = 1;
  }
 }

 int allSum = 0;
 for(int i = 0; i <= 28123; i++){
  if(comb[i] == 0){
   allSum+=i;
  }
 }

 printf("The sum is %d\n", allSum);

 return 0;
}
