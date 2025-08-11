# Write your MySQL query statement below
select d.name as Department,e.name as Employee, Salary from Department d right join Employee e on e.departmentId=d.id where (
   select count(distinct salary) from employee e2
   where e2.departmentid=e.departmentid and e2.salary>=e.salary
)<=3;
