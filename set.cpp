#include<iostream>
#include<set>
using namespace std;

int main(){
    set <int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);

    for(auto i:s ){
        cout<<i<<endl;
    }
    cout << endl;    

set<int> :: iterator it = s.begin();
it++;
s.erase(it);
//simple for loop to iterate data
cout << "is present at \n" << s.count(7) << endl;

set<int>::iterator itr=s.find(5);

for(auto it = itr; it!=s.end();it++){
    cout<<*it<<endl;
}
cout << endl;
// for(auto i:s){
//     cout<<i<<endl;
// }
//    cout << endl;
return 0;
}
