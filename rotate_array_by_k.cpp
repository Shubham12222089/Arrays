// #include<iostream>
// using namespace std;
//rotate by k places
// void rotate_by_k(int n,int arr[],int k){
//     k=k%n;
//     int temp[k];
//     for(int i=0;i<k;i++){
//         temp[i]=arr[i];
//     }
//     for(int i=k;i<n;i++){
//         arr[i-k]=arr[i];
//     }
//     int j=0;
//     for(int i=n-k;i<n;i++){
//         arr[i] = temp[j];
//         j++; 
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cout<<"Enter the value to rotate the array: ";
//     cin>>k;
//     rotate_by_k(n,arr,k);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Optimized solution

#include<bits/stdc++.h>
using namespace std;

void reverse_by_k(int n,int arr[],int k){
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value: ";
    cin>>k;
    reverse_by_k(n,arr,k);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}