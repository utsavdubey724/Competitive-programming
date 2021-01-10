/*
Problem:    Self Dividing Numbers
Date:       Jan 10, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/self-dividing-numbers/

Question:
A self-dividing number is a number that is divisible by every digit it contains.
For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
Also, a self-dividing number is not allowed to contain the digit zero.
Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.

Example 1:
Input: 
left = 1, right = 22
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]

Note:
The boundaries of each input argument are 1 <= left <= right <= 10000.
*/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        int current,rem,flag;
        for(int i=left;i<=right;i++){
            current=i;
            flag=1;
            while(current){
                int digit=current%10;
                if(digit!=0){
                    if(i%digit!=0){
                        flag=0;
                        break;
                    }
                }
                else{
                    flag=0;
                    break;
                }
                current/=10;
            }
            if(flag)
                ans.push_back(i);
        }
        return ans;
    }
};
