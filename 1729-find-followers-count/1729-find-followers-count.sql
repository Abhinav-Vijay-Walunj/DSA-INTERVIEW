# Write your MySQL query statement below
# select user_id, count(follower_id) as followers_count from Followers 
# group by user_id ```
SELECT DISTINCT(user_id), COUNT(follower_id) AS followers_count
FROM followers
GROUP BY user_id
ORDER BY user_id;