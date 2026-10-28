#include <iostream>

bool leap_year(int year){
    bool ly;
    if((year%4) == 0){
        if ((year%400) == 0){
           ly = true;
        }
        else if ((year%100) != 0){
            ly = true;
        } else {
            ly = false;
        }
    }
    else{
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    int days;
    if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 ||
    m1 == 8 || m1 == 10 || m1 == 12) {
    days = 31;
    }
    else if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) {
        days = 30;
    }
    else if (m1 == 2) {
        if (leap_year(y1)) {
            days = 29;
        }
        else {
            days = 28;
        }
    }

    if (d1 < days){
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }
    else if (d1 == days && m1 != 12){
        d2 = 1;
        m2 = m1 + 1;
        y2 = y1;
    } else {
        d2 = 1;
        m2 = 1;
        y2 = y1 + 1;
    }
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task
    

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}

int main() {
    int d, m, y;

    next_date(14, 5, 2026, d, m, y);
    std::cout << (d == 15 && m == 5 && y == 2026) << std::endl;

    next_date(31, 1, 2026, d, m, y);
    std::cout << (d == 1 && m == 2 && y == 2026) << std::endl;

    next_date(28, 2, 2024, d, m, y);
    std::cout << (d == 29 && m == 2 && y == 2024) << std::endl;

    next_date(29, 2, 2024, d, m, y);
    std::cout << (d == 1 && m == 3 && y == 2024) << std::endl;

    next_date(28, 2, 2025, d, m, y);
    std::cout << (d == 1 && m == 3 && y == 2025) << std::endl;

    next_date(30, 4, 2025, d, m, y);
    std::cout << (d == 1 && m == 5 && y == 2025) << std::endl;

    next_date(31, 12, 2025, d, m, y);
    std::cout << (d == 1 && m == 1 && y == 2026) << std::endl;

    next_date(28, 2, 1900, d, m, y);
    std::cout << (d == 1 && m == 3 && y == 1900) << std::endl;

    next_date(28, 2, 2000, d, m, y);
    std::cout << (d == 29 && m == 2 && y == 2000) << std::endl;

    next_date(31, 7, 2025, d, m, y);
    std::cout << (d == 1 && m == 8 && y == 2025) << std::endl;

    return 0;
}