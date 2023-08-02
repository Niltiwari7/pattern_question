#include<iostream>
using namespace std;

/*
for n=5 output
A
BB
CCC
DDDD
EEEEE
*/
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<char(row+64);
        }
        cout<<endl;
    }
}