DECLARE
	a number(5,2);
	b number(5,2);
	temp number(5,2);
BEGIN
	a:=&a;
	b:=&b;
	DBMS_OUTPUT.PUT_LINE('Before swapping : ');
	DBMS_OUTPUT.PUT_LINE('A = '||a||' B = '||b);
	DBMS_OUTPUT.PUT_LINE('After swapping : ');
	temp:=a;
	a:=b;
	b:=temp;
	DBMS_OUTPUT.PUT_LINE('A = '||a||' B = '||b);
END;