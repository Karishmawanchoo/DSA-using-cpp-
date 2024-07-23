#include<iostream>
using namespace std;
class Program{
    public:
    int add(int x, int y){
        return x+y;
    }
    int sub(int x, int y){
        return x-y;
    }
};
int main(){
    Program p;
    cout<<"Add Function = "<<p.add(10,20)<<endl;
    cout<<"Sub Function = "<<p.sub(10,20)<<endl;
    return 0;
}
