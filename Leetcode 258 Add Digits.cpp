/*
Leetcode 258 Add Digits
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Example 1:
Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.

Example 2:
Input: num = 0
Output: 0
 
Constraints:
0 <= num <= 231 - 1

Follow up: Could you do it without any loop/recursion in O(1) runtime?
*/

// The problem, widely known as digit root problem, has a congruence formula:

// https://en.wikipedia.org/wiki/Digital_root#Congruence_formula
// For base b (decimal case b = 10), the digit root of an integer is:

// dr(n) = 0 if n == 0
// dr(n) = (b-1) if n != 0 and n % (b-1) == 0
// dr(n) = n mod (b-1) if n % (b-1) != 0
// or

// dr(n) = 1 + (n - 1) % 9
// Note here, when n = 0, since (n - 1) % 9 = -1, the return value is zero (correct).

// From the formula, we can find that the result of this problem is immanently periodic, with period (b-1).

// Normal sollution //
// class Solution {
// public:
//     int addDigits(int num) {
//         while(num > 9){  
//             int tmp = 0;
//             while(num){  // > 0
//                 tmp += num % 10;  // add remainder
//                 num /= 10;
//             }
//             num = tmp;
//         }
//         return num;
//     }
// };


// Advance solution using math //
class Solution {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;
    }
};
