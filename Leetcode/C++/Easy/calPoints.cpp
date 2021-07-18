/*
Problem:    682. Baseball Game
Date:       July 19, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/baseball-game/

Question:
You are keeping score for a baseball game with strange rules. The game consists of several rounds, where the scores of past rounds may affect future rounds' scores.

At the beginning of the game, you start with an empty record. You are given a list of strings ops, where ops[i] is the ith operation you must apply to the record and is 
one of the following:

An integer x - Record a new score of x.
"+" - Record a new score that is the sum of the previous two scores. It is guaranteed there will always be two previous scores.
"D" - Record a new score that is double the previous score. It is guaranteed there will always be a previous score.
"C" - Invalidate the previous score, removing it from the record. It is guaranteed there will always be a previous score.
Return the sum of all the scores on the record.


Example 1:
Input: ops = ["5","2","C","D","+"]
Output: 30
Explanation:
"5" - Add 5 to the record, record is now [5].
"2" - Add 2 to the record, record is now [5, 2].
"C" - Invalidate and remove the previous score, record is now [5].
"D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
"+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
The total sum is 5 + 10 + 15 = 30.

Example 2:
Input: ops = ["5","-2","4","C","D","9","+","+"]
Output: 27
Explanation:
"5" - Add 5 to the record, record is now [5].
"-2" - Add -2 to the record, record is now [5, -2].
"4" - Add 4 to the record, record is now [5, -2, 4].
"C" - Invalidate and remove the previous score, record is now [5, -2].
"D" - Add 2 * -2 = -4 to the record, record is now [5, -2, -4].
"9" - Add 9 to the record, record is now [5, -2, -4, 9].
"+" - Add -4 + 9 = 5 to the record, record is now [5, -2, -4, 9, 5].
"+" - Add 9 + 5 = 14 to the record, record is now [5, -2, -4, 9, 5, 14].
The total sum is 5 + -2 + -4 + 9 + 5 + 14 = 27.

Example 3:
Input: ops = ["1"]
Output: 1
 

Constraints:
1 <= ops.length <= 1000
ops[i] is "C", "D", "+", or a string representing an integer in the range [-3 * 10^4, 3 * 10^4].
For operation "+", there will always be at least two previous scores on the record.
For operations "C" and "D", there will always be at least one previous score on the record.
*/


class Solution {
public:
    int calPoints(vector<string>& ops) {
        ios_base::sync_with_stdio();
        cin.tie(0);
        cout.tie(0);
        vector<string> v;
        int n=ops.size();
        int c1,c2,c3;
        string c;
        for(int i=0;i<n;i++){
            if(ops[i]=="D"){
                c1=stoi(v[v.size()-1]);
                c3=c1*2;
                c=to_string(c3);
                v.push_back(c);
            }
            else if(ops[i]=="+"){
                c1=stoi(v[v.size()-1]);
                c2=stoi(v[v.size()-2]);
                c3=c1+c2;
                c=to_string(c3);
                v.push_back(c);
            }
            else if(ops[i]=="C")
                v.pop_back();
            else{
                v.push_back(ops[i]);
            }
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            c1=stoi(v[i]);
            sum+=c1;
        }
        return sum;
    }
};
