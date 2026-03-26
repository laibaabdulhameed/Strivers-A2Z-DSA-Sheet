//problem1: Find maximum in an Array and return also its index.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,25,7,40,15};
    int n = 7;
    pair<int, int> ans;
    ans.first = arr[0];
    ans.second =0;
    for(int i = 1; i<n; i++){
        if(arr[i]>ans.first){
            ans.first = arr[i];
            ans.second = i;
        }
    }
    cout<< "Maximum value:"<<ans.first<<endl;
    cout<<"Index: "<<ans.second<<endl;
    return 0;
 }