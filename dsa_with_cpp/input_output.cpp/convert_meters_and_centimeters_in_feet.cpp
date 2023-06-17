#include<iostream>
using namespace std;
int main(){
    int meter,centimeter,totalcm;
    double feet,inch;
    cout<<"enter the meter";
    cin>>meter;
    cout<<"enter the centimeter part";
    cin>>centimeter;
    totalcm=(meter*100)+centimeter;
    inch=totalcm/2.54;
    feet=inch/12;
    cout<<"dist in feet is"<<feet;
}