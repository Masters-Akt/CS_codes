DECLARE
	sid registration.studentid%type;
	cs_id registration.csid%type;
	regstat registration.regstatus%type;
BEGIN
	sid:=&sid;
	cs_id:=&cs_id;
	select regstatus into regstat from registration where csid=cs_id and studentid=sid;
	if regstat='R' then
		DBMS_OUTPUT.PUT_LINE('Reg status is R');
	else
		Update registration set regstatus='R' where csid=cs_id and studentid=sid;
		DBMS_OUTPUT.PUT_LINE('Reg status updated');
	end if;
END;