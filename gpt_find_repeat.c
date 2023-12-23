#include <stdio.h>
#include <string.h>

// 定义一个函数，用来计算两个字符串的最大匹配长度
int max_match_length(char *s1, char *s2) {
  // 获取两个字符串的长度
  int len1 = strlen(s1);
  int len2 = strlen(s2);

  // 定义一个变量，用来存储最大匹配长度
  int max = 0;

  // 遍历第一个字符串的每个位置，从左到右
  for (int i = 0; i < len1; i++) {
    // 定义一个变量，用来存储当前位置的匹配长度
    int cur = 0;

    // 定义两个指针，分别指向第一个字符串和第二个字符串的当前位置
    char *p1 = s1 + i;
    char *p2 = s2;

    // 当两个指针都没有到达字符串的末尾时，进行比较
    while (*p1 && *p2) {
      // 如果两个字符相等，匹配长度加一，两个指针都后移
      if (*p1 == *p2) {
        cur++;
        p1++;
        p2++;
      } else {
        // 如果两个字符不相等，跳出循环
        break;
      }
    }

    // 如果当前位置的匹配长度大于最大匹配长度，更新最大匹配长度
    if (cur > max) {
      max = cur;
    }
  }

  // 返回最大匹配长度
  return max;
}

// 定义一个主函数，用来测试
int main() {
  // 定义一个变量，用来存储测试样例的数目
  int n;

  // 从标准输入读取测试样例的数目
  scanf("%d", &n);

  // 遍历每个测试样例
  for (int i = 0; i < n; i++) {
    // 定义两个字符串，用来存储待匹配的字符串和要匹配的字符串
    char s1[10001];
    char s2[10001];

    // 从标准输入读取两个字符串
    scanf("%s", s1);
    scanf("%s", s2);

    // 调用函数，计算两个字符串的最大匹配长度
    int ans = max_match_length(s1, s2);

    // 输出结果到标准输出
    printf("%d\n", ans);
  }

  // 返回0，表示程序正常结束
  return 0;
}

