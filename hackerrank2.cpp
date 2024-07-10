#include<iostream>
using namespace std;

int main(){
    int num_of_class_held;
    int num_of_class_attended;
    
    
    cout<<"Enter the number of classes held: ";
    cin>>num_of_class_held;
    cout<<"Enter the number of classes attended: ";
    cin>>num_of_class_attended;

    float percentage =(num_of_class_attended/num_of_class_held * 100);
    cout<<"The percentage of class attended is: "<<endl;
    cout<<percentage<<"%"<<endl;
    
    if(percentage>=75){
        cout<<"Student is allowed to sit in exam"<<endl;
    }
    else{
        cout<<"Student is not allowed to sit in exam"<<endl;
    }
    return 0;
    


}