#include<iostream>
using namespace std;

int sum(int a,int b){
    int c =a+b;
    return c;
}
void Haseeb(){
    cout<<"Haseeb";
    
}
void myfunction(string Dar){
    cout<<Dar<<endl;
    
}
int Abc(x,y);
int main(){
    Haseeb();
    myfunction(" Dar");
    Abc (x, y);
    int num1;
    int num2;
    cout<<"Enter First Number "<<endl;
    cin>>num1;
    cout<<"Enter Second Number "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    return 0;
}
int Abc(int x,int y){
    int z = x+y;
    cout<<"The First Number is"<<endl;
    cin>>x;
    cout<<"The Second Number is"<<endl;
    cin>>y;
    cout<<"The sum is"<<z<<endl;
    return z;
}

