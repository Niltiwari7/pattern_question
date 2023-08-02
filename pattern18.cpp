#include<iostream>
using namespace std;
/*
very intresting pattern
E
DE
CDE
BCDE
ABCDE
*/
int main(){
    int n;
    cin>>n;
     
    for(int row=0;row<n;row++){
      
        for(char col='E'-row;col<='E';col++){
            cout<<col;
        
        }
        
        cout<<endl;
    }
}