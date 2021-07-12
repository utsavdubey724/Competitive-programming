/*
Problem:    414. Third Maximum Number
Date:       July 12, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/third-maximum-number/

Question:
Given integer array nums, return the third maximum number in this array. If the third maximum does not exist, return the maximum number.

Example 1:
Input: nums = [3,2,1]
Output: 1
Explanation: The third maximum is 1.

Example 2:
Input: nums = [1,2]
Output: 2
Explanation: The third maximum does not exist, so the maximum (2) is returned instead.

Example 3:
Input: nums = [2,2,3,1]
Output: 1
Explanation: Note that the third maximum here means the third maximum distinct number.
Both numbers with value 2 are both considered as second maximum.
 

Constraints:
1 <= nums.length <= 104
-2^31 <= nums[i] <= 2^31 - 1
*/


class Solution {
public:   
    int thirdMax(vector<int>& nums) {           //Single Loop O(n)
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        long max=LONG_MIN,smax=LONG_MIN,tmax=LONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==max || nums[i]==smax || nums[i]==tmax)
                continue;
            if(nums[i]>max){
                tmax=smax;
                smax=max;
                max=nums[i];
            }
            else if(nums[i]>smax){
                tmax=smax;
                smax=nums[i];
            }
            else if(nums[i]>tmax)
                tmax=nums[i];
        }
        if(tmax==LONG_MIN)
            return max;
        return tmax;
    }
    
    /*int thirdMax(vector<int>& nums) {           //Using sort O(nlogn)
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        sort(nums.begin(),nums.end());
        if(nums.size()<3)
            return nums[nums.size()-1];
        int max1=nums[nums.size()-1];
        int max2,max3;
        int idx,flag=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<max1){
                max2=nums[i];
                idx=i;
                break;
            }
        }
        for(int i=idx-1;i>=0;i--){
            if(nums[i]<max2){
                max3=nums[i];
                flag=1;
                break;
            }
        }
        if(flag)
            return max3;
        return max1;
    }*/
    
    /*int thirdMax(vector<int>& nums) {         //Using set O(nlogn)
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        set<int> mySet(nums.begin(),nums.end());
        if(mySet.size()<3){
            auto it=mySet.begin();
            for(int i=0;i<mySet.size()-1;i++)
                it++;
            return *it;
        }
        else{
            auto it=mySet.begin();
            for(int i=0;i<mySet.size()-3;i++)
                it++;
            return *it;
        }
    }*/
};
