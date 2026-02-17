/* Write your T-SQL query statement below */
select distinct(customer_id), count(*)[count_no_trans]
from Visits v left join Transactions t
on v.visit_id = t.visit_id
where t.visit_id is null
GROUP BY customer_id
order by count_no_trans