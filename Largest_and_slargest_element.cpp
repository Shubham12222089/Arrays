#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int largest=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     cout<<"Largest element is : "<<largest<<endl;
// }

//-----------Second Largest--------------------------------------

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0],slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(slargest<arr[i] && slargest<largest){
            slargest=arr[i];
        }
    }
    cout<<"sLargest element is : "<<slargest<<endl;
}