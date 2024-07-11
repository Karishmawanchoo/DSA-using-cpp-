#include<iostream>
using namespace std;
int main(){
    int array [5] {10,20,30,40,50};
    int max = -32678;
    for(auto temp : array){
        if(temp>max){ //use if (temp<min) then min = temp with min 
            max = temp;
        }
    }
    cout << "Max elements is:" << max;

    
    return 0;
}