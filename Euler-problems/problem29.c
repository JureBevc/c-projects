#include <stdio.h>
#define MAX 100

int comb[MAX * MAX][MAX * MAX];

int power(int a, int b){
 int r = 1;
 for(int i = 0; i < b; i++){
  r *= a;
 }
 return r;
}

int isPower(int n){

int lower_power = 0;
for(int i = 2; i < n; i++){
 int j = 2;
 int p = power(i, j);
 while(p < n){
  j++;
  p = power(i, j);
 }
 if(p == n){
  lower_power = 1;
  // Can be written as lower power
  for(int k = 2; k <= MAX; k++){
   comb[i][j * k] = 1;
  }
  break;
 }
}

if(lower_power == 0){
 for(int k = 2; k <= MAX; k++){
  comb[n][k] = 1;
 }
}
return 0;
}

int main(){

for(int i = 2; i <= MAX; i++){
 isPower(i);
}

int count = 0;
for(int i = 0; i < MAX * MAX; i++){
 for(int j = 0; j < MAX * MAX; j++){
  if(comb[i][j] != 0){
    count++;
  }
 }
}

printf("Count: %d\n", count);

return 0;
}
