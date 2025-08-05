# Write your MySQL query statement below

select p.product_name,sum(o.unit) as unit from Products p join orders o using(product_id) where month(o.order_date)=02 and year(o.order_date)=2020 group by product_id having sum(o.unit)>=100 ;

-- order date=feb 2020
-- >=100 units
-- find product name
