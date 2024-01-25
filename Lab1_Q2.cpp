#include<iostream>
#include<cmath>
using namespace std;

class Point {
private:
    float x;
    float y;

public:
    // Constructors
    Point() {
        x = 0.0;
        y = 0.0;
    }

    Point(float p1, float p2) {
        x = p1;
        y = p2;
    }

    // Setter methods
    void setX(float point1) {
        x = point1;
    }

    void setY(float point2) {
        y = point2;
    }

    // Getter methods
    float getX() const {
        return x;
    }

    float getY() const {
        return y;
    }

    // Method to calculate distance to another point
    double distance(const Point& otherPoint) const {
        return sqrt((x - otherPoint.x) * (x - otherPoint.x) + (y - otherPoint.y) * (y - otherPoint.y));
    }
};

int main() {
    Point point1(1.0, 2.0);
    Point point2(4.0, 6.0);

    cout << "Point 1: " << point1.getX() << ", " << point1.getY() << endl;
    cout << "Point 2: " << point2.getX() << ", " << point2.getY() << endl;

    double distance = point1.distance(point2);
    cout << "Distance between points: " << distance << endl;

    return 0;
}
