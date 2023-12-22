#include <iostream>
#include "map.cpp"
using namespace std;

int main() {
    Shape shape1;
    shape1.addVertex(0.0, 1.1);
    shape1.addVertex(1.1, 2.1);
    shape1.addVertex(2.1, -1.1);

    Map map;
    map.addShapes(shape1);
}
