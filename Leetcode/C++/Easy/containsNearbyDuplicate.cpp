/*
Problem:    219. Contains Duplicate II
Date:       July 17, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/contains-duplicate-ii/

Question:
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

Example 1:
Input: nums = [1,2,3,1], k = 3
Output: true

Example 2:
Input: nums = [1,0,1,1], k = 1
Output: true

Example 3:
Input: nums = [1,2,3,1,2,3], k = 2
Output: false
 

Constraints:
1 <= nums.length <= 10^5
-10^9 <= nums[i] <= 10^9
0 <= k <= 10^5
*/


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=nums.size();
        unordered_map<int,int> myMap;
        for(int i=0;i<n;i++){
            if(myMap.count(nums[i])){
                if(i-myMap[nums[i]] <= k)
                    return true;
            }
            myMap[nums[i]]=i;
        }
        return false;
    }
    /*bool containsNearbyDuplicate(vector<int>& nums, int k){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=nums.size();
        unordered_map<int,int> myMap;
        for(int i=0;i<n;i++){
            int curr=nums[i];
            auto it=myMap.find(curr);
            if(it!=myMap.end() && i-it->second<=k){
                return true;
            }
            else
                myMap[nums[i]]=i;
        }
        return false;
    }*/
    /*bool containsNearbyDuplicate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=nums.size();
        int flag=0;
        unordered_map<int,int> myMap;       //Storing frequency of elements
        for(int i=0;i<n;i++){
            myMap[nums[i]]++;
        }
        vector<int> v;                      //Storing duplicates
        for(auto it : myMap){
            if(it.second>=2)
                v.push_back(it.first);
        }
        int curr;
        for(int i=0;i<v.size();i++){
            curr=v[i];
            for(int j=0;j<n;j++){
                for(int a=0;a<n;a++){
                    if(j!=a){
                        if(nums[j]==nums[a] && abs(j-a)<=k){
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag)
                    break;
            }
            if(flag)
                break;
        }
        if(flag)
            return true;
        return false;
    }*/
};
