#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    //right half pyramid
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<endl;

    //inverted right half pyramid
    for(int i=0;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<"\n";

    }
    cout<<endl;

    //inverted left half pyramid
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<n-i+1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<endl;

    //left half pyramid
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<endl;

    //full pyramid
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<endl;

    //inverted full pyramid
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*(n-i)+1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<endl;


    //half dimand shape (coblination of right half and inverted right half)
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<"\n";

    }
    cout<<endl;
    
    
    //Diamond Shape (combination of full pyreamid and inverted full pyramid)
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*(n-i)+1;k++){
            cout<<"*";
        }
        cout<<"\n";
     }
     cout<<endl;








    return 0;
}