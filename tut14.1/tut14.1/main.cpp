#include<iostream>
using namespace std;

struct employee
{

    int eId;
    char favChar;
    float salary;
} ;
int main (){
    struct employee Ali;
    Ali.eId = 10;
    Ali.favChar = 'M';
    Ali.salary = 43000;
    cout<<"The employee Id of Ali is "<<endl<<"'"<<Ali.eId<<"'"<<endl;
    cout<<"The employee favorite Character is "<<endl<<"'"<<Ali.favChar<<"'"<<endl;
    cout<<"The employee Salary is "<<endl<<"'"<<Ali.salary<<"'"<<endl;
    return 0;
}
