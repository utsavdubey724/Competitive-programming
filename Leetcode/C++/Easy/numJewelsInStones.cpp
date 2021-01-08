 
/*
Problem:    Jewels and Stones
Date:       Jan 8, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/jewels-and-stones/

Question:
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. 
Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.
Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:
Input: jewels = "aA", stones = "aAAbbbb"
Output: 3

Example 2:
Input: jewels = "z", stones = "ZZ"
Output: 0
 

Constraints:
1 <= jewels.length, stones.length <= 50
jewels and stones consist of only English letters.
All the characters of jewels are unique.
*/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelsSet;
        for(char j : jewels)
            jewelsSet.insert(j);
        int count=0;
        for(char s : stones)
            if(jewelsSet.find(s)!=jewelsSet.end())
                count++;
        return count;
    }
    /*int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> myMap;
        for(int i=0;i<stones.length();i++){
            myMap[stones[i]]++;
        }
        int count=0;
        for(int i=0;i<jewels.length();i++){
            count+=myMap[jewels[i]];
        }
        return count;
    }*/    
    /*int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> myMap;
        for(int i=0;i<stones.length();i++)
            myMap[stones[i]]++;
        int count=0;
        for(int i=0;i<jewels.length();i++){
            auto it=myMap.find(jewels[i]);
            if(it!=myMap.end())
                count+=it->second;
        }
        return count;
    }*/
    /*int numJewelsInStones(string jewels, string stones) {     
        int count=0;
        for(int i=0;i<jewels.length();i++){
            for(int j=0;j<stones.length();j++){
                if(jewels[i]==stones[j]){
                    count++;
                }
            }
        }
        return count;
    }*/
};
