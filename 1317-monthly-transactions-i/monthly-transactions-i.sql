# Write your MySQL query statement below
SELECT  Date_Format(trans_date,'%Y-%m') AS month,
country,
count(id)as trans_count,
sum(state='approved')as approved_count,
sum(amount) as trans_total_amount,
SUM(IF(state = 'approved', amount, 0))as approved_total_amount

From Transactions
Group by month,country
