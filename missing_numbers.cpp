#include<iostream>
using namespace std;

//optimal approach
int missing(int arr[],int n){
    int sum = (n+1)*(n+2)/2;
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return sum-s;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m = missing(arr,n);
    cout<<"Missing number is  : "<<m<<endl;
}