#include <stdio.h>
#include <string.h>

// ����ṹ��1
struct Address {
    char city[20];
    char state[20];
};

// ����ṹ��2��Ƕ�׽ṹ��
struct Person {
    char name[30];
    int age;
    struct Address address;  // �ṹ��2 ���� �ṹ��1
};

int main() {
    // �����ṹ��ʵ������
    struct Person person1;

    // ���ʲ���ֵ�ṹ��ʵ�������ĳ�Ա
    strcpy(person1.name, "John");
    person1.age = 25;
    strcpy(person1.address.city, "New York");
    strcpy(person1.address.state, "NY");

    // ����ṹ��ʵ�������ĳ�Ա
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("City: %s\n", person1.address.city);
    printf("State: %s\n", person1.address.state);

    return 0;
}

