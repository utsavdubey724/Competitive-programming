/*
Problem:    176. Second Highest Salary
Date:       August 06,2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/second-highest-salary/

Question:

SQL Schema
Write a SQL query to get the second highest salary from the Employee table.
+----+--------+
| Id | Salary |
+----+--------+
| 1  | 100    |
| 2  | 200    |
| 3  | 300    |
+----+--------+

For example, given the above Employee table, the query should return 200 as the second highest salary. If there is no second highest salary, then the query should return null.
+---------------------+
| SecondHighestSalary |
+---------------------+
| 200                 |
+---------------------+
*/

--Solution:

SELECT MAX(Salary) AS SecondHighestSalary
FROM Employee
WHERE Salary NOT IN(
SELECT MAX(Salary) FROM Employee)
