#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("abha");
    q.push("sabha");
    q.push("mabha");


    //size
    cout << "Size of the queue is: " << q.size() << endl;
    //front
    cout << "Front element of the queue is: " << q.front() << endl;
    //pop
    q.pop();
    cout << "Size of the queue is: " << q.size() << endl;

    return 0;
} 
