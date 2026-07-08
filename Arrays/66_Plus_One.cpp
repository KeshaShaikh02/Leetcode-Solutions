#include<iostream>
using namespace std;
int plusOne(int digit[], int size){
    int lastDigit = 9;

    for(int i=size-1;i>=0;i--){
        digit[i] = digit[i]+1;
    }

    if(digit[size-1] < lastDigit ){
       digit[size-1]++;
    }

    else if(digit[size-1] == lastDigit){
        return lastDigit; 
    }
}
int main(){
    int digit[] = {1,2,9};
    digit[2] = 0;
    digit[1]++;
    int size = 3;
    digit[size-1]++;
    for(int i=0;i<size;i++){
        cout<<digit[i] <<endl;
    }
}
   