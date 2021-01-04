#include<bits/stdc++.h>
using namespace std;

class bank
{
    string name,email,acc_type,phone;
    float balance=0;
    public:
        void create_account()
        {
            cout<<"Enter your name:"<<endl;
            cin>>name;
            cout<<"Enter your email"<<endl;
            cin>>email;
            cout<<"Enter your phone number"<<endl;
            cin>>phone;
            cout<<"Choose the type of account.\n\tsavings\n\tcurrent"<<endl;
            cin>>acc_type;
            cout<<"Enter amount for initial deposit:"<<endl;
            cin>>balance;
            cout<<"Account has been created successfully!!"<<endl;
            cout<<"Thank you for banking with us!"<<endl;
        }
        void deposit_cash()
        {
            float amount_1;
            cout<<"Enter the amount you want to deposit:"<<endl;
            cin>>amount_1;
            balance+=amount_1;
            cout<<"Cash has been deposited successfully!!\nCurrent balance: "<<balance<<endl;
            cout<<"Thank you for banking with us!"<<endl;
        }
        void withdraw_cash()
        {
            float amount_2;
            cout<<"Enter the amount you want to withdraw:"<<endl;
            cin>>amount_2;
            balance-=amount_2;
            if(balance>=0)
            cout<<"Cash has been withdrawn successfully!!\nCurrent balance: "<<balance<<endl;
            else{
                cout<<"Sorry you don't have enough cash in your account!"<<endl;
                balance+=amount_2;
            }
            cout<<"Thank you for banking with us!"<<endl;
        }
        void check_balance()
        {
            cout<<"Current balance: "<<balance<<endl;
            cout<<"Thank you for banking with us!"<<endl;
        }
};

int main()
{
    int ch;
    cout<<"WELCOME!!"<<endl;
    bank ob;
    do
    {
        cout<<"1)Create Account"<<endl;
        cout<<"2)Deposit cash"<<endl;
        cout<<"3)Withdraw cash"<<endl;
        cout<<"4)Check balance"<<endl;
        cout<<"5)Exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:ob.create_account();break;
            case 2:ob.deposit_cash();break;
            case 3:ob.withdraw_cash();break;
            case 4:ob.check_balance();break;
            case 5:break;
            default:cout<<"Choose a valid option!\n";break;
        }
    }
    while(ch!=5);
}
