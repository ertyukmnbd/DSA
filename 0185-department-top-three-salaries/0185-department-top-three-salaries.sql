# Write your MySQL query statement below
SELECT t.Department, t.Employee, t.Salary FROM (
SELECT t2.name AS Department, t1.name AS Employee, t1.salary AS Salary, DENSE_RANK() OVER(PARTITION BY t2.name ORDER BY t1.salary DESC) AS rnk FROM Employee t1 LEFT JOIN Department t2 ON t1.departmentID=t2.id) t
WHERE rnk<=3;
