
#include <iostream>
#include <vector>
#include <sstream>  // For using stringstream to parse input
using namespace std;

// Class to solve the Single Number problem
class Solution {
public:
    // Function to find the number occurring an odd number of times
    int getSingle(vector<int>& arr) {
        int result = 0;  // Initialize result to 0

        // XOR all elements in the array
        for (int i = 0; i < arr.size(); i++) {
            result ^= arr[i];  // XOR operation: same numbers cancel each other out
        }

        return result;  // The number occurring an odd number of times
    }
};

int main() {
    string ts;  // Variable to hold the input for number of test cases
    getline(cin, ts);  // Read the number of test cases from input
    int t = stoi(ts);  // Convert the input string to an integer

    // Loop through each test case
    while (t--) {
        vector<int> arr;  // Vector to store the elements of the array
        string input;  // Variable to hold the input line for array elements
        
        // Read the input line containing array elements
        getline(cin, input);
        
        stringstream ss(input);  // Create a stringstream object to parse the input line
        int number;  // Variable to hold each number extracted from the input line

        // Parse the input line into integers and add to the vector
        while (ss >> number) {  // Extract integers from the stringstream
            arr.push_back(number);  // Add each number to the vector
        }

        // Create an instance of the Solution class
        Solution solution;
        // Call the getSingle method to find the number that appears an odd number of times
        int oddOccurrenceNumber = solution.getSingle(arr);

        // Output the result: the number occurring an odd number of times
        cout << oddOccurrenceNumber << endl;  // Print the result for the current test case
    }

    return 0;  // Return 0 to indicate successful execution
}
