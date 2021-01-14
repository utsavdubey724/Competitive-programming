 /*
Problem:    Valid Perfect Square
Date:       Jan 14, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/valid-perfect-square/

Question:
Given a positive integer num, write a function which returns True if num is a perfect square else False.
Follow up: Do not use any built-in library function such as sqrt.

Example 1:
Input: num = 16
Output: true

Example 2:
Input: num = 14
Output: false
 

Constraints:
1 <= num <= 2^31 - 1
*/


class Solution {
public:
    bool isPerfectSquare(int num) {
        long left=1,right=num;
        while(left<=right){
            long mid=(left+right)/2;
            long sq=mid*mid;
            if(sq==num)
                return true;
            if(sq>num)
                right=mid-1;
            else
                left=mid+1;
        }
        return false;
    }
    /*bool isPerfectSquare(int num) {
        int check=sqrt(num);
        if(check*check==num)
            return true;
        else
            return false;
    }*/
};
