#include "NumClass.h"
// function that take a number and check if it prime
//if we got 1 so in ouer case it prime number
// try to divide the number we got with all the number from 2 to the number square root
//if ther was number that split the number with modulu 0 so the number we got isn't prime and return false else return true
int isPrime(int x){
    if(x==1){
        return TRUE;
    }
    if(x<0){
        return FALSE;
    }
    int i;
    for(i=2; (i*i)<=x; i++){
        if(x%i==0){
            return FALSE;
        }
    }
    return TRUE;
}
//every time we take the first digit and do factorial and add to sum and split the number by 10
// if at the end the sum is equal to the original number it is a strong number
int isStrong(int x){
    int ans=0;
    int num=x;
    while(num>0){
        int curr=num%10;
        int i;
        int y=1;
        // Calculate the factorial of the current digit
        for(i=1; i<=curr; i++){
            y=y*i;
        }
         // Add the factorial to the overall sum
        ans=ans+y;
        // Move to the next digit
        num=num/10;
    }
    // Check if the sum of factorials equals the original number
    if(ans==x){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
