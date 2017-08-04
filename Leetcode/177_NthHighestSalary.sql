CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE M INT;
SET M = N - 1;
    RETURN (
        SELECT 
        DISTINCT Salary 
        FROM Employee 
        ORDER BY Salary 
        DESC 
        LIMIT M, 1
    );
END