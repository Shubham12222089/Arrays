// #include<bits/stdc++.h>
// using namespace std;

// //brute force solution
// int main(){
    
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> v;
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             arr[j]=arr[i];
//             j++;
//         }
//         else{
//             v.push_back(arr[i]);
//         }
//     }
//     int s=n-v.size();
//     for(int i=0;i<s;i++){
//         v.push_back(arr[i]);
//     }
//     for(auto i :v){
//         cout<<i<<" ";
//     }
// }

//-----------------without using second array---------------
#include <bits/stdc++.h>
using namespace std;


int main() {
    int arr[8] = {1, 0, 2, 9, 5, 0, 8, 0};
    int n = 8;


    reverse(arr+0,arr+8);
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }
    for (int i = j; i < n; i++) {
        arr[i] = 0;
    }
    reverse(arr+0,arr+8);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
