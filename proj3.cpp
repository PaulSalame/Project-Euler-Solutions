#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num){
if (num == 1 || num ==2){
    return true;
}
else if (num%2==0){
    return false;
}

else{
    for (int i = 2; i < num/2 + 1; i++){
        if (num%i==0){
            return false;
        }
    }
}

return true;

}



int main(){
cout<<"hello"<<endl;

 long long number = 600851475143;
 int root = sqrt(number);
 cout<<root<<endl;

for (int i = 2; i < root + 1; i++){
    if (number%i==0 && isPrime(i)){
        cout<<i<<endl;
    }
}
return 0;
}
