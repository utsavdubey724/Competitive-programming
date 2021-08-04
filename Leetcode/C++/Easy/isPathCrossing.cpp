/*
Problem:    1496. Path Crossing
Date:       August 04, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/path-crossing/
Question:
Given a string path, where path[i] = 'N', 'S', 'E' or 'W', each representing moving one unit north, south, east, or west, respectively. You start at the origin (0, 0) on a 
2D plane and walk on the path specified by path.

Return true if the path crosses itself at any point, that is, if at any time you are on a location you have previously visited. Return false otherwise.

Example 1:
Input: path = "NES"
Output: false 
Explanation: Notice that the path doesn't cross any point more than once.

Example 2:
Input: path = "NESWW"
Output: true
Explanation: Notice that the path visits the origin twice.
 

Constraints:
1 <= path.length <= 10^4
path[i] is either 'N', 'S', 'E', or 'W'.
*/


class Solution {
public:
    bool isPathCrossing(string path) {      //Optimal
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        set<vector<int>> mySet;
        vector<int> v;
        int x=0,y=0;
        v.emplace_back(x);
        v.emplace_back(y);
        mySet.insert(v);
        int prevSize=mySet.size();
        v.clear();
        int n=path.size();
        int flag=0;
        for(int i=0;i<n;i++){
            if(path[i]=='N'){
                y++;
                v.emplace_back(x);
                v.emplace_back(y);
                mySet.insert(v);
                v.clear();
            }
            else if(path[i]=='S'){
                y--;
                v.emplace_back(x);
                v.emplace_back(y);
                mySet.insert(v);
                v.clear();
            }
            else if(path[i]=='E'){
                x++;
                v.emplace_back(x);
                v.emplace_back(y);
                mySet.insert(v);
                v.clear();
            }
            else if(path[i]=='W'){
                x--;
                v.emplace_back(x);
                v.emplace_back(y);
                mySet.insert(v);
                v.clear();
            }
            if(mySet.size()==prevSize){
                flag=1;
                break;
            }
            prevSize++;
        }   
        
        return flag;
    }
    /*bool isPathCrossing(string path) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        vector<vector<int>> v1;
        vector<int> v2;
        int x=0,y=0;
        v2.emplace_back(x);
        v2.emplace_back(y);
        v1.emplace_back(v2);
        v2.clear();
        int n=path.size();
        for(int i=0;i<n;i++){
            if(path[i]=='N'){
                y++;
                v2.emplace_back(x);
                v2.emplace_back(y);
                v1.emplace_back(v2);
                v2.clear();
                continue;
            }
            if(path[i]=='S'){
                y--;
                v2.emplace_back(x);
                v2.emplace_back(y);
                v1.emplace_back(v2);
                v2.clear();
                continue;
            }
            if(path[i]=='E'){
                x++;
                v2.emplace_back(x);
                v2.emplace_back(y);
                v1.emplace_back(v2);
                v2.clear();
                continue;
            }
            if(path[i]=='W'){
                x--;
                v2.emplace_back(x);
                v2.emplace_back(y);
                v1.emplace_back(v2);
                v2.clear();
                continue;
            }
        }
        
        sort(v1.begin(),v1.end());
        
        int flag=0;
        for(int i=0;i<v1.size()-1;i++){
            if(v1[i]==v1[i+1]){
                flag=1;
                break;
            }
        }
        
        return flag;
    }*/
};
