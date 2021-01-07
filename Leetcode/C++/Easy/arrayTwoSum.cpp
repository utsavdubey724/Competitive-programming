/*
Problem:    Two Sum
Date:       Jan 7, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/two-sum/submissions/

Question:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
 
Constraints:
2 <= nums.length <= 103
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;                              //O(n)
        unordered_map<int,int> myMap;
        for(int i=0;i<nums.size();i++){
            int n1 = nums[i];
            int n2 = target - n1;
            auto it = myMap.find(n2);
            if(it != myMap.end()){
                return {it->second, i};    
            }
            myMap[n1] = i;
        }
        return {};
    }
    /*vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;                                //O(n)
        map<int,int> myMap;
        //2(0) 7(1) 11(3) 15(4)
        for(int i=0;i<nums.size();i++)
            myMap[nums[i]]=i;                          
        for(int i=0;i<nums.size();i++){
            int find = target - nums[i];
            if(myMap[find] && myMap[find] != i){        
                ans.push_back(i);                       
                ans.push_back(myMap[find]);
                return ans;
            }
        }
        return {};
    }*/
    /*vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;                                //O(n^2)
        int flag=1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    flag=0;
                    break;
                }                
            } 
            if(flag==0)
                break;
        }
        return ans;
    }*/
};
