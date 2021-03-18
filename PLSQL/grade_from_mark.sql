DECLARE
	mark NUMBER(3);
BEGIN
	mark:=&mark;
	if mark>=90 then
		DBMS_OUTPUT.PUT_LINE('O Grade');
	elsif mark>80 then
		DBMS_OUTPUT.PUT_LINE('E Grade');
	elsif mark>70 then
		DBMS_OUTPUT.PUT_LINE('A Grade');
	elsif mark>60 then
		DBMS_OUTPUT.PUT_LINE('B Grade');
	elsif mark>50 then
		DBMS_OUTPUT.PUT_LINE('C Grade');
	else
		DBMS_OUTPUT.PUT_LINE('D Grade');
	end if;
END;