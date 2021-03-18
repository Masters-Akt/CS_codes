create table areas(radius number(5), area number(14,2));

DECLARE
	pi constant number(4,2) := 3.14;
	radius number(5);
	area number(14,2);
BEGIN
	radius := 3;
	While radius <=7
	Loop
		area:=pi*power(radius,2);
		Insert into areas values(radius, area);
		radius:=radius+1;
	end loop;
end;