/*
Problem:    985. Sum of Even Numbers After Queries
Date:       July 20, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/sum-of-even-numbers-after-queries/

Question:
We have an array nums of integers, and an array queries of queries.
For the i-th query val = queries[i][0], index = queries[i][1], we add val to nums[index].  Then, the answer to the i-th query is the sum of the even values of A.

(Here, the given index = queries[i][1] is a 0-based index, and each query permanently modifies the array nums.)

Return the answer to all queries.  Your answer array should have answer[i] as the answer to the i-th query.

Example 1:
Input: nums = [1,2,3,4], queries = [[1,0],[-3,1],[-4,0],[2,3]]
Output: [8,6,2,4]
Explanation: 
At the beginning, the array is [1,2,3,4].
After adding 1 to nums[0], the array is [2,2,3,4], and the sum of even values is 2 + 2 + 4 = 8.
After adding -3 to nums[1], the array is [2,-1,3,4], and the sum of even values is 2 + 4 = 6.
After adding -4 to nums[0], the array is [-2,-1,3,4], and the sum of even values is -2 + 4 = 2.
After adding 2 to nums[3], the array is [-2,-1,3,6], and the sum of even values is -2 + 6 = 4.
 

Note:
1 <= nums.length <= 10000
-10000 <= nums[i] <= 10000
1 <= queries.length <= 10000
-10000 <= queries[i][0] <= 10000
0 <= queries[i][1] < nums.length
*/


class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n=nums.size(),sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                sum+=nums[i];
            }
        }
        vector<int> ans(n);
        int qn=queries.size();
        int add,index;
        for(int i=0;i<qn;i++){
            add=queries[i][0];
            index=queries[i][1];
            int old=nums[index];
            nums[index]+=add;
            if(old%2==0)
                sum-=old;
            if(nums[index]%2==0)
                sum+=nums[index];
            ans[i]=sum;
        }                
        return ans;
    }
};
