#include<iostream>
using namespace std;

/*
for n =5 output should be
    *
   ***
  *****
 *******
*********
*/

int main(){
    int n;
    cin>>n;
    for(int row=n;row>=1;row--){
        for(int spaces=1;spaces<=n-row;spaces++){
            cout<<" ";
        }
        for(int star=1;star<=2*row-1;star++){
            cout<<"*";
        }
        cout<<endl;
    }
}