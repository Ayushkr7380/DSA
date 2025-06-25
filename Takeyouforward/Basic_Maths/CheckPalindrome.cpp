#include<bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

// Function to check whether a number is a palindrome
void checkPalindrome(int num){
    int rev = 0;        // To store the reversed number
    int temp = num;     // Store original number for comparison

    // Reverse the number
    while(temp != 0){
        rev = rev * 10 + (temp % 10);  // Add last digit to rev
        temp /= 10;                    // Remove the last digit
    }

    // Check if the reversed number is equal to the original
    if(rev == num){
        cout << num << " is a palindrome number." << endl;
    }
    else{
        cout << num << " is not a palindrome number." << endl;
    }
}

int main(){
    int num = 151;             // Input number
    checkPalindrome(num);      // Check if it's a palindrome
    return 0;                  // Indicate successful termination
}
