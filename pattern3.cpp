#include<iostream>
using namespace std;

/*
for n=4 output should be 
1
12
123
1234
*/

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<col;
        }
        cout<<endl;
    }
}