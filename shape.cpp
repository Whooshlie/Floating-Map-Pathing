#include <iostream>
#include <vector>
using namespace std;
using Point = std::tuple<double, double>;

class Shape {
public:
    std::vector<Point> vertex;
    Shape(){}
    Shape(std::vector<Point> vertexPoints) : vertex(vertexPoints) {}

    void addVertex(double x, double y){
        vertex.push_back(make_tuple(x, y));
    }
};