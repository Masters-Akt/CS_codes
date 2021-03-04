DECLARE
	first varchar(10);
	last varchar(10);
BEGIN
	first:=&first;
	last:=&last;
	DBMS_OUTPUT.PUT_LINE(last||', '||first);
END;