#include<iostream>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    int c=1;
    for(i=3;c<=n;i=i*4){
        cout<<i<<endl;
        c++;
    }
}