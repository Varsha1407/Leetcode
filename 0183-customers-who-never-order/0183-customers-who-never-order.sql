# Write your MySQL query statement below
select c.name as Customers from Customers c 
left join Orders o on c.id=o.CustomerId
group by c.id 
having count(o.id)=0;
