# Write your MySQL query statement below
select name,ifnull(sum(distance),0) as travelled_distance
from rides right join users
on rides.user_id = users.id
group by user_id
order by ifnull(sum(distance),0) desc, name asc