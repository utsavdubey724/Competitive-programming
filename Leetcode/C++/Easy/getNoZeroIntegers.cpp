/*
Problem:    1317. Convert Integer to the Sum of Two No-Zero Integers
Date:       July 14, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/

Question:
Given an integer n. No-Zero integer is a positive integer which doesn't contain any 0 in its decimal representation.
Return a list of two integers [A, B] where:
A and B are No-Zero integers.
A + B = n
It's guarateed that there is at least one valid solution. If there are many valid solutions you can return any of them.

Example 1:
Input: n = 2
Output: [1,1]
Explanation: A = 1, B = 1. A + B = n and both A and B don't contain any 0 in their decimal representation.

Example 2:
Input: n = 11
Output: [2,9]

Example 3:
Input: n = 10000
Output: [1,9999]

Example 4:
Input: n = 69
Output: [1,68]

Example 5:
Input: n = 1010
Output: [11,999]
 

Constraints:
2 <= n <= 10^4
*/


class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> v(2);
        v[0]=1;
        v[1]=n-1;
        int dig,count=0;
        bool check;
        int temp=v[1];
    
        while(temp!=0){
            dig=temp%10;
            if(dig==0){
                count++;
                v[0]+=1;
                v[1]-=1;
                if(count==9){
                    v[0]+=1;
                    v[1]-=1;
                    count=0;
                }
                check=true;
            }
            temp/=10;
            if(temp==0 && check==false)
                break;
            if(temp==0){
                check=false;
                temp=v[1];
            }
        }
        
        temp=v[0];
        while(temp!=0){
            dig=temp%10;
            if(dig==0){
                count++;
                v[0]+=1;
                v[1]-=1;
                if(count==9){
                    v[0]+=1;
                    v[1]-=1;
                    count=0;
                }
                check=true;
            }
            temp/=10;
            if(temp==0 && check==false)
                break;
            if(temp==0){
                check=false;
                temp=v[0];
            }
        }
        
        return v;
    }
};
