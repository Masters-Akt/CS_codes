//Kumar Ankit
#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
 class Rectangle{
     public:
     int width;
     int height;
     void display(){
     printf("%d %d\n",width,height);
     }
 };

 class RectangleArea : public Rectangle{
     public:
     void read_input(){
         cin>>width>>height;
     }
     void display(){
         printf("%d",width*height);
     }
 };


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}