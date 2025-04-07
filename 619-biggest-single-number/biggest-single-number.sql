# Write your MySQL query statement below
SELECT MAX(num) as num FROM MyNumbers Where(num)In
(SELECT DISTINCT num 
FROM MyNumbers
Group by num
having count(num)=1

)
