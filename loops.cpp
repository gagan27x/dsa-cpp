#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    int i=0;
    while(i<=n)
    {
        int j=0;
        while(j<i){
            cout<<"* ";
            j++;
        }
        i++;
        cout<<endl;
    }

    do{
        cout<<n;
        n--;
    }while(n!=0);

}