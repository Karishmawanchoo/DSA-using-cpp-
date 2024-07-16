#include<iostream>
using namespace std;

void sort(int arr[], int n){
    int temp;
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout << "Sorted array is : " << endl;
    for(int i=0; i<6; i++){
        cout << arr[i] << endl;
    }
}

void search(int arr[], int a){
    int a, i;
    cout << "Enter the number to search : ";
    cin >> a;
    for(i=0; i<6; i++){
        if(arr[i]==a){
            cout << "Number found at index :" << i << endl;
        }
    }
}

int main(){
    int arr[6]={44, 5, 67, 12, 89, 45};
    sort(arr, n);
    search(arr, a);
    return 0;
}