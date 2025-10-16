#include<iostream>
using namespace std;
int main(){
    int i;
    string name,reverse_name;
    cout<<"enter the name:";
    cin>>name;
    cout<<'\n';
    for(i=name.length()-1;i>=0;i--){
        reverse_name+=name[i];
    }
    cout<<"* * * * * * * * * * * * * * * * *"<<endl;
    cout<<'\n';
    cout<<"the reversed string is :"<<' '<<reverse_name<<endl;
    cout<<'\n';
    cout<<"* * * * * * * * * * * * * * * * * "<<endl;

    return 0;
}
