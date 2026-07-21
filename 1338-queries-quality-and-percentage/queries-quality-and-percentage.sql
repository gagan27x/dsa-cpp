# Write your MySQL query statement below
select query_name, 
round(1.0 * avg(rating/position),2) as quality,
round(100.0 * avg(case when rating < 3 then 1 else 0 end),2) as poor_query_percentage
from queries group by query_name;