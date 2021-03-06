/*
Problem:    Happy Number
Date:       Jan 13, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/happy-number/

Question:
Write an algorithm to determine if a number n is happy.
A happy number is a number defined by the following process:
Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

Example 1:
Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

Example 2:
Input: n = 2
Output: false
 

Constraints:
1 <= n <= 2^31 - 1
*/


class Solution {
public:
    bool isHappy(int n) {
        long sum=0,rem,flag=1;
        unordered_set<int> mySet;
        while(n>0){
            rem=n%10;
            sum=sum+pow(rem,2);
            n/=10;
            if(n==0 && sum!=1){
                //cout<<sum<<endl;
                if(mySet.find(sum) != mySet.end()){
                    flag=0;
                    break;
                }
                mySet.insert(sum);
                n=sum;
                sum=0;
            }
        }
        if(flag==0)
            return false;
        return true;
    }
};
