//Trapecio
 
public class Trapeze {
 
int biggerSide;
int smallerSide;
String colour;
int height;
 
public Trapeze () {
	this.biggerSide = 7;
	this.smallerSide = 2;
	this.colour = "red";
	this.height = 4;
}
 
public Trapeze (int biggerSide, int smallerSide, String colour, int height) {

}
 
// getters
public int getBiggerSide() {
	return this.biggerSide;
}
public int getSmallerSide() {
    return this.smsllerSide;
}
public String getColour() {
    return this.colour;
}
public int getheight() {
    return this.heigh;
}
// setters
 
public void setBiggerSide(int biggerSide) {
	this.biggerSide = biggerSide;
}
public.void setSmallerSide(int smallerSide) {//metodo y parametro
	this.smallerSide = smallerSide;//variable de la clase y refiere a la del parametro de arriba

}
 public void setColour(String colour) {
        this.colour = colour;
}
public.void setHeight(int height);
	this.height = height;
}
}
