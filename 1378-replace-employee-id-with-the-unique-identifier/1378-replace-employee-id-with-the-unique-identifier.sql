/* Write your T-SQL query statement below */
select name, unique_id
from EmployeeUNI eu right join Employees e
on eu.id = e.id