# Write your MySQL query statement below
SELECT a1.name
From Employee a1 inner join Employee a2 on a1.id=a2.managerId 
 
group by a1.id
having count(a2.managerId)>=5