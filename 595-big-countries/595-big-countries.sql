# Write your MySQL query statement below

SELECT 
    name,population,area from World
WHERE
    population >= 25000000 
    UNION
SELECT 
    name,population,area from World
WHERE
    area >= 3000000

;