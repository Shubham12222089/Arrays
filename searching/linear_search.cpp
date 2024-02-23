#include<iostream>
using namespace std;

int search(int arr[],int a,int n){
    for(int i=0;i<n;i++){
        if(arr[i] == a){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cout<<"Enter the value you want to seach: ";
    cin>>t;
    int s = search(arr,t,n);
    if(s!=-1){
        cout<<"Value is at index : "<<s<<endl;
    }else{
        cout<<"value not found"<<endl;
    }

}