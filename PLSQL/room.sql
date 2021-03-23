select * from location;
DECLARE
	vroomid location.roomid%type;
	vcapacity location.capacity%type;
BEGIN
	vroomid:=&vroomid;
	select capacity into vcapacity from location where roomid=vroomid;
	if vcapacity < 50 then
		vcapacity:=50;
		update location set capacity=vcapacity where roomid=vroomid;
		commit;
	end if;
END;