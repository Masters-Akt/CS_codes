DECLARE
	num NUMBER(7);
BEGIN
	num:=&num;
	IF mod(num,2)=0 THEN
		DBMS_OUTPUT.PUT_LINE(num||' is even.');
	ELSE
		DBMS_OUTPUT.PUT_LINE(num||' is odd.');
	END IF;
END;