# Write your MySQL query statement below
select e.employee_id  from Employees e left outer join Salaries s on e.employee_id = s.employee_id
where s.salary is null
union 
select s.employee_id  from Employees e right outer join Salaries s on e.employee_id = s.employee_id
where e.employee_id is null 
order by employee_id;