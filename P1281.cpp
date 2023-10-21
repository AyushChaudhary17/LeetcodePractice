#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int product=1;
    int sum=0;
    while(n>0){
        int digit=n%10;
        product=product*digit;
        sum=sum+digit;
        n=n/10;
    }
    cout<<"Difference between Product and Sum of the digits ia "<<product-sum<<endl;
    return 0;
}