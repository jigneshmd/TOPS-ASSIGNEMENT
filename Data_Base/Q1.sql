-- Q1 -- What do you understand By Database 

-- A database is an organized collection of structured information, or data, typically stored electronically in a computer system. A database is usually controlled by a database management system (DBMS).

-- • Database is a collection of related data and data is a collection of facts and figures that can be processed to produce information.

-- • Mostly data represents recordable facts. Data aids in producing information, which is based on facts. For example, if we have data about marks obtained by all students, we can then conclude about toppers and average marks.

-- • A database management system stores data in such a way that it becomes easier to retrieve, manipulate, and produce information.


-- Q2 -- What is Normalization? 

-- -- Normalization is the process of organizing the data in the database.

-- ● Normalization is used to minimize the redundancy from a relation or set of
-- relations. It is also used to eliminate the undesirable characteristics like
-- Insertion, Update and Deletion Anomalies.

-- ● Normalization divides the larger table into the smaller table and links them
-- using relationship.

-- ● The normal form is used to reduce redundancy from the database table.

-- Types of Normal Forms :-
-- There are the four types of normal forms:
-- • 1NF
-- A relation is in 1NF if it contains an atomic value.

-- • 2NF
-- A relation will be in 2NF if it is in 1NF and all non-key attributes are fully functional dependent on the primary key.

-- • 3NF
-- A relation will be in 3NF if it is in 2NF and no transition dependency exists..

-- 4-BCBF


-- Q3 --What is Difference between DBMS and RDBMS?

-- DBMS stands for Database Management System, and RDBMS is the acronym for the Relational Database Management system. In DBMS, the data is stored as a file, whereas in RDBMS, data is stored in the form of tables. 

-- RDBMS	                                                                        DBMS
-- Data stored is in table format	                                   -- Data stored is in the file format
-- Multiple data elements are accessible together	                   -- Individual access of data elements
-- Data in the form of a table are linked together	                   -- No connection between data
-- Normalisation is not achievable	                                   -- There is normalisation
-- Support distributed database	                                       -- No support for distributed database
-- Data is stored in a large amount	                                   -- Data stored is a small quantity
-- Here, redundancy of data is reduced with the help of                -- Data redundancy is common
  --key and indexes in RDBMS	                                        
-- RDBMS supports multiple users	                                   -- DBMS supports a single user
-- It features multiple layers of security while handling data	       --There is only low security while handling data
-- The software and hardware requirements are higher	               --The software and hardware requirements are low
-- Oracle, SQL Server.	                                               -- XML, Microsoft Access.


-- Q4 -- What is MF Cod Rule of RDBMS Systems? 

-- E.F Codd was a Computer Scientist who invented the Relational model for Database management. Based on relational model, the Relational database was created. Codd proposed 13 rules popularly known as Codd's 12 rules to test DBMS's concept against his relational model. Codd's rule actualy define what quality a DBMS requires in order to become a Relational Database Management System(RDBMS). Till now, there is hardly any commercial product that follows all the 13 Codd's rules. Even Oracle follows only eight and half(8.5) out of 13. The Codd's 12 rules are as follows.

-- Rule zero
-- This rule states that for a system to qualify as an RDBMS, it must be able to manage database entirely through the relational capabilities.

-- Rule 1: Information rule
-- All information(including metadata) is to be represented as stored data in cells of tables. The rows and columns have to be strictly unordered.

-- Rule 2: Guaranted Access
-- Each unique piece of data(atomic value) should be accesible by : Table Name + Primary Key(Row) + Attribute(column).

-- Rule 3: Systematic treatment of NULL
-- Null has several meanings, it can mean missing data, not applicable or no value. It should be handled consistently. Also, Primary key must not be null, ever. Expression on NULL must give null.

-- Rule 4: Active Online Catalog
-- Database dictionary(catalog) is the structure description of the complete Database and it must be stored online. The Catalog must be governed by same rules as rest of the database. The same query language should be used on catalog as used to query database.

-- Rule 5: Powerful and Well-Structured Language
-- One well structured language must be there to provide all manners of access to the data stored in the database. Example: SQL, etc. If the database allows access to the data without the use of this language, then that is a violation.

-- Rule 6: View Updation Rule
-- All the view that are theoretically updatable should be updatable by the system as well.

-- Rule 7: Relational Level Operation
-- There must be Insert, Delete, Update operations at each level of relations. Set operation like Union, Intersection and minus should also be supported.

-- Rule 8: Physical Data Independence
-- The physical storage of data should not matter to the system. If say, some file supporting table is renamed or moved from one disk to another, it should not effect the application.

-- Rule 9: Logical Data Independence
-- If there is change in the logical structure(table structures) of the database the user view of data should not change. Say, if a table is split into two tables, a new view should give result as the join of the two tables. This rule is most difficult to satisfy.

-- Rule 10: Integrity Independence
-- The database should be able to enforce its own integrity rather than using other programs. Key and Check constraints, trigger etc, should be stored in Data Dictionary. This also make RDBMS independent of front-end.

-- Rule 11: Distribution Independence
-- A database should work properly regardless of its distribution across a network. Even if a database is geographically distributed, with data stored in pieces, the end user should get an impression that it is stored at the same place. This lays the foundation of distributed database.

-- Rule 12: Nonsubversion Rule
-- If low level access is allowed to a system it should not be able to subvert or bypass integrity rules to change the data. This can be achieved by some sort of looking or encryption.


-- Q5 --What Do You Understand By Data Redundancy?

-- Data redundancy occurs when the same piece of data exists in multiple places, whereas data inconsistency is when the same data exists in different formats in multiple tables. Unfortunately, data redundancy can cause data inconsistency, which can provide a company with unreliable and/or meaningless information.


-- Q6 --What Is DDL Interpreter?

-- DDL Interpreter DDL expands to Data Definition Language. DDL Interpreter as the name suggests interprets the DDL statements such as schema definition statements like create, delete, etc. The result of this interpretation is a set of a table that contains the meta-data which is stored in the data dictionary.


-- Q7 --What Is Compiler in SQL?

-- The SQL and XQuery compiler analyzes the query to validate the syntax. If any syntax errors are detected, the query compiler stops processing and returns an appropriate error to the application that submitted the query.


-- Q8 --What is SQL Key Constranits Writing an Exampple of SQL Key Constraints.

-- SQL constraints are used to specify rules for the data in a table. Constraints are used to limit the type of data that can go into a table. This ensures the accuracy and reliability of the data in the table. If there is any violation between the constraint and the data action, the action is aborted.



-- Q9 --What is save Point? How to create a save Point write a Query? 

Savepoint is a command in SQL that is used with the rollback command.
It is a command in Transaction Control Language that is used to mark the transaction in a table.
Consider you are making a very long table, and you want to roll back only to a certain position in a table then; this can be achieved using the savepoint.
If you made a transaction in a table, you could mark the transaction as a certain name, and later on, if you want to roll back to that point, you can do it easily by using the transaction's name.
Savepoint is helpful when we want to roll back only a small part of a table and not the whole table. In simple words, we can say savepoint is a bookmark in SQL.











