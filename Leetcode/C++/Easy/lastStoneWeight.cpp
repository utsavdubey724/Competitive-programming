/*
Problem:    1046. Last Stone Weight
Date:       July 23, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/last-stone-weight/

Question:
We have a collection of stones, each stone has a positive integer weight.
Each turn, we choose the two heaviest stones and smash them together.  Suppose the stones have weights x and y with x <= y.  
The result of this smash is:
If x == y, both stones are totally destroyed;
If x != y, the stone of weight x is totally destroyed, and the stone of weight y has new weight y-x.
At the end, there is at most 1 stone left.  Return the weight of this stone (or 0 if there are no stones left.)

 
Example 1:
Input: [2,7,4,1,8,1]
Output: 1
Explanation: 
We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of last stone.
 

Note:
1 <= stones.length <= 30
1 <= stones[i] <= 1000
*/


class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        ios_base::sync_with_stdio(0);
        cout.tie(0);
        cin.tie(0);
        priority_queue<int> pq;
        int n=stones.size();
        for(int i=0;i<n;i++)
            pq.push(stones[i]);
        while(pq.size()>1){
            int max=pq.top();
            pq.pop();
            int smax=pq.top();
            pq.pop();
            if(max==smax)
                continue;
            else
                pq.push(max-smax);
        }
        if(pq.size()!=0)
            return pq.top();
        else
            return 0;
    }
};
