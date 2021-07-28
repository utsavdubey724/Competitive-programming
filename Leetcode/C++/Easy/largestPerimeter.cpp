/*
Problem:    976. Largest Perimeter Triangle
Date:       July 28, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/largest-perimeter-triangle/

Question:
Given an integer array nums, return the largest perimeter of a triangle with a non-zero area, formed from three of these lengths. If it is impossible to form any triangle of a non-zero area, return 0.

Example 1:
Input: nums = [2,1,2]
Output: 5

Example 2:
Input: nums = [1,2,1]
Output: 0

Example 3:
Input: nums = [3,2,3,4]
Output: 10

Example 4:
Input: nums = [3,6,2,3]
Output: 8
 

Constraints:
3 <= nums.length <= 104
1 <= nums[i] <= 106
*/


class Solution {
public:
    int largestPerimeter(vector<int>& nums){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int n=nums.size(),ab;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=2;i--){
            if(nums[i-2]+nums[i-1]>nums[i])
                return nums[i-2]+nums[i-1]+nums[i];
        }
        return 0;
        
    }
    /*int largestPerimeter(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int a,b,c,perimeter=0;
        int flag=0;
        int ab,bc,ca;
        for(int i=n-1;i>=2;i--){
            a=nums[i];
            for(int j=i-1;j>=1;j--){
                b=nums[j];
                ab=a+b;
                for(int k=j-1;k>=0;k--){
                    c=nums[k];
                    bc=b+c;
                    ca=a+c;
                    if(bc<=a || ca<=b || ab<=c)
                        break;
                    if(ab>c && bc>a && ca>b){
                        perimeter=ab+c;
                        flag=1;
                        break;
                    }
                }
                if(flag)  
                    break;
            }
            if(flag)
                break;
        }
        
        return perimeter;
    }*/
};
