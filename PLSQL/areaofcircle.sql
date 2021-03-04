DECLARE
	area number(10,2);
	radius number(10,2);
	pi CONSTANT number(5,2):=3.14;
BEGIN
	radius:=&radius;
	area:=(pi*radius*radius);
	DBMS_OUTPUT.PUT_LINE('Area of circle = '||area);
END;