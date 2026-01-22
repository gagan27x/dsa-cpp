#include<bits/stdc++.h>
using namespace std;    

// programe which takes input on which user want to perform task and then give output(as asked) 
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
    else{
        cout<<"not a valid oprator .";
    }
    
    
}
//code github pe push krna h --after 6
  
    
    
    
    
    
    
    
    
    
    
    
//int n = 'c'; - converst to associated Ascii value
    

//betwise oprator
// right >> (devide by 2)
// left << shift (multiply by 2)
// or( | ) 
// and( & )
