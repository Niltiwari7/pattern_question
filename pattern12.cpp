#include<iostream>
using namespace std;

/*
for n=4 output should be
1        1
12      21
123    321
1234  4321
1234554321
*/
int main(){
    int n;
    cin>>n;
    int e=2*(n-1);
    for(int row=1;row<=n;row++){
        for(int num1=1;num1<=row;num1++){
            cout<<num1;
        }
        for(int spaces=1;spaces<=e;spaces++ ){
            cout<<" ";
            
        }
        for(int num3=row;num3>=1;num3--){
            cout<<num3;
        }
        e-=2;
        cout<<endl;
        
    }
}
