#include<iostream>
using namespace std;

void reverse(int n,int arr[]){
    int start=0;
    int end=n-1;
    while(start<=end){
        int temp=arr[start];
        arr[start] = arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}