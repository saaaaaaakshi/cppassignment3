#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter value of n:";
    cin>>n;
    for(i=1;i<=n*10;i++){
        if(i%n==0){
            cout<<i<<endl;
        }
    }
}