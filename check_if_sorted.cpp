#include<iostream>
using namespace std;

int sorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }else {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=sorted(arr,n);
    cout<<s;
    //array is sorted
    
}
