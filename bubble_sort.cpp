//wap using user defined fun and use bubble sort algorithm , using function and call it in main 
#include<iostream>
using namespace std;

void bubble_sort(){
    int a[10]={4,2,8,6,1,5,3,0,9,7};
    int temp;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=9 ; i>= 0; i--){
        for(int j =0; j<=i;j++){
            if(a[j]>a[j+1])//swapcondition 
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
cout << "The sorted array is = " << endl;
for(int i=0; i<10 ; i++){
    cout << a[i];
}

int main(){
    bubble_sort();
    return 0;

}
