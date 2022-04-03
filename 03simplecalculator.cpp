#include<iostream>
using namespace std;
int main(){
    int a;
    int x,y,s;
    cout<<"*************************************************************"<<endl;
    cout<<"*************************Calculator**************************"<<endl;
    cout<<"*************************************************************"<<endl;
    cout<<"Please select one of the following options"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. subtraction"<<endl;
    cout<<"3. multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"please choose options from 1 to 4"<<endl;
    cin>>a;

    if(a==1){
    cout<<"enter any two numbers"<<endl;
    cin>>x>>y;
    s=x+y;
    cout<<"the addition of given numbers is: "<<s<<endl;
    }


    else if(a==2){
    cout<<"enter any two numbers"<<endl;
    cin>>x>>y;
    s=x-y;
    cout<<"the subtraction of given numbers is: "<<s<<endl;
    }


    else if(a==3){
    cout<<"enter any two numbers"<<endl;
    cin>>x>>y;
    s=x*y;
    cout<<"the multiplication of given numbers is: "<<s<<endl;
    }


    else{
    cout<<"enter any two numbers"<<endl;
    cin>>x>>y;
    s=x/y;
    cout<<"the division of given numbers is: "<<s<<endl;
    }


    return 0;
}