select * from item;
DECLARE
	itemdel number(2):=4;
BEGIN
	DELETE FROM item WHERE itemnum=itemdel;
END;