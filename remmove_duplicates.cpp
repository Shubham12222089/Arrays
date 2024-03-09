#include<iostream>
using namespace std;

//1st method:- brute force using set
//2nd method

//condition :- Array is sorted;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,c=1;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
            c++;
        }
    }
    for(int k=0;k<c;k++){
        cout<<arr[k]<<" ";
    }
    
    
}