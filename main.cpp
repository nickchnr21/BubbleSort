// CPP program to illustrate
// parameterized constructors
#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	friend void point(Point a);

};
    void point(Point p)
    {
        cout<<p.a;
    }
main()
{   Point p;
    point(10,20)
    cout<<p.x;
}
