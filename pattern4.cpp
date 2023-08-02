#include<iostream>
using namespace std;

/*
for n=4
output should be
1
22
333
4444
*/

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<row;
        }
        cout<<endl;
    }
}