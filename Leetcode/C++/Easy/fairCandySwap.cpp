/*
Problem:    888. Fair Candy Swap
Date:       July 26, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/fair-candy-swap/

Question:
Alice and Bob have a different total number of candies. You are given two integer arrays aliceSizes and bobSizes where aliceSizes[i] is the number of candies of the ith 
box of candy that Alice has and bobSizes[j] is the number of candies of the jth box of candy that Bob has.

Since they are friends, they would like to exchange one candy box each so that after the exchange, they both have the same total amount of candy. The total amount of candy 
a person has is the sum of the number of candies in each box they have.

Return an integer array answer where answer[0] is the number of candies in the box that Alice must exchange, and answer[1] is the number of candies in the box 
that Bob must exchange. If there are multiple answers, you may return any one of them. It is guaranteed that at least one answer exists.

 
Example 1:
Input: aliceSizes = [1,1], bobSizes = [2,2]
Output: [1,2]

Example 2:
Input: aliceSizes = [1,2], bobSizes = [2,3]
Output: [1,2]

Example 3:
Input: aliceSizes = [2], bobSizes = [1,3]
Output: [2,3]

Example 4:
Input: aliceSizes = [1,2,5], bobSizes = [2,4]
Output: [5,4]
 

Constraints:
1 <= aliceSizes.length, bobSizes.length <= 104
1 <= aliceSizes[i], bobSizes[j] <= 105
Alice and Bob have a different total number of candies.
There will be at least one valid answer for the given input.
*/


class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {     //Most Optimal
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int an=aliceSizes.size();
        int asum=0;
        for(int i=0;i<an;i++){
            asum+=aliceSizes[i];
        }
        
        int bn=bobSizes.size();
        int bsum=0;
        for(int i=0;i<bn;i++){
            bsum+=bobSizes[i];
        }
        
        unordered_map<int,int> bMap;
        for(int i=0;i<bn;i++)
            bMap[bobSizes[i]]++;
        
        vector<int> ans;
        int acurr,bcurr;
        for(int i=0;i<an;i++){
            acurr=aliceSizes[i];
            bcurr=(asum-bsum-2*acurr)/(-2);
            auto it=bMap.find(bcurr);
            if(it != bMap.end()){
                ans.push_back(acurr);
                ans.push_back(bcurr);
                break;
            }
        }
        
        return ans;
    }
    
    /*vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int an=aliceSizes.size();
        int asum=0;
        for(int i=0;i<an;i++){
            asum+=aliceSizes[i];
        }
        
        int bn=bobSizes.size();
        int bsum=0;
        for(int i=0;i<bn;i++){
            bsum+=bobSizes[i];
        }
        
        unordered_map<int,int> aMap;
        for(int i=0;i<an;i++)
            aMap[aliceSizes[i]]++;
        unordered_map<int,int> bMap;
        for(int i=0;i<bn;i++)
            bMap[bobSizes[i]]++;
        
        vector<int> ans;
        int acurr,bcurr;
        for(auto it1 : aMap){
            acurr=it1.first;
            bcurr=(asum-bsum-2*acurr)/(-2);
            auto it=bMap.find(bcurr);
            if(it != bMap.end()){
                ans.push_back(acurr);
                ans.push_back(bcurr);
                break;
            }
        }
        
        return ans;
    }*/
    
    /*vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int an=aliceSizes.size();
        int asum=0;
        for(int i=0;i<an;i++){
            asum+=aliceSizes[i];
        }
        
        int bn=bobSizes.size();
        int bsum=0;
        for(int i=0;i<bn;i++){
            bsum+=bobSizes[i];
        }
        
        unordered_map<int,int> aMap;
        for(int i=0;i<an;i++)
            aMap[aliceSizes[i]]++;
        unordered_map<int,int> bMap;
        for(int i=0;i<bn;i++)
            bMap[bobSizes[i]]++;
        
        vector<int> ans;
        int acurr,bcurr;
        for(auto it1 : aMap){
            acurr=it1.first;
            bcurr=(asum-bsum-2*acurr)/(-2);
            auto it=bMap.find(bcurr);
            if(it != bMap.end()){
                ans.push_back(acurr);
                ans.push_back(bcurr);
                break;
            }
        }
        vector<int> ans;
        int acurr,bcurr,flag=1;
        for(auto it1 : aMap){
            acurr=it1.first;
            for(auto it2 : bMap){
                bcurr=it2.first;
                if(asum-acurr+bcurr == bsum-bcurr+acurr){
                    ans.push_back(acurr);
                    ans.push_back(bcurr);
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                break;
        }
        
        return ans;
    }*/
    
    /*vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int an=aliceSizes.size();
        int asum=0;
        for(int i=0;i<an;i++){
            asum+=aliceSizes[i];
        }
        
        int bn=bobSizes.size();
        int bsum=0;
        for(int i=0;i<bn;i++){
            bsum+=bobSizes[i];
        }
        
        vector<int> ans;
        int acurr,bcurr,flag=1;
        for(int i=0;i<an;i++){
            acurr=aliceSizes[i];
            bcurr=(asum-bsum-2*acurr)/(-2);
            auto it=find(bobSizes.begin(),bobSizes.end(),bcurr);
            if(it != bobSizes.end()){
                ans.push_back(acurr);
                ans.push_back(bcurr);
                break;
            }
        }
        
        return ans;
    }*/
        
    /*vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int an=aliceSizes.size();
        int asum=0;
        for(int i=0;i<an;i++){
            asum+=aliceSizes[i];
        }
        
        int bn=bobSizes.size();
        int bsum=0;
        for(int i=0;i<bn;i++){
            bsum+=bobSizes[i];
        }
        
        vector<int> ans;
        int acurr,bcurr,flag=1;
        for(int i=0;i<an;i++){
            acurr=aliceSizes[i];
            for(int j=0;j<bn;j++){
                bcurr=bobSizes[j];
                if(asum-acurr+bcurr == bsum-bcurr+acurr){
                    ans.push_back(acurr);
                    ans.push_back(bcurr);
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                break;
        }
        
        return ans;
    }*/
};
