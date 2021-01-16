
/*
Problem:    Lemonade Change
Date:       Jan 16, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/lemonade-change/

Question:
At a lemonade stand, each lemonade costs $5. 
Customers are standing in a queue to buy from you, and order one at a time (in the order specified by bills).
Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill.  You must provide the correct change to each customer, so that 
the net transaction is that the customer pays $5.
Note that you don't have any change in hand at first.
Return true if and only if you can provide every customer with correct change.

Example 1:
Input: [5,5,5,10,20]
Output: true
Explanation: 
From the first 3 customers, we collect three $5 bills in order.
From the fourth customer, we collect a $10 bill and give back a $5.
From the fifth customer, we give a $10 bill and a $5 bill.
Since all customers got correct change, we output true.

Example 2:
Input: [5,5,10]
Output: true

Example 3:
Input: [10,10]
Output: false

Example 4:
Input: [5,5,10,10,20]
Output: false
Explanation: 
From the first two customers in order, we collect two $5 bills.
For the next two customers in order, we collect a $10 bill and give back a $5 bill.
For the last customer, we can't give change of $15 back because we only have two $10 bills.
Since not every customer received correct change, the answer is false.
 

Note:
0 <= bills.length <= 10000
bills[i] will be either 5, 10, or 20.
*/


namespace{
    class Solution {
    public:
        bool lemonadeChange(vector<int>& bills) {
            int count5=0,count10=0;
            int flag=1;
            for(int i=0;i<bills.size();i++){
                if(bills[i]==5){
                    count5++;
                    continue;
                }
                if(bills[i]==10){
                    count10++;
                    if(count5>0)
                        count5--;
                    else{
                        flag=0;
                        break;
                    }
                }
                else{
                    if(count10>0 && count5>0){
                        count10--;
                        count5--;
                    }
                    else if(count5>2)
                        count5-=3;
                    else{
                        flag=0;
                        break;
                    }
                }
            }
            if(flag)
                return true;
            return false;
        }
    };
    static const auto fast=[]() {ios_base::sync_with_stdio(false);
                                 cin.tie(nullptr);cout.tie(nullptr);
                                 return nullptr;}();
}
