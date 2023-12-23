#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};
struct ListNode* successor = NULL;
struct ListNode* reverseN(struct ListNode* head, int n) {

    if(n == 1) {
        successor = head->next;
        head->next = NULL;  // 将当前节点的 next 指针置为空，防止形成环
        return head;
    }
    struct ListNode* last = reverseN(head->next, n-1);
    head->next->next = head;
    head->next = successor;
    return last;
}


struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if (left == 1) {
        return reverseN(head, right);
    }

    head->next = reverseBetween(head->next, left - 1, right - 1);
    return head;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

void freeList(struct ListNode* head) {
    while (head != NULL) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = 1;
    head->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->val = 2;
    head->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->val = 3;
    head->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->next->val = 4;
    head->next->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->next->next->val = 5;
    head->next->next->next->next->next = NULL;

    head = reverseBetween(head, 2, 4);

    printList(head);

    freeList(head);

    return 0;
}

