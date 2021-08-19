/*
Problem:    415. Add Strings
Date:       August 01, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/add-strings/

Question:
Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.
You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

 
Example 1:
Input: num1 = "11", num2 = "123"
Output: "134"

Example 2:
Input: num1 = "456", num2 = "77"
Output: "533"

Example 3:
Input: num1 = "0", num2 = "0"
Output: "0"
 

Constraints:
1 <= num1.length, num2.length <= 10^4
num1 and num2 consist of only digits.
num1 and num2 don't have any leading zeros except for the zero itself.
*/


class Solution {
public:
    string addStrings(string num1, string num2) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        vector<long long int> v1,v2;
        for(int i=0;i<num1.size();i++)
            v1.emplace_back(num1[i]-'0');
        for(int i=0;i<num2.size();i++)
            v2.emplace_back(num2[i]-'0');
        
        /*for(int i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";
        cout<<endl;
        for(int i=0;i<v2.size();i++)
            cout<<v2[i]<<" ";
        cout<<endl;*/
        
        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        
        int n=min(v1.size(),v2.size());
        vector<long long int> res;
        int carry=0,sum,rem;
        for(int i=0;i<n;i++){
            sum=v1[i]+v2[i]+carry;
            rem=sum%10;
            carry=sum/10;
            res.push_back(rem);
        }
        if(n<=v1.size()){
            for(int i=n;i<v1.size();i++){
                sum=v1[i]+carry;
                rem=sum%10;
                carry=sum/10;
                res.push_back(rem);
            }
        }
        if(n<=v2.size()){
            for(int i=n;i<v2.size();i++){
                sum=v2[i]+carry;
                rem=sum%10;
                carry=sum/10;
                res.push_back(rem);
            }
        }
        if(carry!=0)
            res.push_back(carry);
        
        reverse(res.begin(),res.end());
        
        string sres;
        for(int i=0;i<res.size();i++){
            sres+=res[i]+'0';
        }
        
        return  sres;
    }
};
