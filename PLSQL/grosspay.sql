DECLARE
	grosspay number(7,2);
	hours number(7,2);
	rate number(7,2);
	netpay number(7,2);
BEGIN
	hours:=&hours;
	rate:=&rate;
	grosspay:=(hours*rate);
	netpay:=(grosspay-(0.28*grosspay));
	DBMS_OUTPUT.PUT_LINE('Gross pay = '||grosspay||' and net pay = '||netpay);
END;