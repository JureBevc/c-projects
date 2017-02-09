#include <stdio.h>
#define SIZE 1000

void set(int arr[]){
 for(int i = 0; i < SIZE; i++){
  arr[i] = -1;
 }
}

int check(int arr[], int n){
for(int i = 0; i < SIZE; i++){
 if(arr[i] == n)
  return i;
}
 return -1;
}

int lastIndex(int arr[]){
 for(int i = 0; i < SIZE; i++){
  if(arr[i] == -1)
   return i;
 }
 return -1;
}

void insert(int arr[], int n){
 for(int i = 0; i < SIZE; i++){
  if(arr[i] == -1){
   arr[i] = n;
   break;
  }
 }
}

int main(){

 int max = 0;
 int maxRec = 0;
 for(int d = 2; d < 1000; d++){
  int rec = 0;
  int didRec = -1;
  int del = 10;
  int alld[SIZE];
  set(alld);
  while(del > 0 && rec < 10000){
   didRec = check(alld, del);
    if(didRec > -1){
     didRec = lastIndex(alld) - didRec;
     if(maxRec < didRec){
      maxRec = didRec;
      max = d;
     }
     break;
    }
   insert(alld, del);
   rec++;
   int n = del / d;
   int o = del - n * d;
   del = o * 10;
  }
 }

 printf("Longest cycle is for 1/%d and it is %d long.\n", max, maxRec);
 return 0;
}
