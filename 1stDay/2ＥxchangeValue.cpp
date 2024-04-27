//
// Created by yr on 24-4-27.
//

// 题目
// https://leetcode.cn/leetbook/read/c-programming-language-13-day/ww7p6v/
// 循环输入，每输入两个数 a 和 b，交换两者的值后输出 a 和 b。当没有任何输入时，结束程序。

// 解决方法
// 1. 引入临时变量(万能通用)
// 2. 引入加减法(适用于Number，但可能引起数值溢出)
// 3. 采用异或^来解决(适用于整数)

#include <iostream>

void ExchangeValue1() {
    // 输入两个数字
    int a,b;
    std::cout << "input a and b: " << std::endl;
    std::cin >> a >> b;

     if (!std::cin.fail()) {
        // 交换
        int c;
        c = a;
        a = b;
        b = c;
        // 输出a, b
        std::cout << "a=" << a << " b=" << b << std::endl;
    } else {
        return;
    }
}


int main() {
    ExchangeValue1();
}