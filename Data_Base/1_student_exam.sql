create database student_exam;
use student_exam;
create table student(
rollno int auto_increment,
name varchar(10),
branch varchar(20),
primary key(rollno)
);
insert into student(rollno,name,branch)
values(1,"jay","computerscience"),
(2,"suhani","Electronic and com"),
(3,"Kriti","Electronic and com");

create table exam(
rollno int auto_increment,
s_code varchar (10),
marks int,
p_code varchar(10),
foreign key(rollno) references student(rollno)
);
insert into exam(rollno,s_code,marks,p_code)
values (1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",66,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC");