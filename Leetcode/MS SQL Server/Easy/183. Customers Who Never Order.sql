/*
Problem:    183. Customers Who Never Order
Date:       August 09,2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/customers-who-never-order/

Question:

SQL Schema

Suppose that a website contains two tables, the Customers table and the Orders table. Write a SQL query to find all customers who never order anything.

Table: Customers.
+----+-------+
| Id | Name  |
+----+-------+
| 1  | Joe   |
| 2  | Henry |
| 3  | Sam   |
| 4  | Max   |
+----+-------+

Table: Orders.
+----+------------+
| Id | CustomerId |
+----+------------+
| 1  | 3          |
| 2  | 1          |
+----+------------+

Using the above tables as example, return the following:
+-----------+
| Customers |
+-----------+
| Henry     |
| Max       |
+-----------+
*/

--Solution:

SELECT c.Name AS 'Customers'
FROM Customers c LEFT JOIN Orders o ON c.Id=o.CustomerId
WHERE o.CustomerId IS NULL

--Using Subquery
/*
SELECT Name AS 'Customers'
FROM Customers 
WHERE Id NOT IN (SELECT CustomerId FROM Orders)
*/
