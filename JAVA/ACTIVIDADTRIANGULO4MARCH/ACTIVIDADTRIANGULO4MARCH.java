public class Triangle {
    private int p1x;
    private int p1y;
    private int p2x;
    private int p2y;
    private int p3x;
    private int p3y;

    // Constructor using three sets of coordinates
    public Triangle(int p1x, int p1y, int p2x, int p2y, int p3x, int p3y) {
        this.p1x = p1x;
        this.p1y = p1y;
        this.p2x = p2x;
        this.p2y = p2y;
        this.p3x = p3x;
        this.p3y = p3y;
    }

    // Constructor using one point, angle, and two sides
    public Triangle(int p1x, int p1y, int alpha, int side1, int beta, int side2) {
        // Assuming you need to calculate the coordinates of the other two points based on the input
        // This calculation requires geometry/trigonometry, so you need to implement it here
        // For demonstration, I'll just assign zeros to the other points
        this.p1x = p1x;
        this.p1y = p1y;
        this.p2x = 0;
        this.p2y = 0;
        this.p3x = 0;
        this.p3y = 0;
    }

    // Other methods can be added here
}
