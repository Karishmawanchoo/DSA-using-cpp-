#include<iostream>
using namespace std;
//Find Substring
int main(){
    string str = "Hello, World!";
    string substr = "World";
    size_t found = str.find(substr);
    if (found != string::npos){
        cout << "Found at position " << found << endl;
    } 
    else {
        cout << "Not found" << endl;
    }
    return 0;

}