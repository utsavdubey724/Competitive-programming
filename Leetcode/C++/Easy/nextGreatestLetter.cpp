/*
Problem:    744. Find Smallest Letter Greater Than Target
Date:       July 16, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/find-smallest-letter-greater-than-target/

Question:
Given a characters array letters that is sorted in non-decreasing order and a character target, return the smallest character in the array that is larger than target.
Note that the letters wrap around.
For example, if target == 'z' and letters == ['a', 'b'], the answer is 'a'.
 
Example 1:
Input: letters = ["c","f","j"], target = "a"
Output: "c"

Example 2:
Input: letters = ["c","f","j"], target = "c"
Output: "f"

Example 3:
Input: letters = ["c","f","j"], target = "d"
Output: "f"

Example 4:
Input: letters = ["c","f","j"], target = "g"
Output: "j"

Example 5:
Input: letters = ["c","f","j"], target = "j"
Output: "c"
 

Constraints:
2 <= letters.length <= 10^4
letters[i] is a lowercase English letter.
letters is sorted in non-decreasing order.
letters contains at least two different characters.
target is a lowercase English letter.
*/


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target){                //TC: O(logn)
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=letters.size();
        int left=0,right=n-1,mid;
        char c;
        while(left<=right){
            mid=(left+right)/2;
            if(letters[mid]<=target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        c=letters[left%letters.size()];
        return c;
    }
    /*char nextGreatestLetter(vector<char>& letters, char target) {             //TC: O(n)
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        char c='0';
        int n=letters.size();
        for(int i=0;i<n;i++){
            if(letters[i]>target){
                c=letters[i];
                break;
            }
        }
        if(c=='0')
            c=letters[0];
        return c;
    }*/
};
