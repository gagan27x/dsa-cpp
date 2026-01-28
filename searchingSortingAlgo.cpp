//leaner search
//binary search - DS should be sorted

#include<iostream>
using namespace std;



int main(){
    int arr[]= {3,4,5,6,4,7,8,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    //selection sort
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }

    for(int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout<<"\n";
 
    
    //bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<"\n";

    //insertion sort
    for(int i=1;i<=n;i++){
        int key = arr[i];
        int j=i-1;
        while(j>-1 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    
}