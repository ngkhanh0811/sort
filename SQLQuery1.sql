USE AdventureWorks2019
SELECT * FROM HumanResources.Employee
WHERE JobTitle = 'Design Engineer'

USE AdventureWorks2019
SELECT SalesOrderID, CustomerID, SalesPersonID, TerritoryID, YEAR (OrderDate) AS 
CurrentYear, YEAR (OrderDate) +1 AS NextYear
FROM Sales.SalesOrderHeader

IF DATENAME(WEEKDAY, GETDATE()) IN (N'Saturday', N'Sunday')
SELECT 'It is a Weekend';
ELSE 
SELECT 'It is a Weekday';

USE AdventureWorks2019
--Gọi tên các dòng trong Employee của file HumanResources
/*Cách để chú thích nhiều 
hơn một dòng*/
SELECT * FROM HumanResources.Employee

USE AdventureWorks2019
SELECT * FROM HumanResources.Employee
GO

USE AdventureWorks2019
GO 
SELECT ProductID
FROM Production.Product
INTERSECT
SELECT ProductID
FROM Production.WorkOrder;

USE AdventureWorks2019
SELECT SalesPersonID, YEAR(OrderDate) AS OrderYear FROM
Sales.SalesOrderHeader
WHERE CustomerID=30084
GROUP BY SalesPersonID, YEAR(OrderDate)
HAVING COUNT(*) >1 
ORDER BY SalesPersonID, OrderYear;

CREATE DATABASE [Customer_DB] ON PRIMARY
( NAME = 'Customer_DBX', FILENAME = 'C:\Program Files\Microsoft SQL Sever\MSSQL15.SQLEXPRESS\MSSQL\DATA\Customer_DB.mdf')
LOG ON 
( NAME = 'Customer_DB_log', FILENAME = 'C:\Program Files\Microsoft SQL Sever\MSSQL15.SQLEXPRESS\MSSQL\DATA\Customer_DB_log.ldf')
COLLATE SQL_Latin1_General_CP1_CI_AS