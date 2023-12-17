#include <iostream>

// class Number {
// private:
//     int value;

// public:
//     Number(int val) : value(val) {}

//     // + 연산자 오버로딩
//     Number operator+(const Number& other) const {
//         return Number(value + other.value);
//     }

//     // - 연산자 오버로딩
//     Number operator-(const Number& other) const {
//         return Number(value - other.value);
//     }

//     // * 연산자 오버로딩
//     Number operator*(const Number& other) const {
//         return Number(value * other.value);
//     }

//     // / 연산자 오버로딩
//     Number operator/(const Number& other) const {
//         if (other.value == 0) {
//             throw std::invalid_argument("Division by zero");
//         }
//         return Number(value / other.value);
//     }

//     // 값 출력을 위한 함수
//     int getValue() const { return value; }
// };

int main() {

    int num = 0;
    ++(++num);
    (num++)++;
    std::cout << num << std::endl;    
    // Number num1(10);
    // Number num2(5);

    // Number sum = num1 + num2;       // 10 + 5
    // Number difference = num1 - num2; // 10 - 5
    // Number product = num1 * num2;    // 10 * 5
    // Number quotient = num1 / num2;   // 10 / 5

    // std::cout << "Sum: " << sum.getValue() << std::endl;
    // std::cout << "Difference: " << difference.getValue() << std::endl;
    // std::cout << "Product: " << product.getValue() << std::endl;
    // std::cout << "Quotient: " << quotient.getValue() << std::endl;

    return 0;
}
