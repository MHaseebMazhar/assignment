#include <iostream>

using namespace std;

int sum(int a, int b){
   int c = a + b;
    return c;
    }
int main(){
    int num1 ;
    int num2;
    cout<<"Enter First Number "<<endl;
    cin>>num1;
    cout<<"Enter Second Number "<<endl;
    cin>>num2;
    
    cout<<"The Sum is "<<sum(num1, num2)<<endl<<endl;
    int result = sum(num1, num2);
    cout<<"The Result is "<<result<<endl<<endl;
}
