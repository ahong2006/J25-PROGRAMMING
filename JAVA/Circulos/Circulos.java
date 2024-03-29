Circle circle1 = new Circle();
Circle c2 = new Circle(5.0);
Circle c3 = new Circle(5.0);
Circle colinRobinson = new Circle(-2.0, "greenish");
Circle circle5 = new Circle(1.0, "blue");

public class Circle {  
   double radius;
   String color;
   double centerX;
   double centerY;
   
   Circle() { // the implementation of the contructor }
   
   //accessor
   
   public double getRadius() { return this.radius;} 
   public String getColor() { return this.color;}
   public double getArea() {return this.radius*this.radius*Math.PI;}
   public double getCenterX() {
	   return this.centerX;
   }
   public double getCenterY()  {
	   return this.centerY;
   }
   //mutators 
   public void setRadius(double radius) {
	 this.radius = radius;  
   }
   public void setColor(String color) {
	 this.color = color;
   }
   // "other"
   public void move(double deltaX, double deltaY) {
	   this.centerX = this.centerX + deltaX;
	   this.centerY = this.centerY + deltaY;
   }
}


