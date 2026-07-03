#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"What number you want to check";
    cin>>number;
    bool isPrime = true;
    for (int i = 2; i< num / 2 + 1; i++){
        if (num % 2 == 0){
            isPrime = false;
            break
        }
    }
    
    if (isPrime){
        cout<<"It is prime";
        else {
            cout<<"It is not prime";
            
        }
        
        return 0;
    }
