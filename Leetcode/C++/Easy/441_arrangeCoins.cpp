/*
Problem:    441. Arranging Coins
Date:       July 22, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/arranging-coins/

Question:
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. 
The last row of the staircase may be incomplete.
Given the integer n, return the number of complete rows of the staircase you will build.

Example 1:
Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.

Example 2:
Input: n = 8
Output: 3
Explanation: Because the 4th row is incomplete, we return 3.
 

Constraints:
1 <= n <= 2^31 - 1
*/


class Solution {
public:
    int arrangeCoins(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        long left=0,right=n,mid,curr;
        while(left<=right){
            mid=(left+right)/2;
            curr=mid*(mid+1)/2;
            if(curr==n)
                return mid;
            else if(curr<n)
                left=mid+1;
            else
                right=mid-1;
        }        
        return right;
    }
    /*int arrangeCoins(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        long res=0;
        long sum=0;
        cout<<"sum\tres\n";
        for(int i=1;;i++){
            sum+=i;
            res++;
            cout<<sum<<"\t"<<res<<endl;
            if(sum==n)
                break;
            if(sum>n){
                res--;
                break;
            }
        }
        return res;
    }*/
};
