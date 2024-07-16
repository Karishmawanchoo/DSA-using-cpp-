#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> s;
    int choice;
    
    while (true) {
        cout << "Enter your choice\n";
        cout << "1. Size of the stack\n";
        cout << "2. Insert element\n";
        cout << "3. Delete element\n";
        cout << "4. Top element\n";
        cout << "5. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Size of stack is: " << s.size() << endl;
                break;
            case 2: {
                cout << "Enter the string to be inserted: ";
                string elem;
                cin >> elem;
                s.push(elem);
                break;
            }
            case 3:
                if (s.empty()) {
                    cout << "Stack is empty" << endl;
                } else {
                    s.pop();
                    cout << "Top element removed" << endl;
                }
                break;
            case 4:
                if (s.empty()) {
                    cout << "Stack is empty" << endl;
                } else {
                    cout << "Top element is: " << s.top() << endl;
                }
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
