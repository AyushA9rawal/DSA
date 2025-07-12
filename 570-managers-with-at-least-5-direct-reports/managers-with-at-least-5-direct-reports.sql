# Write your MySQL query statement below

SELECT e.name FROM Employee AS e inner join Employee AS m on e.id=m.managerId GROUP BY m.managerId HAVING count(m.managerId)>=5;