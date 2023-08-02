#include<iostream>
using namespace std;

/*
for n=4 pattern output is
1
01
101
0101
10101
*/
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        int start = 1;
        if(row%2==0)start=0;
        else start=1;
        for(int col=1;col<=row;col++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;

    }
}