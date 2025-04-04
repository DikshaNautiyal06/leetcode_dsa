# Write your MySQL query statement below
SELECT a1.machine_id ,Round(AVG(a2.timestamp-a1.timestamp),3) as processing_time
From Activity a1
INNER JOIN
Activity a2
Where
a1.machine_id=a2.machine_id ANd
a1.process_id=a2.process_id And
a1.timestamp<a2.timestamp
group by machine_id;