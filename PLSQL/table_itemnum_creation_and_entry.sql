create table item(itemnum number(2));

DECLARE
	i number(2);
BEGIN
	FOR i IN 1..5
	LOOP
		INSERT INTO item VALUES(i);
	END LOOP;
END;

select * from item;