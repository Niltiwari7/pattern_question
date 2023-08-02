#include<iostream>
using namespace std;

/*
for n = 5 output should be
*****
****
***
**
*

*/

int main(){
    int n;
    cin>>n;
    for(int row=n;row>=1;row--){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}