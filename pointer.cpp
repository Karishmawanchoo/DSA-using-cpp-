#include<iostream>
using namespace std;
int main (){
    // int i = 10;
    // cout <<i<< endl;
    // cout <<&i<< endl;
    // cout << *(&i) << endl;
    const char * message {"Hello World"};
    cout <<"Message : " <<  message << endl;//Hello World
    cout <<"Message : " <<  *message << endl;//H
    //Allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    cout <<"Message : " <<  message1 << endl;//Bello World

    return 0;
}