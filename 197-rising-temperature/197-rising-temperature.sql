# Write your MySQL query statement below

WITH yesterday (recordDate, temperature) AS (
  SELECT
    recordDate,
    temperature
  FROM
    Weather
)

SELECT
  id
FROM
  Weather, yesterday
WHERE
  Weather.temperature > yesterday.temperature
    AND
  DATEDIFF(Weather.recordDate, yesterday.recordDate) = 1;
