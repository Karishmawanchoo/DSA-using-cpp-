#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main(){
    // array<int, 4> arr = {4,1,2,1};
    // //sum of array using for loop
    // int sum = 0;
    // for(int i = 0; i < 4; i++){
    //     sum += arr[i];
    // }
    // cout << "The sum of the array is : " << sum << endl;
    array <int , 9> arr = {4,1,-2,-6,6,8,3,0,-5};
    //sum of this array
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    cout << "The sum of the array is : " << sum << endl;

    return 0;
}