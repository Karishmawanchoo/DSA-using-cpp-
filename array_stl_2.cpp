#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

//int main(){
    // array<int, 4> a = {3,4,2,7};
    // int size = a.size();
    // cout<< size << endl;

    // for(int i = 0; i<size ; i++){
    //     cout<< a[i] << endl;
    // }

    // cout << "Elements at index = " << a.at(3) <<endl;
    // bool trueFalse = a.empty();
    // cout << "true or false = " << trueFalse << endl;
    // bool empty = a.empty();
    // cout << "is array empty or not = " << empty << endl;\
    // cout << "First element is = " << a.front() << endl;
    // cout << "Last element is = " << a.back() << endl;


  bool hasDuplicates(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {3, 4, 2, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (hasDuplicates(arr, size)) {
        cout << "Seven is two times" << endl;
    } else {
        cout << "The array does not have duplicate values." << endl;
    }
    return 0;

}