/*
Problem:    1005. Maximize Sum Of Array After K Negations
Date:       July 20, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/

Question:
Given an array nums of integers, we must modify the array in the following way: we choose an i and replace nums[i] with -nums[i], and we repeat this process k times in total.  
(We may choose the same index i multiple times.)
Return the largest possible sum of the array after modifying it in this way.

Example 1:
Input: nums = [4,2,3], k = 1
Output: 5
Explanation: Choose indices (1,) and nums becomes [4,-2,3].

Example 2:
Input: nums = [3,-1,0,2], k = 3
Output: 6
Explanation: Choose indices (1, 2, 2) and nums becomes [3,1,0,2].

Example 3:
Input: nums = [2,-3,-1,5,-4], k = 2
Output: 13
Explanation: Choose indices (1, 4) and nums becomes [2,3,-1,5,4].
 

Note:
1 <= nums.length <= 10000
1 <= k <= 10000
-100 <= nums[i] <= 100
*/


class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end());
        int temp;
        while(k!=0){
            temp=pq.top();
            if(temp>0){
                if(k%2==0)
                    break;
                else{
                    pq.pop();
                    temp=temp*-1;
                    pq.push(temp);
                    break;
                }
            }
            pq.pop();
            temp=temp*-1;
            pq.push(temp);
            k--;
        }
        int sum=0;
        while(pq.size()>0){
            temp=pq.top();
            cout<<temp<<" ";
            pq.pop();
            sum+=temp;
        }
        return sum;
    }
    /*int largestSumAfterKNegations(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
            cout<<nums[i]<<" ";
        cout<<endl;
        int i=0;
        cout<<"i\tk"<<endl;
        while(1){
            if(nums[i]<0){
                if(k>0)
                    nums[i]*=-1;
                i++;
                k--;
                cout<<i<<"\t"<<k<<endl;
            }
            if(nums[i]>=0){
                cout<<i<<"\t"<<k<<endl;
                if(k%2==0)
                    break;
                else{
                    if(k>0){
                        sort(nums.begin(),nums.end());
                        nums[0]*=-1;
                    }
                    break;
                }
            }
        }
        for(int i=0;i<nums.size();i++)
            cout<<nums[i]<<" ";
        cout<<endl;
        
        long sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        cout<<endl<<endl;
        return sum;
    }*/
};
