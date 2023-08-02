#include<iostream>
using namespace std;


/*
for n=4 output should be
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
*/
int main(){
    int n;
    cin>>n;
    int val=1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<val<<" ";
            val++;
        }
        cout<<endl;
    }
}