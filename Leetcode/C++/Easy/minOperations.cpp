/*
Problem:    1598. Crawler Log Folder
Date:       July 22, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/crawler-log-folder/

Question:
The Leetcode file system keeps a log each time some user performs a change folder operation.

The operations are described below:
"../" : Move to the parent folder of the current folder. (If you are already in the main folder, remain in the same folder).
"./" : Remain in the same folder.
"x/" : Move to the child folder named x (This folder is guaranteed to always exist).
You are given a list of strings logs where logs[i] is the operation performed by the user at the ith step.

The file system starts in the main folder, then the operations in logs are performed.
Return the minimum number of operations needed to go back to the main folder after the change folder operations.

 
Example 1:
Input: logs = ["d1/","d2/","../","d21/","./"]
Output: 2
Explanation: Use this change folder operation "../" 2 times and go back to the main folder.

Example 2:
Input: logs = ["d1/","d2/","./","d3/","../","d31/"]
Output: 3

Example 3:
Input: logs = ["d1/","../","../","../"]
Output: 0
 

Constraints:
1 <= logs.length <= 10^3
2 <= logs[i].length <= 10
logs[i] contains lowercase English letters, digits, '.', and '/'.
logs[i] follows the format described in the statement.
Folder names consist of lowercase English letters and digits.
*/


class Solution {
public:
    int minOperations(vector<string>& logs) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n=logs.size();
        stack<string> myStack;
        for(int i=0;i<n;i++){
            if(logs[i]=="./")
                continue;
            else if(logs[i]=="../" && myStack.size()>0)
                myStack.pop();
            else if(logs[i]=="../" && myStack.size()==0)
                continue;
            else
                myStack.push(logs[i]);
        }
        return myStack.size();
    }
    /*int minOperations(vector<string>& logs) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n=logs.size();
        vector<string> location;
        for(int i=0;i<n;i++){
            if(logs[i]=="./")
                continue;
            else if(logs[i]=="../" && location.size()>0)
                location.pop_back();
            else if(logs[i]=="../" && location.size()==0)
                continue;
            else
                location.push_back(logs[i]);
        }
        return location.size();
    }*/
};
