#include <bits/stdc++.h>
using namespace std;

bool isValid(string s){
      stack<char> st;
      
    for(int i=0; i<s.length(); i++){
        if(s[i] == '('){
            st.push(s[i]);

        }
        else if(s[i] == ')'){
            if(st.empty())
            return false;
       else 
         st.pop();
        }
    }
    
    return st.empty();
}

int main(){

    string s = "(()";
    cout<<isValid(s);

  }