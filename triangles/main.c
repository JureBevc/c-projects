#include <stdio.h>

#define LOG(x) printf("%d\n", x);
#define WRITE(x) printf("%s\n", x);



int main(){

 int v;
 char c;

 WRITE("Height of triangle:");
 scanf("%d", &v);


 WRITE("Character to draw triangle with:");
 scanf(" %c", &c);
 WRITE("Output:");
 for(int i = 0; i < v; i++){
  for(int j = 0; j < v - i - 1; j++){
   printf(" ");
  }
  for(int j = 0; j < i * 2 + 1; j++){
   printf("%c", c);
  }
 printf("\n");
 }

 return 0;
}
