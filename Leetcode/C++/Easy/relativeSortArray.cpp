/*
Problem:    1122. Relative Sort Array
Date:       July 23, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/relative-sort-array/

Question:
Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.
Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2.  Elements that don't appear in arr2 should be placed at the end of arr1 
in ascending order.

 
Example 1:
Input: arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
Output: [2,2,2,1,4,3,3,9,6,7,19]
 

Constraints:
1 <= arr1.length, arr2.length <= 1000
0 <= arr1[i], arr2[i] <= 1000
All the elements of arr2 are distinct.
Each arr2[i] is in arr1.
*/


class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        int len2=arr2.size();
        int num;
        for(int i=0;i<len2;i++){
            num=count(arr1.begin(),arr1.end(),arr2[i]);
            for(int j=0;j<num;j++)
                ans.push_back(arr2[i]);
        }
        int len1=arr1.size();
        vector<int> uncommon;
        for(int i=0;i<len1;i++){
            num=count(arr2.begin(),arr2.end(),arr1[i]);
                if(num==0)
                    uncommon.push_back(arr1[i]);
                    
        }
        sort(uncommon.begin(),uncommon.end());
        int ulen=uncommon.size();
        for(int i=0;i<ulen;i++)
            ans.push_back(uncommon[i]);
        
        return ans;
    }
};
