DECLARE
	n number(5,2);
BEGIN
	n:=&n;
	DBMS_OUTPUT.PUT_LINE('Square = '||n**2);
	DBMS_OUTPUT.PUT_LINE('Cube = '||n**3);
	DBMS_OUTPUT.PUT_LINE('Double = '||2*n);
END;