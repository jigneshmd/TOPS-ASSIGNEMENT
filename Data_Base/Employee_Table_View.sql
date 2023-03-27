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