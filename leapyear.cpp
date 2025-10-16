#include<iostream>
using namespace std;
int main(){

    int year;
    cout<<"enter the year to check:"<<endl;
    cin>>year;
    if((year%400==0) ||( year%4==0 && year%100!=0)){
        cout<<"* * * * * * * * * * * * * * * * * * *"<<endl;
        cout<<'\n';
        cout<<year<<' '<<"is the leap year"<<endl;
        cout<<'\n';
        cout<<"* * * * * * * * * * * * * * * * * * *"<<endl;

    }
    else{
        cout<<"* * * * * * * * * * * * * * * * * * *"<<endl;
        cout<<'\n';
        cout<<year<<' '<<"not a leap year"<<endl;
        cout<<'\n';
        cout<<"* * * * * * * * * * * * * * * * * * *"<<endl;

    }
    return 0;

}
