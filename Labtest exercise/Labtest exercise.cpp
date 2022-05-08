#include <iostream>
#include <string>
using namespace std;
class box
{
private:
	int top, bottom, left, right;
	string color ;
public: 
	void setbox(int t, int b, int l, int r);
	int boxArea(void);
	void setcolor(string c)
	{
		color = c;
	}
	string getcolor(void)
	{
		return color;
	}
};

void box::setbox(int t, int b, int l, int r)
{top = t;
bottom = b;
left = l;
right = r;

}
int box::boxArea(void)
{
	return (right - left) * (bottom - top);
}

void main()
{
	box button; //button is an object
	button.setbox(5, 10, 10, 20);
	cout << "Area of the Box is : ";
	
	cout << button.boxArea();
		cout << endl;
		button.setcolor("red");
cout << "color is: " <<button.getcolor();
}