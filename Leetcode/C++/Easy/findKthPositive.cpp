/*
Problem:    1539. Kth Missing Positive Number
Date:       July 11, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/guess-number-higher-or-lower/

Question:
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.
Find the kth positive integer that is missing from this array.

Example 1:
Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.

Example 2:
Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.
 

Constraints:
1 <= arr.length <= 1000
1 <= arr[i] <= 1000
1 <= k <= 1000
arr[i] < arr[j] for 1 <= i < j <= arr.length
*/


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<int> v;
        int x=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                x++;
                continue;
            }
            else{
                v.push_back(x);
                x++;
                i--;
            }
        }
        if(v.size()<k){
            for(int i=arr[arr.size()-1];v.size()<k;i++){
                v.push_back(i+1);
            }
        }
        return v[k-1];
    }
};
