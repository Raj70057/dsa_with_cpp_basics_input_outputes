#include<iostream>
using namespace std;
int main(){
    int n,rem,reverse;
    cout<<"enter a number";
    cin>>n;
    rem=n%10;
    n=n/10;
    reverse=rem*10+n;
    cout<<"reverse is "<<reverse;
}