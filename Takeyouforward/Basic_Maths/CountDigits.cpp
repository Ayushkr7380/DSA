#include<bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

// Function to count the number of digits in a given number
void countDigits(int num){
    int count = 0;  // Initialize digit count to 0

    // Loop runs until all digits are removed
    while(num != 0){
        count++;     // Increment count for each digit
        num /= 10;   // Remove the last digit (integer division by 10)
    }

    // Output the total count of digits
    cout << "Count is : " << count << endl;
}

int main(){
    int num = 12121;         // Input number
    countDigits(num);        // Call function to count digits
    return 0;                // Indicate suc
}