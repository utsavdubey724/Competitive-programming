/*
Problem:    961. N-Repeated Element in Size 2N Array
Date:       Jan 21, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

Question:
In a array A of size 2N, there are N+1 unique elements, and exactly one of these elements is repeated N times.
Return the element repeated N times.

Example 1:
Input: [1,2,3,3]
Output: 3

Example 2:
Input: [2,1,2,5,3,2]
Output: 2

Example 3:
Input: [5,1,5,2,5,3,5,4]
Output: 5
 

Note:
4 <= A.length <= 10000
0 <= A[i] < 10000
A.length is even
*/


namespace{
    class Solution {
    public:
        int repeatedNTimes(vector<int>& A) {
            unordered_map<int,int> myMap;
            for(int i=0;i<A.size();i++)
                myMap[A[i]]++;
            int count=A.size()/2;
            for(auto it=myMap.begin();it!=myMap.end();it++){
                if(it->second==count)
                    return it->first;
            }
            return {};
        }
    };
    static const auto fast=[]() {ios_base::sync_with_stdio(false);
                                 cin.tie(nullptr);cout.tie(nullptr);
                                 return nullptr;}();
}
