#include<iostream>
using namespace std;


/*
very intresting pattern
for n = 5 
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
int main(){
    int n;
    cin>>n;
    int inis=0;
    for(int row=n;row>=1;row--){
        for(int star=1;star<=row;star++){
            cout<<"*";
        }
        for(int spaces=1;spaces<=inis;spaces++){
            cout<<" ";
        }
        for(int star=1;star<=row;star++){
            cout<<"*";
        }
        inis+=2;
        cout<<endl;
    }
    inis=2*n-2;
    for(int row=1;row<=n;row++){
        for(int star=1;star<=row;star++){
            cout<<"*";
        }
        for(int spaces=1;spaces<=inis;spaces++){
            cout<<" ";
        }
        for(int star=1;star<=row;star++){
            cout<<"*";
        }
        inis-=2;
        cout<<endl;
    }
}