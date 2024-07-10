#include<iostream>
using namespace std;
int main(){
    //Braced initializers
    //Variable may contain random garbage value. WARNING
    int elephant_count;
    int lion_count{};//Initializers to zero
    int dog_count{10}; //Initializers to 10
    int cat_count{15}; //Initializers to 15
    //Can use expressions as initializers
    int domesticated_animals{ dog_count + cat_count };

    //int new_number{doesnt exist}
    //int narrowing_conversion {2.9}; //Compile error
    cout << "Elephant count: " << elephant_count << endl;
    cout << "Lion count: " << lion_count << endl;
    cout << "Dog count: " << dog_count << endl;
    cout << "Cat count: " << cat_count << endl;
    cout << "Domesticated animal count: " << domesticated_animals << endl;

    return 0;

}