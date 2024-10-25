#include <iostream>
#include <cmath> 

int main() {
    double x, y;

    std::cout << " x= ";
    std::cin >> x;

    // Використання скороченої форми умовного оператора
    y = (x <= -1) ? exp(0.4 + x)
        : (x > -1 && x < 1) ? 13.5 - 2 * x - (1 - pow(sin(x), 2))
        : cos(x) / (1 + pow(sin(x), 2));

    
    std::cout << "1) y= " << y << std::endl;

    // Використання повної форми умовного оператора
    if (x <= -1) {
        y = exp(0.4 + x);
    }
    else if (x > -1 && x < 1) {
        y = 13.5 - 2 * x - (1 - pow(sin(x), 2));
    }
    else {
        y = cos(x) / (1 + pow(sin(x), 2));
    }

   
    std::cout << "2) y= " << y << std::endl;

    return 0;
}