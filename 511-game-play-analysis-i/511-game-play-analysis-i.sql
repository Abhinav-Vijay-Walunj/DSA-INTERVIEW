# Write your MySQL query statement below
SELECT a.player_id, min(a.event_date) AS first_login FROM Activity a
group by 1