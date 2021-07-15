/*
Problem:    1385. Find the Distance Value Between Two Arrays
Date:       July 15, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/find-the-distance-value-between-two-arrays/

Question:
Given two integer arrays arr1 and arr2, and the integer d, return the distance value between the two arrays.
The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.

Example 1:
Input: arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2
Output: 2
Explanation: 
For arr1[0]=4 we have: 
|4-10|=6 > d=2 
|4-9|=5 > d=2 
|4-1|=3 > d=2 
|4-8|=4 > d=2 
For arr1[1]=5 we have: 
|5-10|=5 > d=2 
|5-9|=4 > d=2 
|5-1|=4 > d=2 
|5-8|=3 > d=2
For arr1[2]=8 we have:
|8-10|=2 <= d=2
|8-9|=1 <= d=2
|8-1|=7 > d=2
|8-8|=0 <= d=2

Example 2:
Input: arr1 = [1,4,2,3], arr2 = [-4,-3,6,10,20,30], d = 3
Output: 2

Example 3:
Input: arr1 = [2,1,100,3], arr2 = [-5,-2,10,-3,7], d = 6
Output: 1
 

Constraints:
1 <= arr1.length, arr2.length <= 500
-10^3 <= arr1[i], arr2[j] <= 10^3
0 <= d <= 100
*/


class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int ans=0;
        int n1=arr1.size();
        int n2=arr2.size();
        int flag;
        for(int i=0;i<n1;i++){
            flag=1;
            for(int j=0;j<n2;j++){
                if(abs(arr1[i]-arr2[j]) <=d){
                    flag=0;
                    break;
                }
            }
            if(flag)
                ans++;
        }
        return ans;
    }
    //A better approacah would be to apply binary search somehow
};
