#include <stdio.h>
#include <string.h>

// 定义结构体1
struct Address {
    char city[20];
    char state[20];
};

// 定义结构体2，嵌套结构体
struct Person {
    char name[30];
    int age;
    struct Address address;  // 结构体2 包含 结构体1
};

int main() {
    // 创建结构体实例变量
    struct Person person1;

    // 访问并赋值结构体实例变量的成员
    strcpy(person1.name, "John");
    person1.age = 25;
    strcpy(person1.address.city, "New York");
    strcpy(person1.address.state, "NY");

    // 输出结构体实例变量的成员
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("City: %s\n", person1.address.city);
    printf("State: %s\n", person1.address.state);

    return 0;
}

