/*
Problem:    Fizz Buzz
Date:       Jan 13, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/fizz-buzz/

Question:
Write a program that outputs the string representation of numbers from 1 to n.
But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are 
multiples of both three and five output “FizzBuzz”.

Example:
n = 15,

Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
*/


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                result.push_back("FizzBuzz");
                continue;
            }
            if(i%3==0){
                result.push_back("Fizz");
                continue;
            }
            if(i%5==0){
                result.push_back("Buzz");
                continue;
            }
            result.push_back(to_string(i));
        }
        return result;
    }
};
