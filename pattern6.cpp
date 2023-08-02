#include<iostream>
using namespace std;

/*
for n = 5
output should be 
12345
1234
123
12
1

*/

int main(){
    int n;
    cin>>n;
    for(int row=n;row>=1;row--){
        for(int col=1;col<=row;col++){
            cout<<col;
        }
        cout<<endl;
    }
}