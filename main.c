#include "NumClass.h"
#include <stdio.h>

int main(){
int x;
int y;
int i;
int max,min;
//asking from the user to ensert two numbers 
scanf("%d",&x);
scanf("%d",&y);
// checking wich number is bigger so we will know from wich number to start
if(x>y){
    max=x;
    min=y;
}
else{
    max=y;
    min=x;
}
// run in loop on all the numbers between the two numbers te user ensert and check if they are armstrong
printf("The Armstrong numbers are:");
for (i=min;i<=max; i++){
    if(isArmstrong(i)==TRUE){
        printf(" %d",i);
    }
}
// run in loop on all the numbers between the two numbers te user ensert and check if they are palindrom
printf("\nThe Palindromes are:");
for (i=min;i<=max; i++){
    if(isPalindrome(i)==TRUE){
        printf(" %d",i);
    }
}
// run in loop on all the numbers between the two numbers te user ensert and check if are they prime
printf("\nThe Prime numbers are:");
for (i=min;i<=max; i++){
    if(isPrime(i)==TRUE){
        printf(" %d",i);
    }
}
// run in loop on all the numbers between the two numbers te user ensert and check if they are strong
printf("\nThe Strong numbers are:");
for (i=min;i<=max; i++){
    if(isStrong(i)==TRUE){
        printf(" %d",i);
    }
}

printf("\n");
return 0;
}