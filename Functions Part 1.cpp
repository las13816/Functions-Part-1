#include <iostream> 
#include <cmath> 

double calcDistance(int x1, int y1, int x2, int y2);
double calcRadius(int centerX, int centerY, int pointX, int pointY);
double calcCircumference(double radius);
double calcArea(double radius); 

int main() {
	int centerX, centerY, pointX, pointY;
	double radius, circumference, area;

	std::cout << "Enter coordinate of center of the circle: (x,y): ";
	std::cin >> centerX >> centerY; 
	std::cout << "Enter the coordinates of a point on the circumference on the circle (x,y): ";
	std::cin >> pointX >> pointY; 

	radius = calcRadius(centerX, centerY, pointX, pointY);
	circumference = calcCircumference(radius);
	area = calcArea(radius);

	std::cout << "Radius: " << radius << std::endl;
	std::cout << "Circumference: " << circumference << std::endl; 
	std::cout << "Area: " << area << std::endl; 

	return 0; 
}

double calcDistance(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calcRadius(int centerX, int centerY, int pointX, int pointY) {
	return calcDistance(centerX, centerY, pointX, pointY);
}

double calcCircumference(double radius) {
	return 2 * 3.1416 * radius; 
}

double calcArea(double radius) {
	return 3.1416 * pow(radius, 2); 
}