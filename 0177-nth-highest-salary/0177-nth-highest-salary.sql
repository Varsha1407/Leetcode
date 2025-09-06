CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    declare result int;
    declare skip int;
    set skip=N-1;
    select distinct salary INTO result
      from Employee
      order by salary desc
      limit 1 offset skip;
  RETURN result;
      # Write your MySQL query statement below.
      

  
END