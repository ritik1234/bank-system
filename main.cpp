#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;
class bank
{
public:
  int bal=0;
  int dep;
  int w=0;
  void details()
  {
      string name;
      int pin;
      cout<<"enter the account holder name"<<endl;
      cin>>name;
      cout<<"enter the pin"<<endl;
      cin>>pin;
  }
  void deposit()
  {
      cout<<"enter the amount that you want to deposit"<<endl;
      cin>>dep;
      cout<<dep<<" amount has been deposited"<<endl;
      bal=dep;
  }
  void withdraw()
  {
      cout<<"enter the amount that you want to withdraw"<<endl;
      cin>>w;
      if(w>bal)
      {
        cout<<"insufficent balance"<<endl;
      }
      else
        cout<<"your transaction has been procedding"<<endl;
        if(w<=bal)
      bal=bal-w;
      else
        bal=bal;
  }
  void balance()
  {
      cout<<"your available balance is Rs "<<bal<<endl;
  }
};

int main()
{
    bank b1;
    int ch;
    b1.details();
    system("CLS");
    while(1)
    {
    cout<<"enter 1. for deposit,2. for withdraw,3. for balance,4. for exit"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        b1.deposit();
        system("color 0B");
        break;
    case 2:
        b1.withdraw();
        system("color 0C");
        break;
    case 3:
        b1.balance();
        system("color 09");
        break;
    case 4:
        exit(1);
    default:
        cout<<"enter the correct option"<<endl;
        system("CLS");
    }
    }
    return 0;
}
