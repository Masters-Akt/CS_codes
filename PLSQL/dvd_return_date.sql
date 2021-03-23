DECLARE
	rental_date number(2);
	rental_month number(2);
	rental_year number(4);
	return_date number(2);
	return_month number(2);
	return_year number(4);
	tempdate date;
	temp varchar(10);
BEGIN
	rental_date:=&rental_date;
	rental_month:=&reantal_month;
	rental_year:=&rental_year;
	temp:=to_char(rental_year);
	if rental_month>=1 and rental_month<=9 then
		temp:=temp||'0'||to_char(rental_month);
	else
		temp:=temp||to_char(rental_month);
	end if;
	if rental_date>=1 and rental_date<=9 then
		temp:=temp||'0'||to_char(rental_date);
	else
		temp:=temp||to_char(rental_date);
	end if;
	tempdate:=to_date(temp, 'YYYYMMDD');
	tempdate:=tempdate+3;
	DBMS_OUTPUT.PUT_LINE('Return Date is : ');
	DBMS_OUTPUT.PUT_LINE(TO_CHAR(tempdate,'DD-Month-YYYY'));
END;