# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement belo

delete from person where id not in
(select * from (select min(id) from person group by email) as p);


