/*
Problem:    1725. Number Of Rectangles That Can Form The Largest Square
Date:       August 02, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/

Question:
You are given an array rectangles where rectangles[i] = [li, wi] represents the ith rectangle of length li and width wi.

You can cut the ith rectangle to form a square with a side length of k if both k <= li and k <= wi. For example, if you have a rectangle [4,6], you can cut it to get a square with a side length of at most 4.

Let maxLen be the side length of the largest square you can obtain from any of the given rectangles.

Return the number of rectangles that can make a square with a side length of maxLen.

 

Example 1:
Input: rectangles = [[5,8],[3,9],[5,12],[16,5]]
Output: 3
Explanation: The largest squares you can get from each rectangle are of lengths [5,3,5,5].
The largest possible square is of length 5, and you can get it out of 3 rectangles.

Example 2:
Input: rectangles = [[2,3],[3,7],[4,3],[3,7]]
Output: 3
 

Constraints:
1 <= rectangles.length <= 1000
rectangles[i].length == 2
1 <= li, wi <= 10^9
li != wi
*/


class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int n=rectangles.size();
        int maxlen=0,currlen;
        int len,wid;
        for(int i=0;i<n;i++){           //Finding maxlen
            len=rectangles[i][0];
            wid=rectangles[i][1];
            if(len<wid)
                currlen=len;
            else
                currlen=wid;
            if(currlen>maxlen)
                maxlen=currlen;
        }
        
        int count=0;                    //Counting squares with maxlen
        for(int i=0;i<n;i++){
            len=rectangles[i][0];
            wid=rectangles[i][1];
            if(len<wid)
                currlen=len;
            else
                currlen=wid;
            if(currlen==maxlen)
                count++;
        }
        return count;
    }
};
