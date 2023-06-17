#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double n,sr,cr;
    cout<<"enter the number";
    cin>>n;
    sr=sqrt(n);
    cr=pow(n,1.0/3);
    cout<<"square root is"<<sr<<endl<<"cube root is"<<cr;
    return 0;
}