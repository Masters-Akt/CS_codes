DECLARE
	a NUMBER(6);
	b NUMBER(6);
	c NUMBER(6);
BEGIN
	a:=&a;
	b:=&b;
	c:=&c;
	IF a>b AND a>c THEN
		DBMS_OUTPUT.PUT_LINE('Greatest = '||a);
	ELSIF b>a AND b>c THEN
		DBMS_OUTPUT.PUT_LINE('Greatest = '||b);
	ELSE
		DBMS_OUTPUT.PUT_LINE('Greatest = '||c);
	END IF;
END;