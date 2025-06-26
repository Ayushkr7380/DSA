#include <bits/stdc++.h>
using namespace std;

// Function to reverse the digits of a number
void reverseNum(int num) {
    int rev = 0, temp = num;

    // Loop to reverse the number
    while (temp != 0) {
        rev = rev * 10 + (temp % 10); // Add last digit of temp to rev
        temp /= 10;                   // Remove the last digit from temp
    }

    // Output the reversed number
    cout << "Reverse of " << num << " is " << rev << endl;
}

int main() {
    int num = 12342; // Input number
    reverseNum(num); // Call function to reverse the number

    return 0; // Exit program
}
