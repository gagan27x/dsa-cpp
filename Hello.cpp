#include<bits/stdc++.h>
using namespace std;    


int main(){
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;

    char opt;
    cout<<"choose a oprator: ";
    cin >>opt;

    cout<<"The result is: ";

    if(opt=='+'){
        cout<<a+b;
    }
    else if(opt=='-'){
        cout<<a-b;
    }
    else if(opt=='*'){
        cout<<a*b;
    }
    else if(opt=='/'){
        cout<<a/b;
    }
    else if(opt=='>'){//bitwise right divide by 2
        cout<< (a>>b);
    }
    else if(opt=='<'){//bitwise left multiply by 2
        cout<< (a<<b);
    }
    else if(opt=='|'){//bitwise OR 
        cout<<(a|b);
    }
    else if(opt=='&'){//bitwise And
        cout<<(a&b);
    }
    else if(opt='^'){
        cout<<(a^b);
    }
    else{
        cout<<"not a valid oprator .";
    }
    
}