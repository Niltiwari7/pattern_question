#include<iostream>
using namespace std;
/*
for n=4 output should be
*
**
***
****
***
**
*
*/

int main(){
    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int star=1;star<=row;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=n-1;row>=1;row--){
        for(int star=1;star<=row;star++){
            cout<<"*";
        }
        cout<<endl;
    }
}