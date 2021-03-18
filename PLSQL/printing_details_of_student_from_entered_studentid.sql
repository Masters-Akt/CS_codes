select * from student;

DECLARE
	sid student.studentid%type;
	fname student.first%type;
	lname student.last%type;
	scity student.city%type;
	sphone student.phone%type;
BEGIN
	sid:=&sid;
	select first into fname from student where studentid=sid;
	select last into lname from student where studentid=sid;
	select city into scity from student where studentid=sid;
	select phone into sphone from student where studentid=sid;
	DBMS_OUTPUT.PUT_LINE('Name : '||fname||' '||lname);
	DBMS_OUTPUT.PUT_LINE('City : '||scity);
	DBMS_OUTPUT.PUT_LINE('Phone : '||sphone);
END;