/*
Problem:    1925. Count Square Sum Triples
Date:       July 13, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/count-square-sum-triples/

Question:
A square triple (a,b,c) is a triple where a, b, and c are integers and a2 + b2 = c2.
Given an integer n, return the number of square triples such that 1 <= a, b, c <= n.

Example 1:
Input: n = 5
Output: 2
Explanation: The square triples are (3,4,5) and (4,3,5).

Example 2:
Input: n = 10
Output: 4
Explanation: The square triples are (3,4,5), (4,3,5), (6,8,10), and (8,6,10).
 

Constraints:
1 <= n <= 250
*/


class Solution {
public:
    int countTriples(int n) {               //Optimal Approaach
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int count=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int k=sqrt(i*i+j*j);
                if(k<=n && i*i + j*j == k*k)
                    count++;
            }
        }
        return count;
    }
    
    /*int countTriples(int n) {                 //Naive Approach
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int count=0;
        int aa,bb,cc;
        for(int c=1;c<=n;c++){
            cc=c*c;
            for(int a=1;a<=n;a++){
                if(a!=c){
                    aa=a*a;
                    for(int b=1;b<=n;b++){
                        if(a!=b){
                            if(cc == aa + b*b)
                            count++;
                        }                        
                    }
                }
            }
        }
        return count;
    }*/
};
