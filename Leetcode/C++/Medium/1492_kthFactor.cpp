/*
Problem:    1492. The kth Factor of n
Date:       July 24, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Medium
Source:     https://leetcode.com/problems/the-kth-factor-of-n/

Question:
Given two positive integers n and k.
A factor of an integer n is defined as an integer i where n % i == 0.
Consider a list of all factors of n sorted in ascending order, return the kth factor in this list or return -1 if n has less than k factors.

 
Example 1:
Input: n = 12, k = 3
Output: 3
Explanation: Factors list is [1, 2, 3, 4, 6, 12], the 3rd factor is 3.

Example 2:
Input: n = 7, k = 2
Output: 7
Explanation: Factors list is [1, 7], the 2nd factor is 7.

Example 3:
Input: n = 4, k = 4
Output: -1
Explanation: Factors list is [1, 2, 4], there is only 3 factors. We should return -1.

Example 4:
Input: n = 1, k = 1
Output: 1
Explanation: Factors list is [1], the 1st factor is 1.

Example 5:
Input: n = 1000, k = 3
Output: 4
Explanation: Factors list is [1, 2, 4, 5, 8, 10, 20, 25, 40, 50, 100, 125, 200, 250, 500, 1000].
 

Constraints:
1 <= k <= n <= 1000
*/


class Solution {
public:
    int kthFactor(int n, int k) {
        ios_base::sync_with_stdio(0);
        cout.tie(0);
        cin.tie(0);
        vector<int> v;
        for(int i=1;i<=n;i++){
            if(n%i==0)
                v.push_back(i);
            if(v.size()==k)
                break;
        }
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
        if(v.size()<k)
            return -1;
        return v[k-1];
    }
};
