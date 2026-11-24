#include <iostream>

void rectangle(double side1, double side2, double &perimeter, double &area) {
    perimeter = 2 * (side1 + side2);
    area = side1 * side2;
}

int main() {
    double a, b, perimeter, area;

    std::cout << "Enter the lengths of the two sides: ";
    std::cin >> a >> b;

    rectangle(a, b, perimeter, area);

    std::cout << "Perimeter: " << perimeter << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0;
}