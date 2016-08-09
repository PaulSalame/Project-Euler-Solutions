#include <iostream>
#include <math.h>
#include <string>
using namespace std;

main(){
int num=2520;
bool found = 0;

while (found==0){
    bool flag = 1;
    for (int i = 1; i <=20; i++){
        if (num%i!=0){
            flag=0;
            break;
        }
    }
    if (flag==1){
        found=1;
        cout<<num<<endl;
    }

    num+=20;
}




return 0;
}
