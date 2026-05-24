#include <iostream>

using namespace std;

class Rectangle {
    private:
        int width;
        int height;
    
    public:
        Rectangle() {
            width = 0;
            height = 0;
        }

        Rectangle(int width, int height) {
            this->width = width;
            this->height = height;
        }

        int area() {
            return width * height;
        }

        ~Rectangle() {
            cout << "~Rectangle" << endl;
        }
};

int main() {
    Rectangle r(2, 4);
    cout << "Area of Rectangle is: " << r.area() << endl;
    return 0;
}