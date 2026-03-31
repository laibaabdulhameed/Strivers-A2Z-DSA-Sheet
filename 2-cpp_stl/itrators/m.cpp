#include <bits/stdc++.h>
using namespace std;
int main(){
    // print all elements
    // vector<int> v = {5,15,25,35};
    // // vector<int>::iterator it = v.begin();
    // for(auto it=v.begin(); it!=v.end(); it++){
    //     cout<< *it <<" ";
    // }

    // find a value
    // vector<int> v2 = {3,7,1,9,4};
    // for(auto it=v2.begin(); it!=v2.end(); it++){
    //     if(*it == 9){
    //         cout<<"Found!";
    //         break;
    //     }
    //    };
       
    //  sum using iterator
    vector<int> v3 = {10,20,30,40,50};
    int sum = 0;
    for(auto it = v3.begin();  it!= v3.end(); it++){
        sum += *it;
      
    }
      cout<< sum ;


}
