import java.util.*;
class box {
double length, width, height;
void input (double l, double w, double h)
{
length=l;
width=w;
height=h;
}
double volume ()
{
double vol;
vol=length*width*height;
return vol;
}
}
public class lab6q1{
public static void main (String [] args)
{
Scanner in=new Scanner (System.in);
System.out.println("ENTER LENGTH, WIDTH & HEIGHT");
box obj =new box ();
obj.input(in.nextDouble(),in.nextDouble(),in.nextDouble());
double v=obj.volume();
System.out.println("VOLUME: "+v);
}
}