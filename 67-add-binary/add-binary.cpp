class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0;
        int i = a.size() - 1, j = b.size() - 1;
        
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';  // Convert char '0'/'1' to integer 0/1
            if (j >= 0) sum += b[j--] - '0';
            carry = sum / 2;  // Compute carry
            result += to_string(sum % 2);  // Append the binary digit to result
        }
        
        reverse(result.begin(), result.end());  // Reverse the result string
        return result;
    }
};
