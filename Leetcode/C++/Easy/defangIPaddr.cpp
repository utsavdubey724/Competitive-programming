/*
Problem:    Defanging an IP Address
Date:       Jan 8, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/defanging-an-ip-address/

Question:
Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period "." with "[.]".

Example 1:
Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"

Example 2:
Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"
 

Constraints:
The given address is a valid IPv4 address.
*/

class Solution {
public:
    string defangIPaddr(string address) {
        string newAddress;
        for(int i=0;i<address.length();i++){
            if(address[i]!='.')
                newAddress+=address[i];
            else
                newAddress+="[.]";
        }
        return newAddress;
    }
};
