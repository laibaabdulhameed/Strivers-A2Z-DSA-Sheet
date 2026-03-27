#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int, int>> v;
    v.push_back({5,0});
    v.push_back({3,1});
    v.push_back({8,2});
    v.push_back({1,3});
    sort(v.begin(),v.end());
    sort(v.begin(),v.end(),[]
    (pair<int,int> a, pair<int, int> b){
        return a.second < b.second;
    });
     for(int i=0; i<=3; i++){
        cout<<v[i].first;
        cout<<v[i].second<<endl;
     }
    }