DECLARE
	num NUMBER(7);
	rev NUMBER(7):=0;
BEGIN
	num:=&num;
	DBMS_OUTPUT.PUT_LINE('Initial Number = '||num);
	while(num>0) loop
		rev:=rev*10+mod(num,10);
		num:=floor(num/10);
	end loop;
	DBMS_OUTPUT.PUT_LINE('Reverse = '||rev);
END;