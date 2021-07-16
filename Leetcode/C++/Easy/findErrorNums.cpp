/*
Problem:    645. Set Mismatch
Date:       July 16, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/set-mismatch/

Question:
You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated 
to another number in the set, which results in repetition of one number and loss of another number.
You are given an integer array nums representing the data status of this set after the error.
Find the number that occurs twice and the number that is missing and return them in the form of an array.

Example 1:
Input: nums = [1,2,2,4]
Output: [2,3]

Example 2:
Input: nums = [1,1]
Output: [1,2]
 

Constraints:
2 <= nums.length <= 104
1 <= nums[i] <= 104
*/


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        ios_base::sync_with_stdio();
        cin.tie(0);
        int n=nums.size();
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            v[nums[i]-1]++;
        }

        int missing,extra;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                missing=i+1;
            }
            if(v[i]==2){
                extra=i+1;
            }
            if(!missing && !extra)
                break;
        }
        vector<int> ans(2);
        ans[0]=extra;
        ans[1]=missing;
        return ans;
    }
};
