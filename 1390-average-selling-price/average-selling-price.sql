# Write your MySQL query statement below
Select p.product_id,IFNULL(Round(Sum(p.price*u.units)/sum(u.units),2),0.00) AS average_price
From Prices p 
left join UnitsSold u 
on p.product_id=u.product_id 
 AND u.purchase_date BETWEEN p.start_date AND p.end_date
group by p.product_id
