/*Write the function to generate the OTP CODE
1) OTP should be the combination of String from A to P and 
number should be 1 to 10.
2) */
#include <bits/stdc++.h>
using namespace std;
string generateOTP(int length) {
    const string letters = "ABCDEFGHIJKLMNOP";
    const string numbers = "12345678910";
    const string characters = letters + numbers;
    string otp;
    srand(time(0));  
    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % characters.size();
        otp += characters[randomIndex];
    }
    return otp;
}
int main() {
    int length = 6;  
    string otp = generateOTP(length);
    cout << "OTP is : " << otp << endl;
    return 0;
}
