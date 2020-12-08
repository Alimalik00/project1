#include <iostream>
using namespace std;
class rectangle
{
private:
	float width, height;

public:
	rectangle()
	{
		width = 0.0f;
		height = 0.0f;
	}
	rectangle(float a, float b)
	{
		width = a;
		height = b;
	}
	void enlarge()
	{
		this->width = this->width * 2;
		this->height = this->height * 2;

		cout << "Rectangle Enlarged ( size doubled )" << endl;
	}
	float area()
	{
		float area = 0.0;
		area = this->width * this->height;
		return area;
	}
	bool operator>(const rectangle& b)  // for comparing two objects
	{

		return(this->height > b.height && this->width > b.width);

	}
	bool operator> (rectangle& RHS) // for comparing area
	{
		return area() < RHS.area();
	}
	void display()
	{
		cout << "height of rectangle:" << height << endl;
		cout << "width of rectangle:" << width << endl;
	}
};


int main()
{
	float w = 2.23f, h = 3.14f, w1 = 25.2f, h1 = 3.12f;

	rectangle obj1(w, h), obj2(w1, h1);

	obj1.display();
	obj2.display();

	// comparing objects:

	if (obj1 > obj2)
	{
		cout << "First rectangle is bigger than the second" << endl;
	}
	else
	{
		cout << "Second rectangle is bigger than the first" << endl;
	}

	// finding area

	cout << "area of first rectangle = " << obj1.area() << endl;
	cout << "area of second rectangle = " << obj2.area() << endl;

	cout << "Enlarging rectangle 1" << endl;
	obj1.enlarge();
	cout << "Enlarging rectangle 2" << endl;
	obj2.enlarge();

	cout << "Values after enlarging: " << endl;
	obj1.display();
	obj2.display();

	// comparing areas
	cout << "comparing areas of rectangles" << endl;
	if (obj1.area() > obj1.area())
	{
		cout << "Area of rectangle 1 is greater" << endl;
	}
	else
	{
		cout << "Area of rectangle 2 is greater" << endl;
	}

}