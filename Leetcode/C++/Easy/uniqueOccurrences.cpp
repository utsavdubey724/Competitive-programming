/*
Problem:    Unique Number of Occurrences
Date:       Jan 11, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/unique-number-of-occurrences/

Question:
Given an array of integers arr, write a function that returns true if and only if the number of occurrences of each value in the array is unique.

Example 1:
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Example 2:
Input: arr = [1,2]
Output: false

Example 3:
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*/


class Solution {
public:
    //Method 1: Using one unordered_map and one unordered_set
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> myMap;
        unordered_set<int> mySet;
        for(int ele : arr)          //for(int i=0;i<arr.size();i++)   
            myMap[ele]++;               //myMap[arr[i]]++;  
        for(auto ele : myMap){
            if(mySet.find(ele.second) != mySet.end())
                return false;
            mySet.insert(ele.second);
        }
        return true;
    }
    
    //Method 2: Using two unordered_map
    /*bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> myMap;
        unordered_map<int,int> unique;
        for(int ele : arr)          //for(int i=0;i<arr.size();i++)   
            myMap[ele]++;               //myMap[arr[i]]++;  
        int j=0;
        for(auto ele : myMap){
            if(unique.find(ele.second) != unique.end())
                return false;
            unique[ele.second]=j++;
        }
        //for(auto ele : unique)
          //  cout<<ele.first<<" ";
        //cout<<endl;
        return true;
    }*/
    
    //Method 3: Using Brute Force
    /*bool uniqueOccurrences(vector<int>& arr) {
        int count;
        vector<int> myVec;
        for(int i=0;i<arr.size();i++){
            count=1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr.erase(arr.begin()+j--);
                }      
            }
            myVec.push_back(count);
        }
        for(int i=0;i<myVec.size();i++)
            for(int j=i+1;j<myVec.size();j++)
                if(myVec[i]==myVec[j])
                    return false;
        return true;
    }*/
};
