CREATE TABLE student
  	(StudentId 	CHAR (5),
        Last      	VARCHAR2 (15) CONSTRAINT student_last_nn1 NOT NULL,
        First     	VARCHAR2 (15) CONSTRAINT student_first_nn1 NOT NULL,
        Street    	VARCHAR2 (25),
        City      	VARCHAR2 (15),
        State     	CHAR (2) DEFAULT 'NJ',
        Zip       	CHAR (5),
        StartTerm 	CHAR (4),
	BirthDate 	DATE,
	FacultyId 	NUMBER (3),
        MajorId   	NUMBER (3),
        Phone     	CHAR (10),
        CONSTRAINT student_studentid_pk1 PRIMARY KEY (StudentID));

CREATE TABLE faculty
	(FacultyId	NUMBER (3),
	Name		VARCHAR2 (15) CONSTRAINT faculty_name_nn1 NOT NULL,
	RoomId		NUMBER (2),
	Phone		CHAR (3) CONSTRAINT faculty_phone_uk1 UNIQUE,
	DeptId		NUMBER (1),
	CONSTRAINT faculty_facultyid_pk1 PRIMARY KEY (FacultyId));

CREATE TABLE course
	(CourseId	VARCHAR2 (6),
	Title		VARCHAR2 (20) CONSTRAINT course_title_uk1 UNIQUE,
	Credits		NUMBER (1) CONSTRAINT course_credits_ck1 CHECK ((credits>=0) AND (credits<=4)),
	PreReq		VARCHAR2(6),
	CONSTRAINT course_courseid_pk1 PRIMARY KEY (CourseId));

CREATE TABLE crssection
	(CsId		NUMBER (4),
	CourseId	VARCHAR2 (6) CONSTRAINT crssection_courseid_nn1 NOT NULL,
	Section		CHAR (2) CONSTRAINT crsssection_section_nn1 NOT NULL,
	TermId		CHAR (4) CONSTRAINT crssection_termid_nn1 NOT NULL,
	FacultyId	NUMBER (3),
	Day		VARCHAR2 (2),
	StartTime	VARCHAR2 (5),
	EndTime		VARCHAR2 (5),
	RoomId		NUMBER (2),
	MaxCount	NUMBER (2) CONSTRAINT crssection_maxcount_ck1 CHECK (MaxCount > 0),
	CONSTRAINT crssection_csid_pk1 PRIMARY KEY (CsId));

CREATE TABLE registration
	(StudentId	CHAR (5),
	CsId		NUMBER (4),
	Midterm		CHAR CONSTRAINT registration_midterm_ck1 CHECK (MidTerm IN ('A', 'B', 'C', 'D', 'F', 'W')),
	Final		CHAR CONSTRAINT registration_final_ck1 CHECK (final IN ('A', 'B', 'C', 'D', 'I', 'F', 'W')),
	RegStatus	CHAR CONSTRAINT reg_status_ck1 CHECK (RegStatus in ('X', 'R', 'W')),
	CONSTRAINT registration_stuid_csid_pk1 
		PRIMARY KEY (StudentId, CsId));

CREATE TABLE room
	(RoomType	CHAR,
	RoomDesc	VARCHAR2 (9),
	CONSTRAINT room_roomtype_pk1 PRIMARY KEY (RoomType));


CREATE TABLE term
	(TermId		CHAR (4),
	TermDesc	VARCHAR2 (11),
	StartDate	DATE,
	EndDate		DATE,
	CONSTRAINT term_termid_pk1 PRIMARY KEY (TermId));

CREATE TABLE location
	(RoomId		NUMBER (2),
	Building	VARCHAR2 (7) CONSTRAINT location_bulding_nn1 NOT NULL,
	RoomNo		CHAR (3) CONSTRAINT location_roomno_nn1 NOT NULL,	
	Capacity	NUMBER (2) CONSTRAINT location_capacity_check1 CHECK(Capacity>0),
	RoomType	CHAR,
	CONSTRAINT location_roomid_pk1 PRIMARY KEY (RoomId),
	CONSTRAINT location_roomno_uk1 UNIQUE (RoomNo));

CREATE TABLE major
	(MajorId	NUMBER (3),
	MajorDesc	VARCHAR2 (25),
	CONSTRAINT major_majored_pk1 PRIMARY KEY (MajorId));

CREATE TABLE department
	(DeptId		NUMBER (1),
	DeptName	VARCHAR2 (20),
	FacultyId	NUMBER (3),
	CONSTRAINT department_deptid_pk1 PRIMARY KEY (DeptId));

ALTER TABLE student
ADD CONSTRAINT student_facultyid_fk1 FOREIGN KEY (FacultyId)
	REFERENCES faculty (FacultyId);

ALTER TABLE student
ADD CONSTRAINT student_majorid_fk1 FOREIGN KEY (MajorId)
	REFERENCES major (MajorId);

ALTER TABLE student
ADD CONSTRAINT student_startterm_fk1 FOREIGN KEY (StartTerm)
	REFERENCES term (TermId);

