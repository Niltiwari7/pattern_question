# Pattern 1
![image](https://github.com/Niltiwari7/pattern_question/assets/93751356/0e0036ff-ac32-4009-909e-c1bebb208f51)
# Code
```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```
# Pattern 2
![image](https://github.com/Niltiwari7/pattern_question/assets/93751356/ed07da7d-e50a-4223-a2a8-456327617000)
# Code
```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```
# Pattern 3
![image](https://github.com/Niltiwari7/pattern_question/assets/93751356/6f73b699-7197-4514-8213-27f13dcfb806)
# Code
```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<col;
        }
        cout<<endl;
    }
}
```
# Pattern 4
![image](https://github.com/Niltiwari7/pattern_question/assets/93751356/3e92110a-0bd6-4a3b-a1fb-00ac2a752357)
# Code
```
#include<iostream>
using namespace std;

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
```
# Pattern 5
![image](https://github.com/Niltiwari7/pattern_question/assets/93751356/0bee00ba-3cd4-4604-b020-fa476fba83fb)
# Code 
```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=n;row>=1;row--){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```
# Pattern 6
![image](https://github.com/Niltiwari7/pattern_question/assets/93751356/5c7a96f8-6110-444b-bcba-c9b90ad0a955)
# Code
```
#include<iostream>
using namespace std;

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
```
# Pattern 7
![image](https://github.com/Niltiwari7/pattern_question/assets/93751356/7801fa76-bcd2-4682-836f-9212f5e4652b)
# Code
```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        //print spaces
        for(int spaces=1;spaces<=n-row;spaces++){
            cout<<" ";
        }
        //print star
        for(int star=1;star<=2*row-1;star++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```
# Pattern 8
![image](https://github.com/Niltiwari7/pattern_question/assets/93751356/86e02e8e-38c3-4640-8214-cd69955d800f)
```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=n;row>=1;row--)
    {
        //print spaces
        for(int spaces=1;spaces<=n-row;spaces++){
            cout<<" ";
        }
        //print star
        for(int star=1;star<=2*row-1;star++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```
# Pattern 9
![image](https://github.com/Niltiwari7/pattern_question/assets/93751356/1db7f250-fbb3-433b-a8e9-04520f125483)
# Code
```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //upper triangle
     for(int row=1;row<=n;row++)
    {
        //print spaces
        for(int spaces=1;spaces<=n-row;spaces++){
            cout<<" ";
        }
        //print star
        for(int star=1;star<=2*row-1;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    //lower triangle
    for(int row=n;row>=1;row--)
    {
        //print spaces
        for(int spaces=1;spaces<=n-row;spaces++){
            cout<<" ";
        }
        //print star
        for(int star=1;star<=2*row-1;star++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```
# Pattern 10
![image](https://github.com/Niltiwari7/pattern_question/assets/93751356/8e2946bf-cc86-476f-b2d2-c87b099e289f)
# Code
```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //upper right traingle
    for(int row=1;row<=n;row++){
        for(int star=1;star<=row;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    //lower right triangle
    for(int row=n-1;row>=1;row--){
        for(int star=1;star<=row;star++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```
