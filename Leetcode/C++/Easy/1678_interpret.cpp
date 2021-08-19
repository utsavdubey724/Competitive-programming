/*
Problem:    Goal Parser Interpretation
Date:       Jan 8, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/goal-parser-interpretation/

Question:
You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. 
The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". 
The interpreted strings are then concatenated in the original order.
Given the string command, return the Goal Parser's interpretation of command.

Example 1
Input: command = "G()(al)"
Output: "Goal"
Explanation: The Goal Parser interprets the command as follows:
G -> G
() -> o
(al) -> al
The final concatenated result is "Goal".

Example 2:
Input: command = "G()()()()(al)"
Output: "Gooooal"

Example 3:
Input: command = "(al)G(al)()()G"
Output: "alGalooG"
 

Constraints:
1 <= command.length <= 100
command consists of "G", "()", and/or "(al)" in some order.
*/

class Solution {
public:
    string interpret(string command) {            
        string newStr;
        for(int i=0;i<command.length();){             //O(n)
            if(command[i]=='G'){
                newStr+='G';
                i++;
                continue;
            }
            if(command[i]=='(' && command[i+1]==')'){
                newStr+='o';
                i+=2;
                continue;
            }
            if(command[i]=='(' && command[i+1]=='a'){
                newStr+="al";
                i+=4;
                continue;
            }
        }
        return newStr;
    }
};
