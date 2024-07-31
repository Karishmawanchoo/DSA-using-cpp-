#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string line;

    // Opening a text file for writing
    ofstream my_file("example.txt", ios::app);
    if(!my_file){
        cout << "Unable to open file";
        return 1;
    }

    // Check if the file has been opened successfully
    // if (!my_file.is_open()) {
    //     // Print error message
    //     cout << "Error opening the file for writing." << endl;
    //     return 1;
    // }

    // Write to the file
    my_file << "Mohan 30.\n";
    my_file << "Moye moye . \n";
    my_file << "Jitu 50 . \n";

    // Close the file after writing
    my_file.close();

    // Opening the same file for reading
    ifstream read_file("example.txt");

    // Check if the file has been opened successfully
    if (!read_file.is_open()) {
        // Print error message
        cout << "Error opening the file for reading." << endl;
        return 1;
    }

    // Read from the file line by line
    while (getline(read_file, line)) {
        cout << line << endl;
    }

    // Close the file after reading
    read_file.close();

    return 0;
}
