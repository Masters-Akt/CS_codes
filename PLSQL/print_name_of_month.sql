DECLARE
	month_number NUMBER(2);
	mname varchar(10);
BEGIN
	month_number:=&month_number;
	if month_number=1 then
		DBMS_OUTPUT.PUT_LINE('JANUARY');
	elsif month_number=2 then
		DBMS_OUTPUT.PUT_LINE('FEBRUARY');
	elsif month_number=3 then
		DBMS_OUTPUT.PUT_LINE('MARCH');
	elsif month_number=4 then
		DBMS_OUTPUT.PUT_LINE('APRIL');
	elsif month_number=5 then
		DBMS_OUTPUT.PUT_LINE('MAY');
	elsif month_number=6 then
		DBMS_OUTPUT.PUT_LINE('JUNE');
	elsif month_number=7 then
		DBMS_OUTPUT.PUT_LINE('JULY');
	elsif month_number=8 then
		DBMS_OUTPUT.PUT_LINE('AUGUST');
	elsif month_number=9 then
		DBMS_OUTPUT.PUT_LINE('SEPTEMBER');
	elsif month_number=10 then
		DBMS_OUTPUT.PUT_LINE('OCTOBER');
	elsif month_number=11 then
		DBMS_OUTPUT.PUT_LINE('NOVEMBER');
	elsif month_number=12 then
		DBMS_OUTPUT.PUT_LINE('DECEMBER');
	else
		DBMS_OUTPUT.PUT_LINE('Enter between 1 and 12 only');
	end if;
END;