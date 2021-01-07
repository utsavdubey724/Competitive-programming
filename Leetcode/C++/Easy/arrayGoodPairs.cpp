/*
Problem:    Number of Good Pairs
Date:       Jan 6, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/number-of-good-pairs/

Question:
Given an array of integers nums.
A pair (i,j) is called good if nums[i] == nums[j] and i < j.
Return the number of good pairs.

Example 1:
Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

Example 2:
Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.

Example 3:
Input: nums = [1,2,3]
Output: 0
 
Constraints:
1 <= nums.length <= 100
1 <= nums[i] <= 100
*/

class Solution {
    public:
    int numIdenticalPairs(vector<int>& nums) {      //O(n)
        int count=0;
        unordered_map<int,int> myMap;
        for(int i=0;i<nums.size();i++){
            count+=myMap[nums[i]];
            myMap[nums[i]]++;
        }
        return count;
    }
    /*int numIdenticalPairs(vector<int>& nums) {      //O(n^2)
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j])
                    count++;
            }
        }
        return count;
    }*/
};
