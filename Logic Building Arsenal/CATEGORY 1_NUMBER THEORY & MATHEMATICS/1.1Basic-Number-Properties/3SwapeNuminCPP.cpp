#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1,num2,tempv;
    cout <<"ENTER 1ST NUMBER IN THE SLOT \"A\" :  " ;
    cin >> num1;
    cout <<"ENTER 1ST NUMBER IN THE SLOT \"B\" :  " ;
    cin >> num2;

    tempv = num1;
    num1  = num2;
    num2  = tempv;

   cout << "1st number in the slot \"A\" is " << num1 << ", and 2nd number in the slot \"B\" is " << num2 << ".";
    return 0;
}
