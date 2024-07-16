#include<iostream>
#include<string>
using namespace std;
void stringlen(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<"The length of the string is: "<<s.length()<<endl;
}

void string_concat(){
    string s1,s2,s3;
    cout<<"Enter a string: ";
    getline(cin,s1);
    cout<<"Enter another string: ";
    getline(cin,s2);
    s3=s1+s2;
    cout<<"The concatenated string is: "<<s3<<endl;
}





int main(){
    stringlen();
    string_concat();
    // string str = "Welcome to MIET";
    // str.replace(3,4,"abcd");
    // cout << str << endl;
    return 0;
}