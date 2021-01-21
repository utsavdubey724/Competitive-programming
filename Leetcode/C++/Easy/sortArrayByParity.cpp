/*
Problem:    905. Sort Array By Parity
Date:       Jan 21, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/sort-array-by-parity/submissions/

Question:
Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.
You may return any answer array that satisfies this condition.

Example 1:
Input: [3,1,2,4]
Output: [2,4,3,1]
The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
 

Note:
1 <= A.length <= 5000
0 <= A[i] <= 5000
*/


namespace{
    class Solution {
    public:
        vector<int> sortArrayByParity(vector<int>& A) {
            vector<int> ans(A.size());
            for(int i=0,j=A.size()-1,k=0;k<A.size();){
                if(A[k]%2!=0)
                    ans[j--]=A[k++];
                else
                   ans[i++]=A[k++];    
            }
            return ans;
        }
    };
    static const auto fast=[]() {ios_base::sync_with_stdio(false);
                                 cin.tie(nullptr);cout.tie(nullptr);
                                 return nullptr;}();
}
