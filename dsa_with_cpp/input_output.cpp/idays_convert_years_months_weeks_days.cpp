#include<iostream>
using namespace std;
int main(){
    int d,w,m,y,rd;
    cout<<"enter the number of days";
    cin>>d;
    y=d/365;
    rd=d%365;
    m=rd/30;
    rd=rd%30;
    w=rd/7;
    rd=rd%7;
    cout<<d<<endl<<y<<endl<<m<<endl<<w<<endl<<rd;
}