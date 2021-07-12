/*
Problem:    414. Third Maximum Number
Date:       July 12, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/third-maximum-number/

Question:
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.
Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return if n new flowers can be planted in the flowerbed 
without violating the no-adjacent-flowers rule.

Example 1:
Input: flowerbed = [1,0,0,0,1], n = 1
Output: true

Example 2:
Input: flowerbed = [1,0,0,0,1], n = 2
Output: false
 

Constraints:
1 <= flowerbed.length <= 2 * 10^4
flowerbed[i] is 0 or 1.
There are no two adjacent flowers in flowerbed.
0 <= n <= flowerbed.length
*/


class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int count=0;
        if(flowerbed.size()==1 && flowerbed[0]==0)
            count++;
        if(flowerbed.size()>1){
            if(flowerbed[0]==0 && flowerbed[1]==0){
                count++;
                flowerbed[0]=1;
            }                
            if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0){
                count++;
                flowerbed[flowerbed.size()-1]=1;
            }
        }
        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
                count++;
                flowerbed[i]=1;
            }
        }
        
        cout<<count;
        return count>=n;
    }
};
