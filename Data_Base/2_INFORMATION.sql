create database information;
use information;
create table information(
FirstName varchar(50),
LastName varchar(50),
Address varchar(100),
City varchar(50),
Age int);
insert into information(FirstName,LastName,Address,City,Age)
values("Mickey","Mouse","123 Fantasy Way","Anaheim",73),
("Bat","Man","321 Cavern Ave","Gotham",54),
("Wonder","Woman","987 Truth Way","Paradise",39),
("Donal","Duck","555 Quack Street","Mallard",65),
("Bugs","Bunny","567 Carrot Street","Rascal",58),
("Wiley","Coyote","999 Acme Way","Canyon",61),
("Cat","Woman","234 Purrfect Street","Hairball",32),
("Tweety","Bird","543","Itotitaw",28);