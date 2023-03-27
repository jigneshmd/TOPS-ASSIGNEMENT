create database  Employee_Incentive;
use Employee_Incentive;
create table Employee(
Employee_ID int,
First_name varchar(50),
Last_name varchar(50),
salary int,
Joining_date datetime,
Department varchar(25)
);

insert into Employee(Employee_ID,First_name,Last_name,salary,joining_date,Department)
values
(1,"John","Abraham",1000000,"2013-01-01 12:00:00","Banking"),
(2,"Michael","Clarke",800000,"2013-01-01 12:00:00","Insurance"),
(3,"Roy","Thomas",700000,"2013-02-01 12:00:00","Banking"),
(4,"tom","Jose",600000,"2013-02-01 12:00:00","Insurance"),
(5,"Jerry","Pinto",650000,"2013-02-01 12:00:00","Insurance"),
(6,"Philip","Mathew",750000,"2013-01-01 12:00:00","Services"),
(7,"TestName1","123",650000,"2013-01-01 12:00:00","Services"),
(8,"TestNmae2","Lname%",600000,"2013-02-01 12:00:00","Insurance");
 
create table Incentive(
Employee_ref_id int,
Incentive_date date,
Incentive_amount int
);

insert into incentive(Employee_ref_id,Incentive_date,Incentive_amount)
values
(1,"2013-02-01",5000),
(2,"2013-02-01",3000),
(3,"2013-02-01",4000),
(1,"2013-01-01",4500),
(2,"2013-01-01",3500);

 -- a) Get First_Name from employee table using Tom name “Employee Name”. 
          SELECT * FROM employee_incentive.employee;    
          select first_name from employee where first_name = "tom";
          
 -- b) Get FIRST_NAME, Joining Date, and Salary from employee table.
           SELECT * FROM employee_incentive.employee;
		   select First_name,joining_date,salary from employee ;
	   --  select First_name,date_format(Joining_date, "[%d / %m /%y %H:%m:%S]" ) as jdate,salary from employee;
	   --  select date_format(Joining_date, "[%h::%m::%s]") as jtime from employee;
	   --  select date_format(Incentive_date,"%y-%M-%d")from incentive;

-- c) Get all employee details from the employee table order by First_Name Ascending and Salary descending?
			SELECT * FROM employee_incentive.employee;
			select *from employee order by First_name and salary desc;
                 
-- d) Get employee details from employee table whose first name contains ‘J’.
			 SELECT * FROM employee_incentive.employee;
			 select First_Name from Employee where First_Name like "j%";
                    
-- e) Get department wise maximum salary from employee table order by salary ascending?
			 SELECT * FROM employee_incentive.employee;
			 select max(salary) from Employee;
             select Department ,max(salary) from Employee group by Department order by salary;
                 
-- f) Select first_name, incentive amount from employee and incentives table 
-- for those employees who have incentives and incentive amount greater than 3000 
             SELECT * FROM employee_incentive.incentive;
			 SELECT * FROM employee_incentive.employee;
			 select employee.first_name,sum(incentive.Incentive_amount) as Incentive
             from employee
         
             inner join incentive
             on employee.Employee_id = incentive.Employee_ref_id
		     where incentive.incentive_amount or incentive.Incentive_amount > 3000 
             group by employee.first_name;
                  
-- g) Create After Insert trigger on Employee table which insert records in view table 
			 SELECT * FROM employee_incentive.employee;
             
             create table employee_backup
		    (
             Employee_ID  int,
             First_name  varchar(20),
             Last_name   varchar(20),
             salary   int,
		     Joining_date   datetime,
		     Department  varchar(20)
		  );
	
   -- VIEW Syntex  
--              select employee.Employee_ID,employee.First_name,employee.Last_name,employee.salary,employee.Joining_date,employee.Department 
--              from employee; 
             
             CREATE 
    ALGORITHM = UNDEFINED 
    DEFINER = `root`@`localhost` 
    SQL SECURITY DEFINER
VIEW `employee_incentive`.`employee_view1` AS
    SELECT 
        `employee_incentive`.`employee`.`Employee_ID` AS `Employee_ID`,
        `employee_incentive`.`employee`.`First_name` AS `First_name`,
        `employee_incentive`.`employee`.`Last_name` AS `Last_name`,
        `employee_incentive`.`employee`.`salary` AS `salary`,
        `employee_incentive`.`employee`.`Joining_date` AS `Joining_date`,
        `employee_incentive`.`employee`.`Department` AS `Department`
    FROM
        `employee_incentive`.`employee`
		