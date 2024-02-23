#include<bits/stdc++.h>
using namespace std;

//-----------------------using brute force----------------------
// int main(){
//     int arr1[] = {1,2,3,4,5,5};
//     int arr2[] = {2,3,4,4,5};
    
//     set<int> s;
//     for(int i=0;i<6;i++){
//         s.insert(arr1[i]);
//     }
//     for(int i=0;i<5;i++){
//         s.insert(arr2[i]);
//     }
//     for(auto i : s){
//         cout<<i<<" ";
//     }
// }

//-----------------------optimal solution------------------------
int main(){
    int arr1[] = {1,2,3,4,5,5};
    int arr2[] = {2,3,4,4,5};
    //both array are sorted

    int n1=6;
    int n2=5;
    int i=0,j=0;
    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionArr.empty() || unionArr.size()==0){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionArr.empty() || unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionArr.empty() || unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while(j<n2){
        if(unionArr.empty() || unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
        }
        j++;
    }

    for(auto i : unionArr){
        cout<<i<<" ";
    }

}