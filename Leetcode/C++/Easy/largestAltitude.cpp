/*
Problem:    1732. Find the Highest Altitude
Date:       July 13, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/find-the-highest-altitude/

Question:
There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes. The biker starts his trip on point 0 with altitude equal 0.
You are given an integer array gain of length n where gain[i] is the net gain in altitude between points i​​​​​​ and i + 1 for all (0 <= i < n). Return the highest altitude
of a point.

Example 1:
Input: gain = [-5,1,5,0,-7]
Output: 1
Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.

Example 2:
Input: gain = [-4,-3,-2,-1,4,3,2]
Output: 0
Explanation: The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.
 

Constraints:
n == gain.length
1 <= n <= 100
-100 <= gain[i] <= 100
*/


class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        ios_base::sync_with_stdio(0);                   //Modifying the same vector
        cin.tie(0);
        int n=gain.size();
        int max=INT_MIN;
        for(int i=1;i<n;i++){
            gain[i]+=gain[i-1];
            if(gain[i]>max)
                max=gain[i];
        }
        if(max<gain[0])
            max=gain[0];
        if(max>0)
            return max;
        return 0;
    }
    /*int largestAltitude(vector<int>& gain) {          By creating new vector
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=gain.size();
        vector<int> v(n+1,0);
        int max=INT_MIN;
        for(int i=1;i<n+1;i++){
            v[i]=v[i-1]+gain[i-1];
            if(v[i]>max)
                max=v[i];
        }
        if(v[0]>max)
            return v[0];
        return max;
    }*/
};
