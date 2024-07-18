#include<iostream>
#include<list>
using namespace std;

int main(){
    list <int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    //display list
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    return 0;


}