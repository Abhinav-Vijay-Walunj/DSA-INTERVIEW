# Write your MySQL query statement below
SELECT
    activity_date as day,
    count(distinct user_id) as active_users
FROM
    Activity
WHERE activity_date <= '2019-07-27' and activity_date >= '2019-06-28'
GROUP BY activity_date;