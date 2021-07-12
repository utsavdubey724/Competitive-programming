/*
Problem:    507. Perfect Number
Date:       July 12, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/perfect-number/

Question:
A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer 
that can divide x evenly.
Given an integer n, return true if n is a perfect number, otherwise return false.

Example 1:
Input: num = 28
Output: true
Explanation: 28 = 1 + 2 + 4 + 7 + 14
1, 2, 4, 7, and 14 are all divisors of 28.

Example 2:
Input: num = 6
Output: true

Example 3:
Input: num = 496
Output: true

Example 4:
Input: num = 8128
Output: true

Example 5:
Input: num = 2
Output: false


Constraints:
1 <= num <= 10^8
*/


class Solution {
public:
    bool checkPerfectNumber(int num) {          //Optimal Approach
        if(num==1)
            return false;
        int sum=0;
        for(int i=2;i<=sqrt(num);i++)
            if(num%i==0)
                sum+=i+num/i;
        sum++;
        return sum==num;
    }
    
    /*bool checkPerfectNumber(int num) {        //Naive Approach
        if(num<4)
            return false;
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        long sum=0,count=0;
        for(int i=1;i<=num/2;i++){
            if(num%i==0){
                sum+=i;
                count++;
            }
        }
        cout<<count;
        return sum==num;
    }*/
};
