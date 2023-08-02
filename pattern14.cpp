#include<iostream>
using namespace std;

/*
for n=5 output should be
A
AB
ABC
ABCD
ABCDE
*/
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<char(col+64);
        }
        cout<<endl;
    }
}