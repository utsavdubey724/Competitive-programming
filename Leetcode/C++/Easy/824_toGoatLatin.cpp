/*
Problem:    824. Goat Latin
Date:       July 22, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/goat-latin/

Question:
A sentence sentence is given, composed of words separated by spaces. Each word consists of lowercase and uppercase letters only.
We would like to convert the sentence to "Goat Latin" (a made-up language similar to Pig Latin.)

The rules of Goat Latin are as follows:
If a word begins with a vowel (a, e, i, o, or u), append "ma" to the end of the word.
For example, the word 'apple' becomes 'applema'.
 
If a word begins with a consonant (i.e. not a vowel), remove the first letter and append it to the end, then add "ma".
For example, the word "goat" becomes "oatgma".
 
Add one letter 'a' to the end of each word per its word index in the sentence, starting with 1.
For example, the first word gets "a" added to the end, the second word gets "aa" added to the end and so on.

Return the final sentence representing the conversion from sentence to Goat Latin. 

Example 1:
Input: sentence = "I speak Goat Latin"
Output: "Imaa peaksmaaa oatGmaaaa atinLmaaaaa"

Example 2:
Input: sentence = "The quick brown fox jumped over the lazy dog"
Output: "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa"
 

Notes:
sentence contains only uppercase, lowercase and spaces. Exactly one space between each word.
1 <= sentence.length <= 150.
*/


class Solution {
public:
    string toGoatLatin(string sentence) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<string> words;
        int n=sentence.length();
        string w;                       //Storing each word in vector string
        for(int i=0;i<n;i++){
            if(sentence[i] != ' '){
                w+=sentence[i];
            }
            else{
                words.push_back(w);
                w="";
            }
        }
        if(w!="")
            words.push_back(w);
        
        n=words.size();
        for(int i=0;i<n;i++){                //Processing given rules on each word
            w=words[i];
            if(w[0]=='a' || w[0]=='e' || w[0]=='i' || w[0]=='o' || w[0]=='u' || 
              w[0]=='A' || w[0]=='E' || w[0]=='I' || w[0]=='O' || w[0]=='U'){
                w+="ma";
                for(int j=0;j<=i;j++)
                    w+="a";
            }
            else{
                string temp;
                for(int j=1;j<w.length();j++)
                    temp+=w[j];
                temp+=w[0];
                temp+="ma";
                for(int j=0;j<=i;j++)
                    temp+="a";
                w=temp;
            }
            words[i]=w;
        }
        
        sentence="";                //Converting vector string back to string
        for(int i=0;i<n-1;i++){
            sentence+=words[i];
            sentence+=" ";
        }
        sentence+=words[n-1];
        
        
        return sentence;
    }
};
