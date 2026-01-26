#include <bits/stdc++.h>
using namespace std;


int main(){
    //multilevel pointer
    string *ptr = new string("abc");

    string **ptr2 = &ptr;

    string ***ptr3 = &ptr2;

    cout<<"value "<<(*ptr)<<endl;
    cout<<"value "<<(**ptr2)<<endl;
    cout<<"value "<<(***ptr3)<<endl;
    
//2D Array
int td_arr[3][2]={
    {12,24},
    {43,65},
    {34,45}
};

for(int i=0;i<3;++i){
    for(int j=0;j<2;++j){
        cout<<td_arr[i][j]<<" ";
    }
    cout<<endl;
}

//Take 12 items as input and store them in a one-dimensional array. 
//Then create a two-dimensional array (of size 3x4) and transfer the 12 elements from the one-dimensional array into the two-dimensional array.
//print the two-dimensional array.
int arr[12];
for(int i=0;i<12;i++){
    cin>>arr[i];
}
cout<<endl;

int n=0; 
int tod_arr[3][4];
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        tod_arr[i][j]=arr[n];
        n++;
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<tod_arr[i][j]<<" ";
    }
    cout<<endl;
}


}