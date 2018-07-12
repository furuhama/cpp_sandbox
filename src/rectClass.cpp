// class definition

#include <iostream>

class Rectangle {
    int width, height;
 public:
    void set_values(int x, int y);
    int get_area();
};

void Rectangle::set_values(int x, int y) {
    width = x;
    height = y;
}

int Rectangle::get_area() {
    return width * height;
}

int main() {
    // make Rectangle class instance
    Rectangle rect1, rect2;

    rect1.set_values(1, 2);
    rect2.set_values(3, 4);

    std::cout << "rect1's area: " << rect1.get_area() << std::endl;
    std::cout << "rect2's area: " << rect2.get_area() << std::endl;

    return 0;
}