ALTER TABLE faculty
ADD CONSTRAINT faculty_roomid_fk1 FOREIGN KEY (RoomId)
	REFERENCES location (RoomId);

ALTER TABLE faculty
ADD CONSTRAINT faculty_deptid_fk1 FOREIGN KEY (DeptId)
	REFERENCES department (DeptId);

ALTER TABLE crssection
ADD CONSTRAINT crssection_courseid_fk1 FOREIGN KEY (CourseId)
	REFERENCES course (CourseId);

ALTER TABLE crssection
ADD CONSTRAINT crssection_termid_fk1 FOREIGN KEY (TermId)
	REFERENCES term (TermId);

ALTER TABLE crssection
ADD CONSTRAINT crssection_facultyid_fk1 FOREIGN KEY (FacultyId)
	REFERENCES faculty (FacultyId);

ALTER TABLE crssection
ADD CONSTRAINT crssection_roomid_fk1 FOREIGN KEY (RoomId)
	REFERENCES location (RoomId);

ALTER TABLE registration
ADD CONSTRAINT registration_studentid_fk1 FOREIGN KEY (StudentId)
	REFERENCES student (StudentId);

ALTER TABLE registration
ADD CONSTRAINT registration_csid_fk1 FOREIGN KEY (CsId)
	REFERENCES crssection (CsId);

ALTER TABLE location
ADD CONSTRAINT location_roomtype_fk1 FOREIGN KEY (RoomType)
	REFERENCES ROOM (RoomType);

INSERT INTO course VALUES ('EN100', 'Basic English', 0, '');
INSERT INTO course VALUES ('LA123', 'English Literature', 3, 'EN100');
INSERT INTO course VALUES ('CIS253', 'Database Systems', 3, '');
INSERT INTO course VALUES ('CIS265', 'Systems Analysis', 3, 'CIS253');
INSERT INTO course VALUES ('MA150', 'College Algebra', 3, '');
INSERT INTO course VALUES ('AC101', 'Accounting', 3, '');

INSERT INTO room VALUES ('L', 'Lab');
INSERT INTO room VALUES ('C', 'Classroom');
INSERT INTO room VALUES ('O', 'Office');

INSERT INTO term VALUES ('SP02', 'Spring 2002', '28-APR-02', '16-AUG-02');
INSERT INTO term VALUES ('FL02', 'Fall 2002', '08-SEP-02', '20-DEC-02');
INSERT INTO term VALUES ('WN03', 'Winter 2003', '05-JAN-03', '18-APR-03');
INSERT INTO term VALUES ('SP03', 'Spring 2003', '27-APR-03', '15-AUG-03');
INSERT INTO term VALUES ('FL03', 'Fall 2003', '07-SEP-03', '19-DEC-03');

INSERT INTO major VALUES (100, 'AAS-Accounting');
INSERT INTO major VALUES (200, 'AAS-Computer Science');
INSERT INTO major VALUES (300, 'AAS-Telecommunications');
INSERT INTO major VALUES (400, 'BS-Accounting');
INSERT INTO major VALUES (500, 'BS-Computer Science');
INSERT INTO major VALUES (600, 'BS-Telecommunications');

INSERT INTO department VALUES (1, 'Computer Science', 111);
INSERT INTO department VALUES (2, 'Telecommunications', 222);
INSERT INTO department VALUES (3, 'Accounting', 333);
INSERT INTO department VALUES (4, 'Math and Science', 444);
INSERT INTO department VALUES (5, 'Liberal Arts', 555);

INSERT INTO location VALUES (11, 'Gandhi', 101, 2, 'O');
INSERT INTO location VALUES (12, 'Gandhi', 103, 2, 'O');
INSERT INTO location VALUES (13, 'Kennedy', 202, 35, 'L');
INSERT INTO location VALUES (14, 'Kennedy', 204, 50, 'L');
INSERT INTO location VALUES (15, 'Nehru', 301, 50, 'C');
INSERT INTO location VALUES (16, 'Nehru', 309, 45, 'C');
INSERT INTO location VALUES (17, 'Gandhi', 105, 2, 'O');
INSERT INTO location VALUES (18, 'Kennedy', 206, 40, 'L');
INSERT INTO location VALUES (19, 'Kennedy', 210, 30, 'L');
INSERT INTO location VALUES (20, 'Gandhi', 107, 2, 'O');
INSERT INTO location VALUES (21, 'Gandhi', 109, 2, 'O');

INSERT INTO faculty VALUES (111, 'Jones', 11, 525, 1);
INSERT INTO faculty VALUES (222, 'Williams', 20, 533, 2);
INSERT INTO faculty VALUES (123, 'Mobley', 11, 529, 1);
INSERT INTO faculty VALUES (235, 'Vajpayee', 12, 577, 2);
INSERT INTO faculty VALUES (345, 'Sen', 12, 579, 3);
INSERT INTO faculty VALUES (444, 'Rivera', 21, 544, 4);
INSERT INTO faculty VALUES (555, 'Chang', 17, 587, 5);
INSERT INTO faculty VALUES (333, 'Collins', 17, 599, 3);

