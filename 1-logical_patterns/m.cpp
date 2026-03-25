#include <iostream>
using namespace std;

void print1(int n){
      for(int i=0; i<n ;i++){
        for(int j=0; j<i ;j++){
              cout<<"*";
        }
       cout<<"\n";
    }}
void print2(int n){
      for(int i=0; i<n ;i++){
        for(int j=0; j<i+1 ;j++){
              cout<<"*";
        }
       cout<<"\n";
}}
void print3(int n){
      for(int i=1; i<n ;i++){
        for(int j=1; j<=i+1 ;j++){
              cout<<j;
        }
       cout<<"\n";
}}
void print4(int n){
      for(int i=1; i<n ;i++){
        for(int j=1; j<=i+1 ;j++){
              cout<<i;
        }
       cout<<"\n";
}}
void print5(int n){
      for(int i=0; i<n ;i++){
        for(int j=0; j<n-i+1 ;j++){
              cout<<i;
        }
       cout<<"\n";
}}
void print6(int n){
      for(int i=0; i<n ;i++){
        for(int j=0; j<n-i+1 ;j++){
              cout<<"*";
        }
       cout<<"\n";
}}
void print7(int n){
      for(int i=0; i<n ;i++){
        for(int j=1; j<=n-i+1 ;j++){
              cout<<j;
        }
       cout<<"\n";
}}
void print8(int n){
      for(int i=0; i<n ;i++){
        // space
        for(int j=0; j<=n-i-2 ;j++){
              cout<<" ";
        }
        // stars
         for(int j=0; j< 2*i+1 ;j++){
              cout<<"*";
        }
      //   space
      //    for(int j=0; j<=n-i-1 ;j++){
      //         cout<<" ";
      //   }
       cout<<"\n";
}}
void print9(int n){
      for(int i=0; i<n ;i++){
        // space
        for(int j=0; j<i ;j++){
              cout<<" ";
        }
        // stars
         for(int j=0; j< 2*n-(2*i + 1) ;j++){
              cout<<"*";
        }
      //  space
         for(int j=0; j<i ;j++){
              cout<<" ";
        }
       cout<<"\n";
}}
void print10(int n){
      print8(n);
      print9(n);
}
void print11(int n){
     for ( int i = 0; i<2*n-1;i++){
      int stars = i;
      if( i > n) 
        stars = 2*n - i;
      for(int j=1; j<=stars; j++){
            cout << "*";
      };
      cout<< endl;
     }
}
void print12(int n){
     for (int i=1; i<=n; i++){
      for (int j=1; j<=i; j++){
         if((i+j)%2==0)
         cout<<1;
      else
      cout<<0;
      }
      cout<<endl;

     }
}
void print13(int n){
      for(int i=1; i<=n; i++){
            int space = (2*n)-2;
            // numbers
            for(int j=1; j<=i; j++){
                  cout<<j;
            }
            // space
            for(int j=i+3; j<=space; j++){
                  cout<<" ";
            }


            // numbers
             for(int j=i; j>=1; j--){
                  cout<<j;
            }
            cout<<endl;
            space -= 2;
      }
}
void print14(int n){
      int numbers = 1;
      for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                  cout<< numbers;
                  numbers = numbers +1;
            }
            cout<<endl;
      }
}
void print15(int n){
      for (int i=0; i<n; i++){
            for(char ch='A'; ch<='A'+i; ch++){
                  cout<<ch<<" ";

            }
            cout<<endl;

      }

}
void print16(int n){
      for (int i=0; i<n; i++){
            for(char ch='A'; ch<='A'+(n-i-1); ch++){
                  cout<< ch << " ";

            }
            cout<<endl;
      }}
void print17(int n){
       for (int i=0; i<n; i++){
            char ch = 'A'+i;
            for (int j=0; j<=i; j++){
                  cout<<ch<<" ";
            }
            cout<<endl;
       }
}
void print18(int n){
      for(int i=0; i<n; i++){
            // spaces
              for(int j=0; j<=n-i-2 ;j++){
              cout<<" ";
        }
            // charachters
            for(char ch='A'; ch<='A'+i; ch++){
                  cout<<ch<<" ";
            }
            // decreasing
            for(char ch='A'+i-1; ch>='A'; ch--){
                  cout<<ch<<" ";
            }

            // spaces
              for(int j=0; j<=n-i-2 ;j++){
              cout<<" ";
        }
        cout<<endl;
}
}
void print19(int n){
      for(int i=0; i<n; i++){
            for(char ch='E'-i; ch<'E'; ch++){
                  cout<<ch<<" ";
            }
            cout<<endl;
      }
}
void print20(int n){
      int space= 0;
      for(int i=0; i<n; i++){
            // stars
            for(int j=1; j<=n-i; j++){
                  cout<<"*";
            }
            // spaces
            for(int j=0; j<space; j++){
                  cout<<" ";
            }

            // stars
             for(int j=1; j<=n-i; j++){
                  cout<<"*";
            }
            space += 2;
            cout<<endl;
      }
      
}
void print21(int n){
      int spaces = 2*n-2;
      for(int i=1; i<=2*n-1; i++){
            // stars
            int stars = i;
            if(i > n){
                stars = 2*n-i;
            }
            for(int j=1; j<=stars; j++){
                  cout<<"*";
            }
            // spaces
            for(int j=1; j<=spaces; j++){
                  cout<<" ";
            }

            // stars
            for(int j=1; j<=stars; j++){
                  cout<<"*";
            }
            cout<<endl;
            if(i<n) spaces -=2;
            else spaces +=2;

      }
}
void print22(int n){
      for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                  if(i==1 || i==n || j==1 || j==n)
                  cout<<"*";
                   else
                   cout<<" ";
            }
         cout<<endl;
         
      }
      
}
void print23(int n){
      for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                  cout<<"*";
            }
            cout<<endl;
      }
}
void print24(int n){
      for(int i=1; i<=2*n-1; i++){
          for(int j=1; j<=2*n-1; j++){
             int top = i;
             int left = j;
             int right = (2*n -2)-j;
             int down = (2*n - 2)-i;
             cout<<(n-min(min(top, down), min(left, right)));
          }
          cout<<endl;
          
      }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t ;i++){
    int n;
    cin >> n;
    print24(n);

    }
  
}
