/*
Problem:    747. Largest Number At Least Twice of Others
Date:       July 20, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/largest-number-at-least-twice-of-others/

Question:
You are given an integer array nums where the largest integer is unique.
Determine whether the largest element in the array is at least twice as much as every other number in the array. If it is, return the index of the largest element,
or return -1 otherwise.

Example 1:
Input: nums = [3,6,1,0]
Output: 1
Explanation: 6 is the largest integer.
For every other number in the array x, 6 is at least twice as big as x.
The index of value 6 is 1, so we return 1.

Example 2:
Input: nums = [1,2,3,4]
Output: -1
Explanation: 4 is less than twice the value of 3, so we return -1.

Example 3:
Input: nums = [1]
Output: 0
Explanation: 1 is trivially at least twice the value as any other number because there are no other numbers.
 

Constraints:
1 <= nums.length <= 50
0 <= nums[i] <= 100
The largest element in nums is unique.
*/


class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans;
        int n=nums.size();
        vector<int> v(nums.begin(),nums.end());
        sort(v.begin(),v.end());
        if(n==1)
            return 0;
        int flag=0;
        int max=v[n-1];
        if(max>=2*v[n-2])
            flag=1;
        if(flag){
            for(int i=0;i<n;i++){
                if(nums[i]==max){
                    ans=i;
                    break;
                }
            }
        }
        else
            ans=-1;
        return ans;
    }
};
