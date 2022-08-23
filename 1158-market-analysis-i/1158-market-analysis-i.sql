# Write your MySQL query statement below
select user_id buyer_id, join_date, 
      (select count(item_id)
       from orders join items using(item_id)
       where year(order_date) = "2019" and buyer_id = user_id) orders_in_2019
from users