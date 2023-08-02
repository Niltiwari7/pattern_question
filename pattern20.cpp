#include<iostream>
using namespace std;

/*
very interestin pattern
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
int main(){
    int n;
    cin>>n;
    int inis=2*n-2;//intial space which we want
    for(int row=1;row<=n;row++){
        for(int star=1;star<=row;star++){
            cout<<"*";
        }
        for(int spaces = 1;spaces <= inis;spaces++){
            cout<<" ";
        }
        for(int star=1;star<=row;star++){
            cout<<"*";
        }
        inis-=2;
        cout<<endl;
    }
    inis=2;
    for(int row=n;row>=1;row--){
        for(int star=1;star<=row-1;star++){
            cout<<"*";
        }
        for(int spaces=1;spaces<=inis;spaces++){
            cout<<" ";
        }
        for(int star=1;star<=row-1;star++){
            cout<<"*";
        }
        inis+=2;
        cout<<endl;
    }
}