#include "NumClass.h"
int power(int x, int y);
// check ifnumber is polindrom
// counting the amount of digit the number have 
// check every time that the first digit is equals to the last and remove them
// if every check the digits are equals so it is palindrom
int isPalindrome(int x){
    int num=x;
    int count=0;
    int ans=TRUE;
    while(num>0){
        num= num/10;
        count++;
    }
    int i=0;
    int num2=x;
    num=x;
    int count2=count-1;
    for(i=0; num>0 && ans==TRUE; i++){
        if(num/power(10,count2)==num2%10){
            num=num%power(10,count2);
            num2=num2/10;
            count2--;
        }
        else{
            ans=FALSE;
        }
    }
    return ans;
}
// help function tat culculate the x with power y
// for loop that run y times and every thm multipl by x 
int power(int x, int y){
    int i;
    int ans=1;
    for (i=0; i<y; i++){
        ans=ans*x;
    }
    return ans;
}
//check if a number is armstrong number 
// count how many digit the number have
// while loop that every time taking the first digit and rais to the power of the amount of digit and add it to sum
// then we split by 10 till we add all the digit power to the sum
// if the summ is equals to the original number it is armstrong number
int isArmstrong(int x){
    int num=x;
    int sum=0;
    int count=0;
    while(num>0){
        num=num/10;
        count++;
    }

    num=x;
    while(num>0){
        int curr=num%10;
        sum=sum+power(curr,count);
        num=num/10;
    }
    if(sum==x){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

