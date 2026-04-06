#include <iostream> // Library for input and output 
using namespace std; 
int main() {
    int number, count;
    count = 0;
    cout<<"Enter the number:"<<endl;
    cin>>number;
    // when number is 0
    if(number == 0){
        count = 1;
    }
    else{
        for(int i = number; i!=0; i = i / 10){
        count ++;
    }
    }
  
    cout<<"total digits in a number:" <<count;
    return 0;

}

