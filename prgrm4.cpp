#include<iostream>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    int c=1;
    for(i=4;c<=n;i=i+3){
        cout<<i<<endl;
        c++;
    }
}