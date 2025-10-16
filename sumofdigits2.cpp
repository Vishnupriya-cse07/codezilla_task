#include<iostream>
using namespace std;
int main(){
    int n,sum=0,remainder;
    cout<<"enter the number:"<<endl;
    cin>>n;
    n=abs(n);
    while(n!=0){
        remainder=n%10;
        sum+=remainder;
        n=n/10;
    }
    cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    cout<<'\n';
    cout<<"the sum of the digits is :"<<sum<<endl;
    cout<<'\n';
    cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    return 0;

}
