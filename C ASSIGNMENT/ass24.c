#include <iostream>
using namespace std;

class Area {
public:
    void circle(double r) {
        const double PI = 3.14159;
        double area = PI * r * r;
        cout << "Area of the circle is: " << area << endl;
    }

    void square(double side) {
        double area = side * side;
        cout << "Area of the square is: " << area << endl;
    }

    void rectangle(double len, double wid) {
        double area = len * wid;
        cout << "Area of the rectangle is: " << area << endl;
    }

    void triangle(double base, double height) {
        double area = 0.5 * base * height;
        cout << "Area of the triangle is: " << area << endl;
    }
};

class MyClass : public Area {
public:
    void menu() {
        int choice;
        do {
            cout << "\nEnter your choice\n";
            cout << "1. Circle\n";
            cout << "2. Square\n";
            cout << "3. Rectangle\n";
            cout << "4. Triangle\n";
            cout << "5. Exit\n";
            cin >> choice;

            switch(choice) {
                case 1: {
                    double r;
                    cout << "Enter the radius: ";
                    cin >> r;
                    circle(r);
                    break;
                }
                case 2: {
                    double side;
                    cout << "Enter the side length: ";
                    cin >> side;
                    square(side);
                    break;
                }
                case 3: {
                    double len, wid;
                    cout << "Enter the length and width: ";
                    cin >> len >> wid;
                    rectangle(len, wid);
                    break;
                }
                case 4: {
                    double base, height;
                    cout << "Enter the base and height: ";
                    cin >> base >> height;
                    triangle(base, height);
                    break;
                }
                case 5:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice!\n";
            }
        } while(choice != 5);
    }
};

int main() {
    MyClass obj;
    obj.menu();
    return 0;
}
