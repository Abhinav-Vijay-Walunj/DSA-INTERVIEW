# Write your MySQL query statement below

SELECT DISTINCT name
FROM SalesPerson s
WHERE s.name NOT IN (
    SELECT name
    FROM SalesPerson s, Orders o
    WHERE s.sales_id = o.sales_id AND com_id IN (
        SELECT com_id
        FROM Company
        WHERE name = 'RED'
    )
);