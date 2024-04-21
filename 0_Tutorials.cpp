//
// Created by yr on 24-4-21.
//


#include <iostream>
#include <cstdio>

void exam2C() {
    // 先输入一个 t(t≤100)，然后输入t组数据。对于每组数据，输入两个整数 a 和 b，输出 a+b的值。其中 a,b≤10000。
    // 定义t，输入t
    int t;
    std::cout << "intput t\n";
    if (scanf("%d", &t) == EOF) {
        std::cout << "input nothing\n";
    } else {
        // 遍历t次，每次输入a和b，输出a+b
        for (int i = 0; i < t; ++i) {
            int a, b;
            printf("input 2 int numbers a and b\n");
            std::cin >> a >> b;
            printf("sum of %d + %d is: %d\n", a, b, a+b);
        }
    }
}
void exam2CPP() {
    // 先输入一个 t(t≤100)，然后输入t组数据。对于每组数据，输入两个整数 a 和 b，输出 a+b的值。其中 a,b≤10000。
    // 定义t，输入t
    int t;
    std::cout << "intput t\n";
    std::cin >> t;
    if (std::cin.fail()) {
        std::cout << "input nothing\n";
    } else {
        // 遍历t次，每次输入a和b，输出a+b
        for (int i = 0; i < t; ++i) {
            int a, b;
            printf("input 2 int numbers a and b\n");
            std::cin >> a >> b;
            printf("sum of %d + %d is: %d\n", a, b, a+b);
        }
    }
}

void exam3() {
    // 循环输入，每输入两个正整数 a和 b（其中 a,b≤10000），就输出 a+b的值。 当没有任何输入时，结束程序。
    while (true) {
        int a, b;
        if(scanf("%d %d", &a, &b) != EOF) {
            printf("sum is: %d", a + b);
        } else {
            printf("input nothing");
            exit(0);
        }
    }
}

int exam5Add(int a, int b) {
    // 【例题5】要求实现一个函数add，传入参数为 a 和 b，返回两者之和.
    return a+b;
}



int main() {
    // exam2CPP();
    // exam2C();
    // exam3();

    // exam 5
    int a=3, b=4;
    printf("%d", exam5Add(a, b));

    return 0;
}