# Write your MySQL query statement below
SELECT s.user_id,IFNULL(ROUND(SUM(action="confirmed")/COUNT(*),2),0.00)as confirmation_rate
FROM Signups s LEft join Confirmations c
on s.user_id=c.user_id
Group by s.user_id