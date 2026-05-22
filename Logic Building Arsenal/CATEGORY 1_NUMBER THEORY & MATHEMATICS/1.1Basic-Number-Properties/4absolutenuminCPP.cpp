#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float num,abso;
      cout << endl<< "ENTER ANY NUMBER(integer) :- ";
      cin  >> num ;
      if (num<0)
      {
        abso = num * (-1);
        cout <<" the absolute value of |"<<num<<"| is " <<abso ;
      }
       else if (num>0)
      {
        cout << " the absolute value of |"<<num<<"| is " <<num ;
      }
      else if (num==0)
      {
       cout << " the absolute value of |"<<num<<"| is " <<num ;
      }
      
      else 
      {cout << " wrong input " ; }
      
    return 0;
}
