#include <iostream>

class Widget {
public:
    static int count; // 모든 Widget 인스턴스의 수를 추적하는 정적 변수

    Widget() {
        count++; // 생성자에서 카운트 증가
    }

    ~Widget() {
        count--; // 소멸자에서 카운트 감소
    }

    static int GetCount() {
        return count; // 현재까지 생성된 Widget 인스턴스의 수 반환
    }
};

int Widget::count = 0; // 정적 변수 초기화

int main() {
    Widget w1;
    Widget w2;
    Widget w3;
    w3.count = 7;
    Widget w4;
    Widget w5;

    std::cout << "Current widget count: " << w1.count << " " <<  w2.count << std::endl;
    return 0;
}
