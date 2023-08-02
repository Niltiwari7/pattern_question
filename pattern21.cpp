#include<iostream>
using namespace std;
/*
hollow patter
for n =5
*****
*   *
*   *
*   *
*****
*/
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if(row==1||col==1||col==n||row==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}