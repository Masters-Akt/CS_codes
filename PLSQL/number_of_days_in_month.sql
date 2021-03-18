DECLARE
	month NUMBER(2);
	year NUMBER(4);
BEGIN
	month:=&month;
	year:=&year;
	IF month=1 OR month=3 OR month=5 OR month=7 OR month=8 OR month=10 OR month=12 THEN
		DBMS_OUTPUT.PUT_LINE('31 days');
	ELSIF month=2 THEN
		IF mod(year,4)=0 AND mod(year,100)!=0 OR mod(year,400)=0 THEN
			DBMS_OUTPUT.PUT_LINE('29 days');
		ELSE
			DBMS_OUTPUT.PUT_LINE('28 days');
		END IF;
	ELSE
		DBMS_OUTPUT.PUT_LINE('30 days');
	END IF;
END;