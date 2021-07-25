/*
Problem:    1518. Water Bottles
Date:       July 25, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/water-bottles/

Question:
Given numBottles full water bottles, you can exchange numExchange empty water bottles for one full water bottle.
The operation of drinking a full water bottle turns it into an empty bottle.
Return the maximum number of water bottles you can drink.

Example 1:
Input: numBottles = 9, numExchange = 3
Output: 13
Explanation: You can exchange 3 empty bottles to get 1 full water bottle.
Number of water bottles you can drink: 9 + 3 + 1 = 13.

Example 2:
Input: numBottles = 15, numExchange = 4
Output: 19
Explanation: You can exchange 4 empty bottles to get 1 full water bottle. 
Number of water bottles you can drink: 15 + 3 + 1 = 19.

Example 3:
Input: numBottles = 5, numExchange = 5
Output: 6

Example 4:
Input: numBottles = 2, numExchange = 3
Output: 2
 

Constraints:
1 <= numBottles <= 100
2 <= numExchange <= 100
*/


class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        long ans=0,empty=0;
        while(numBottles!=0){
            ans+=numBottles;
            empty+=numBottles;
            numBottles=0;
            if(empty>=numExchange){
                numBottles=empty/numExchange;
                empty=empty%numExchange;
            }
            else
                break;
        }
        return ans;
    }
};
