//basic calculator to add and subtract two numbers
#include<iostream>
using namespace std;
//function to add numbers
int main()
{
    char operation;
    float num1, num2;
    cout<<"Enter operation either + or -:";
    cin>>operation;
    cout<<"please enter two numbers:";
    cin>>num1>>num2;

    switch (operation)
    {
        case'+':
        cout<<num1+num2;
        break;

        case'-':
        cout<<num1-num2;
        break;
        default:
            //error if any other operation is inputted
            cout<<"Enter! operator is not correct";
            break;
    }
    return 0;
}
