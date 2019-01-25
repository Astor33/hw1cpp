#include<iostream>
using namespace std;

int main()
 {
    int num1;
    int num2;
    int result;
    int choice;

    cout<<"Enter your choice. Pick(1/3)"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"3.Multiplication"<<endl;

    cin>>choice;

    if (choice==1)
    {
      // do adition
      cout<<"Enter first number"<<endl;
      cin>>num1;

      cout<<"Enter second number"<<endl;
      cin>>num2;

      result = num1 + num2;

      cout<<"result is =  "<<result;
    }

    else if (choice==3)

    {
      //do multiplication
      cout<<"Enter first number"<<endl;
      cin>>num1;

      cout<<"Enter second number"<<endl;
      cin>>num2;

      result = num1 * num2;

      cout<<"result is result = "<<result;
     }

    return 0;
 }


