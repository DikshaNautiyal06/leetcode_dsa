# Write your MySQL query statement below
SELECT distinct employee_id, department_id
From Employee
Where(employee_id) IN (
    Select employee_id From Employee 
    Group by employee_id 
    Having count(*)=1

)
Or  primary_flag='Y'
order by employee_id