INSERT INTO student VALUES ('00100', 'Diaz', 'Jose', '1 Ford Avenue #7', 
	'Hill', 'NJ', '08863', 'WN03', TO_DATE ('02/12/1983', 'mm/dd/yyyy'), 
	123, 100, '9735551111');
INSERT INTO student VALUES ('00101', 'Tyler', 'Mickey', '12 Morris Avenue', 
	'Bronx', 'NY', '10468', 'SP03', TO_DATE ('03/18/1984', 'mm/dd/yyyy'), 
	555, 500, '7185552222');
INSERT INTO student VALUES ('00102', 'Patel', 'Rajesh', '25 River Road #3', 
	'Edison', 'NJ', '08837', 'WN03', TO_DATE ('12/12/1985', 'mm/dd/yyyy'), 
	111, 400, '7325553333');
INSERT INTO student VALUES ('00103', 'Rickles', 'Deborah', '100 Main Street', 
	'Iselin', 'NJ', '08838', 'FL02', TO_DATE ('10/20/1970', 'mm/dd/yyyy'), 
	555, 500, '7325554444');
INSERT INTO student VALUES ('00104', 'Lee', 'Brian', '2845 First Lane', 
	'Hope', 'NY', '11373', 'WN03', TO_DATE ('11/28/1985', 'mm/dd/yyyy'), 
	345, 600, '2125555555');
INSERT INTO student VALUES ('00105', 'Khan', 'Amir', '213 Broadway', 
	'Clifton', 'NJ', '07222', 'WN03', TO_DATE ('07/07/1984', 'mm/dd/yyyy'), 
	222, 200, '2015556666');

INSERT INTO crssection VALUES (1101, 'CIS265', '01', 'WN03', 111, 'MW', 
				'09:00', '10:30', 13, 30);
INSERT INTO crssection VALUES (1102, 'CIS253', '01', 'WN03', 123, 'TR', 
				'09:00', '10:30', 18, 40);
INSERT INTO crssection VALUES (1103, 'MA150', '02', 'WN03', 444, 'F',
				'09:00', '12:00', 15, 25);
INSERT INTO crssection VALUES (1104, 'AC101', '10', 'WN03', 345, 'MW',
				'10:30', '12:00', 16, 35);
INSERT INTO crssection VALUES (1205, 'CIS265', '01', 'SP03', NULL, 'MW',
				'09:00', '10:30', 14, 35);
INSERT INTO crssection VALUES (1206, 'CIS265', '02', 'SP03', 111, 'TR',
				'09:00', '10:30', 18, 30);
INSERT INTO crssection VALUES (1207, 'LA123', '05', 'SP03', NULL, 'MW',
				'09:00', '10:30', 15, 30);
INSERT INTO crssection VALUES (1208, 'CIS253', '21', 'SP03', 123, 'TR', 
				'09:00', '10:30', 14, 40);
INSERT INTO crssection VALUES (1209, 'CIS253', '11', 'SP03', 111, 'MW',
				'09:00', '10:30', 18, 40);
INSERT INTO crssection VALUES (1210, 'CIS253', '31', 'SP03', 123, 'F', 
				'TBA', 'TBA', 19, 2);

INSERT INTO registration VALUES ('00100', 1103, 'C', 'F', 'R');
INSERT INTO registration VALUES ('00100', 1102, 'B', 'B', 'R');
INSERT INTO registration VALUES ('00100', 1104, 'B', 'A', 'R');
INSERT INTO registration VALUES ('00102', 1102, 'F', 'D', 'R');
INSERT INTO registration VALUES ('00102', 1103, 'A', 'A', 'R');
INSERT INTO registration VALUES ('00103', 1101, 'F', 'W', 'W');
INSERT INTO registration VALUES ('00103', 1104, 'D', 'D', 'R');
INSERT INTO registration VALUES ('00100', 1207, '', '', 'X');
INSERT INTO registration VALUES ('00103', 1206, '', '', 'W');
INSERT INTO registration VALUES ('00104', 1206, '', '', 'X');
INSERT INTO registration VALUES ('00104', 1207, '', '', 'R');
INSERT INTO registration VALUES ('00104', 1210, '', '', 'R');
INSERT INTO registration VALUES ('00105', 1208, '', '', 'R');
INSERT INTO registration VALUES ('00105', 1209, '', '', 'X');
INSERT INTO registration VALUES ('00101', 1205, '', '', 'X');
INSERT INTO registration VALUES ('00102', 1210, '', '', 'R');
INSERT INTO registration VALUES ('00102', 1207, '', '', 'R');
INSERT INTO registration VALUES ('00102', 1206, '', '', 'X');


ALTER TABLE course
ADD CONSTRAINT course_prereq_fk1 FOREIGN KEY(PreReq)
	REFERENCES course(CourseId);

ALTER TABLE department
ADD CONSTRAINT department_facultyid_fk1 FOREIGN KEY(FacultyId)
	REFERENCES faculty(FacultyId);