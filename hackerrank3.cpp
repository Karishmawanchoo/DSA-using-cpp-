//Program to convert even number into its upper nearest odd number using Switch Statement
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    switch(n%2){
        case 0:
        cout<<n+1;

    }
}