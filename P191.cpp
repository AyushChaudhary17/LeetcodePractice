#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int count=0;
    while(n>0){
        if(n&1){
            count=count+1;
            
        }
        n=n>>1;
    }
    cout<<count;
    return 0;
}