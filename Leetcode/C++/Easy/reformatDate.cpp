/*
Problem:    1507. Reformat Date
Date:       July 15, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/reformat-date/

Question:
Given a date string in the form Day Month Year, where:
Day is in the set {"1st", "2nd", "3rd", "4th", ..., "30th", "31st"}.
Month is in the set {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}.
Year is in the range [1900, 2100].

Convert the date string to the format YYYY-MM-DD, where:
YYYY denotes the 4 digit year.
MM denotes the 2 digit month.
DD denotes the 2 digit day.
 
Example 1:
Input: date = "20th Oct 2052"
Output: "2052-10-20"

Example 2:
Input: date = "6th Jun 1933"
Output: "1933-06-06"

Example 3:
Input: date = "26th May 1960"
Output: "1960-05-26"
 

Constraints:
The given dates are guaranteed to be valid, so no error handling is necessary.
*/


class Solution {
public:
    string reformatDate(string date) {
        vector<string> months;
        months.push_back("Jan");
        months.push_back("Feb");
        months.push_back("Mar");
        months.push_back("Apr");
        months.push_back("May");
        months.push_back("Jun");
        months.push_back("Jul");
        months.push_back("Aug");
        months.push_back("Sep");
        months.push_back("Oct");
        months.push_back("Nov");
        months.push_back("Dec");
        
        string ans="";
        int n=date.length();
        for(int i=n-4;i<n;i++)
            ans+=date[i];
        ans+="-";
        string m="";
        for(int i=n-8;i<n-5;i++){
            m+=date[i];
        }
        if(m!="Oct" && m!="Nov" && m!="Dec")
            ans+="0";
        for(int i=0;i<12;i++)
            if(m==months[i])
                ans+=to_string(i+1);
        ans+="-";
        if(isdigit(date[1])==false){
            ans+="0";
            ans+=date[0];
        }     
        else{
            ans+=date[0];
            ans+=date[1];
        }
        
        return ans;
    }
};
