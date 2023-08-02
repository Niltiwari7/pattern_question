#include<iostream>
using namespace std;


/*
for n=5 output should be
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int spaces=1;spaces<=n-row;spaces++){
            cout<<" ";
        }
        for(int  al=1;al<=row;al++){
            cout<<char(al+64);
        }
        for(int bl=(row-1);bl>=1;bl--){
            cout<<char(bl+64);
        }
        cout<<endl;
    }
}