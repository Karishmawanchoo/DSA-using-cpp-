#include<bits/stdc++.h>
#include<iostream>
#include<array>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    array <int , 5> a = {3,4,7,2,7};
    // int counts = count(a.begin() , a.end(),7);
    // cout<<"Count of 7 is: "<<counts<<endl;
    //vector
    vector <int> v = {3,4,7,2,7};
    int size = a.size();
    //capacity
    v.capacity();
    cout<<"Capacity of vector is: " << v.capacity() <<endl;
    //size
    v.size();
    cout<<"Size of vector is: " << v.size() <<endl;
    //push_back
    v.push_back(6);
    cout << "Updated vector is: " <<endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " " << endl;
    }
    //pop_back
    v.pop_back();
    cout << " Updated vector is: " <<endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " " << endl;
    }
    return 0;
}