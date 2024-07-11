//wap to get three pair sum in the array?
#include<iostream>
using namespace std;

int main(){
    // int a[5]={1,4,2,3,8};
    int a[5];
    cout << "Enter array: ";
    for(int i = 1 ; i <=5 ; i++){
        cin >> a[i];
    }
    int i , j, k;
    int value = 7;
    int count = 0;

    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            for(int k=j+1;k<7;k++){
                if(a[i]+a[j]+a[k]==value){
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                }
            }      
        }
    }
    cout << "sum 7 pairs is " << a[i]<< " "<< a[j] << " " <<a[k] << " "<< endl;
 
    return 0;
}