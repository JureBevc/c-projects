#include <stdio.h>

int current[1100] = {1};
int previous[1100];
int temp[1100];
int indx = 1;

int digits(){
 int r = 0;
 for(int i = 1100-1; i >= 0; i--){
  if(current[i] != 0){
   break;
  }
   r++;
 }
 return 1100 - r;
}

void printCurrent(){
 for(int i = 20; i >= 0; i--){
  printf("%d", current[i]);
 }
 printf("\n");
}

void set(int arr1[], int arr2[]){
 for(int i = 0; i < 1100; i++){
  arr1[i] = arr2[i];
 }
}

void add(int arr1[], int arr2[]){
 for(int i = 0; i < 1050; i++){
  arr1[i] += arr2[i];
  if(arr1[i] >= 10){
   arr1[i + 1]++;
   arr1[i]-= 10;
  }
 }
}

int main(){
 int dig = 0;
 while(dig < 1000){
  indx++;
  set(temp, current);
  add(current, previous);
  set(previous, temp);
  dig = digits();
 }
  printf("Index: %d, digits: %d\n",indx, dig);
 return 0;
}
