#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             v.push_back(arr[i]);
//         }
//     }
//     for(int i=v.size();i<n;i++){
//         v.push_back(0);
//     }
//     for(auto i : v){
//         cout<<i<<" ";
//     }
// }

//optimal solution

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}