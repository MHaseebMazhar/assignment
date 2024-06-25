#include<iostream>
using namespace std;
int sum(int a,int b){
    int c = a + b;
    cout<<"The sum of a + b is "<< endl;
    cin>>c;
    return c;
}
int main(){
    int a =30 ,b= 12;
    
    int sums = sum(a, b);
    cout<<"The sum is "<<sums<<endl;
    
    return 0;
}
