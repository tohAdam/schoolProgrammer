CREATE TABLE EmployeeWorkInfo
(
 ID INT,
 FirstName VARCHAR (50),
 LastName VARCHAR (50),
 BirthDate VARCHAR (50),
 Payrate VARCHAR (20),
 HoursWorked INT
);

INSERT INTO EmployeeWorkInfo(ID, LastName, FirstName, BirthDate, Payrate, HoursWorked)
VALUES (116, 'KAY' , 'JANET', '03/29/1976','$16.60', 94),
(123, 'PERREIRA' , 'FRANCINE', '08/15/1989','$8.50', 185),
(149, 'TAKASANO' , 'FREDERICK', '05/23/1986','$12.35', 250),
(171, 'KAY' , 'JOHN', '11/17/1974','$17.80', 245),
(165, 'HONOU' , 'MORRIS', '6/9/1993','$6.70', 53);

CREATE TABLE InsurancePolicies
(
 EmployeeID INT,
 InsurancePlanType VARCHAR (50),
 DateIssued VARCHAR (50)
);

INSERT INTO InsurancePolicies(EmployeeID,InsurancePlanType,DateIssued)
VALUES (171, 'B2', '10/18/1994'),
(171, 'C1' ,'6/21/2002'),
(149, 'B2' , '8/6/2008'),
(149, 'A1' , '5/23/2006'),
(149, 'C2' , '12/18/2011');


SELECT ewi.ID, ewi.LastName, ewi.FirstName, ewi.HoursWorked, ip.InsurancePlanType
FROM EmployeeWorkInfo ewi
JOIN InsurancePolicies ip ON ewi.ID 
WHERE ewi.HoursWorked < 100;
