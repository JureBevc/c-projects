// Credits to Ziga Vene
#include <stdio.h>

int coins[] = {1, 2, 5, 10, 20, 50, 100, 200};

int comb(int max, int currentCoin){
 if(currentCoin == 0)
  return 1;

 int numb = 0;
 int allCombinations = 0;
 while(numb * coins[currentCoin] <= max){
  allCombinations += comb(max - numb * coins[currentCoin], currentCoin - 1);
  numb++;
 }

 return allCombinations;
}

int main(){

 printf("Combinations: %d\n", comb(200, 7));

 return 0;
}
