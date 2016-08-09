#include <iostream>
#include <math.h>
#include <string>
using namespace std;


int numDigits(int a){

int digits = 0;
while (a>0){
    a=a/10;
    digits=digits+1;
}
return digits;
}



bool isPalindrome(int num){
int digits = numDigits(num);
int *arr = new int[digits];
int d;
for (int i = 0; i < digits; i++){
    d=num%10;
    num=num/10;
    arr[i]=d;

}

for (int i = 0; i < digits; i++){
    int j=digits-i-1;
    if (arr[i]!=arr[j]){
        return false;
    }

}
return true;

}

int main(){

int number=999*999;
bool found=0;
while (found==0){
    if (isPalindrome(number)){
        for (int i = 100; i < 1000; i++){
            if (number%i == 0 && numDigits(number/i)==3){
                cout<<number<<endl;
                return 0;
            }
        }


    }
    number=number-1;
}




return 0;
}
