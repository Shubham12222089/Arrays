#include<iostream>
using namespace std;
//rotate by one place
void rotate(int n,int arr[]){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}