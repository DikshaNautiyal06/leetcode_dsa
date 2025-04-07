# Write your MySQL query statement below
SELECT distinct class FROM courses where(class) in (
    SELECT class FROM courses Group by class having count(class)>=5 
)