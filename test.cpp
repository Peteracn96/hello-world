#include <stdio.h>
#include <iostream>

using namespace std;

//Olá, eu sou o Pedro

//Hi, I am Peter

class Rectangle {

private:
	size_t height;
	size_t width;

public: 
	Rectangle() : height(2), width(3) { height = 4; width = 5;}
	Rectangle(size_t a, size_t b){ height = a; width = b;}
	size_t Area() {return height*width;}
};

int main(int argc, char const *argv[])
{
	Rectangle rect1;
	Rectangle rect2 {1,7};

	cout << "Area of rect1 = " << rect1.Area() << endl;
	cout << "Area of rect2 = " << rect2.Area() << endl;
	return 0;
}