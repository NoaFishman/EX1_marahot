#include "NumClass.h"
// header of the help functions i used 
int power(int x, int y);
int armstrongHelp (int x, int count);
int paliHelp(int x, int or);
//checking recursiv if the number is palindrom
// i used an help function that return a number and if it equals to the original one so it palindrom
int isPalindrome(int x){
    int origin =paliHelp(x,0);
    if(x==origin){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
// the help function of palindrom 
//get two numbers or that at start equals to 0 and x that at start equals to the originak number
// if x is 0 so we finished 
// we take the first digit of x and add it to or after we multi or by 10 
// than we divide x by 10 (remove the first digit) and cll ti the function with the new x and or
// actualy we wrote the numer backward 
// after we finished to change the number we return the new one and if it equals to the original so it is palindrom
int paliHelp(int x, int or){
    if(x==0){
            return or;
    }
    int dig=x%10;
    return paliHelp(x/10,(or*10)+dig);
}
// help function that raise the numbe x by y 
// every time we call the function after we remove one from the y till y=0 
// we return the multipl of the x by the number that returnd (so we will multipl the number by it selp y times)
int power(int x,int y){
    if(y>0){
        return x*power(x,y-1);
    }
    else{
        return x;
    }
}
// the function check if the number is armstrong
//count how many digit the number have 
// use the help function to calculate the sum of each digit raisd by the amount of digits
// if the sum we got from the help function is equals to the original number so it is armstrong
int isArmstrong(int x){
    int i;
    int num=x;
    int count=0;
    for(i=0; num>0; i++){
        num=num/10;
        count=i;
    }
    num=x;
    int sum=armstrongHelp(num,count);
    if(sum==x){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
// help function that return the first digit raise by the amount of digit the number have plus the answer of this function without the first number
// so calculate the sum of all the digits of the number raised by the amount of digit
int armstrongHelp (int x, int count){
    if(x>0){
        return power(x%10,count) + armstrongHelp(x/10,count);
    }
    else{
        return 0;
    }
}