#include <iostream>
using namespace std;

// Function prototype
bool IsPerfect(int num);

int main() {
    // Loop through values from 1 to 9999
    for (int values = 1; values < 10000; values++) {
        // Check if the number is perfect
        if (IsPerfect(values)) {
            cout << values << " is perfect" << endl;
        }
    }


    return 0;
}

// Function to check if a number is perfect
bool IsPerfect(int num) {
    int sum = 0;
    
    // Find divisors and sum them to see if its perfect 
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    return sum == num; 
}
