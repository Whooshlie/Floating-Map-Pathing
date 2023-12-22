#include <iostream>
#include <vector>
#include "shape.cpp"

using namespace std;

class Map {
public:
     std::vector<Shape> Shapes;
     void addShapes(Shape new_shape){
          Shapes.push_back(new_shape);
     }     
};