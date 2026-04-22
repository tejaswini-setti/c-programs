#include <stdio.h>

int main() {
    char ch;
   printf("enter a character");
   scanf("%d",&ch);
   int res=(ch>='a')&&(ch<='z');
   printf("%d is a lower case alphabet i.e is:%d",ch,res);
    return 0;
}