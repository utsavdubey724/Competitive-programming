/*
Problem:    345. Reverse Vowels of a String
Date:       July 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/reverse-vowels-of-a-string/

Question:
Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases.

Example 1:
Input: s = "hello"
Output: "holle"

Example 2:
Input: s = "leetcode"
Output: "leotcede"
 

Constraints:
1 <= s.length <= 3 * 10^5
s consist of printable ASCII characters.
*/


class Solution {
public:
    string reverseVowels(string s) {
        int n=s.length();
        //cout<<"i\tj\n";
        for(int i=0,j=n-1;i<j;){
            while(i<j){
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' 
                  || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                    break;
                i++;
            }
            while(i<j){
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'
                  || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U')
                    break;
                j--;
            }
            //cout<<i<<"\t"<<j<<endl;
            if(i<j)
                swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};
