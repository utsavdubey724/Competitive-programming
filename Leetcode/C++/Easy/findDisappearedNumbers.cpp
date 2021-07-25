/*
Problem:    448. Find All Numbers Disappeared in an Array
Date:       July 26, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

Question:
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]

Example 2:
Input: nums = [1,1]
Output: [2]
 

Constraints:
n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
 

Follow up: Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.
*/


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {     //Time Complexity O(n) ,Optimal
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
            
        int n=nums.size();
        vector<int> temp(n+1);
        for(int i=0;i<n;i++){
            temp[nums[i]]++;
        }
        nums=temp;
        temp.clear();
        
        /*for(int i=0;i<nums.size();i++)
            cout<<nums[i]<<" ";
        cout<<endl;*/
        
        for(int i=1;i<=n;i++){
            if(nums[i]==0){
                temp.push_back(i);
            }
        }
        return temp;
    }
    /*vector<int> findDisappearedNumbers(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
            
        int n=nums.size();
        unordered_map<int,bool> myMap;
        for(int i=1;i<=n;i++)
            myMap[i]=false;
        
        vector<int> ans;
        for(int i=0;i<n;i++){
            myMap[nums[i]]=true;
        }
        
        for(auto it : myMap){
            if(it.second==false)
                ans.push_back(it.first);
        }
        return ans;
    }*/
};
