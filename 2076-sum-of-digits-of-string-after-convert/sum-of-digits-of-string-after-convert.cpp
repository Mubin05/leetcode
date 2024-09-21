class Solution {
public:
    int getLucky(string s, int k) 
    {
        string numStr = "";
        
        // Step 1: Convert the string to corresponding alphabet positions
        for (char ch : s) {
            int val = ch - 'a' + 1;  // Convert character to its position in the alphabet
            numStr += to_string(val); // Append the value as a string
        }
        
        // Step 2: Sum the digits of the resulting string
        int sum = 0;
        for (char ch : numStr) {
            sum += ch - '0'; // Convert each character to its digit and sum it
        }
        
        // Step 3: Repeat the transformation k-1 times (first transformation done above)
        k--;
        while (k > 0) {
            int newSum = 0;
            while (sum > 0) {
                newSum += sum % 10; // Sum the digits
                sum /= 10;          // Reduce sum by removing the last digit
            }
            sum = newSum; // Update sum with the new sum
            k--;
        }
        
        return sum;
    }
};
