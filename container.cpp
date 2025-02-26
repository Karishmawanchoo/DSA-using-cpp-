#include<iostream>
#include<deque>
using namespace std;
int main(){
    //deque means you can perform push and pop from both end
    deque<int> d;
    //insertion
    d.push_back(10);
    d.push_back(11);
    for(int  i: d){
        cout<<i<<" " << endl;
    }
    //delete
    d.pop_back();
    for(int i:d ){
        cout<<i<<" " << endl;
    }                          
    //delete from front      
    d.pop_front();          
    for(int i:d ){    
        cout<<i<<" " << endl;
    }
    cout << "Front " << d.front() << endl;
    cout << "Back  " << d.back() << endl;    
    cout << "Empty or not : " << d.empty() << endl;
    cout << "Before erase : " << d.size() << endl;
    d.erase(d.begin(),d.begin()+1);
    cout << "After erase : " << d.size() << endl;
    return 0;  
}

