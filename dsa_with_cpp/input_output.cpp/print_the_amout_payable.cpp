// cost of each shirt in a shop is 500 only . the shop is giving a special festive discount of 12.5 % on each shirt .
// write a program to input the number the shirts purchased and print the amount paybale.
#include<iostream>
using namespace std;
int main(){
    int shirts;
    double selling_price, amount;
    cout<<"enter the numbers of shirts";
    cin>>shirts;
    selling_price=500-(12.5/100*500);
    amount =shirts*selling_price;
    cout<<"amount paybale "<<amount;
    return 0;
}