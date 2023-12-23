#include <stdio.h>
#include <string.h>

// ����һ���������������������ַ��������ƥ�䳤��
int max_match_length(char *s1, char *s2) {
  // ��ȡ�����ַ����ĳ���
  int len1 = strlen(s1);
  int len2 = strlen(s2);

  // ����һ�������������洢���ƥ�䳤��
  int max = 0;

  // ������һ���ַ�����ÿ��λ�ã�������
  for (int i = 0; i < len1; i++) {
    // ����һ�������������洢��ǰλ�õ�ƥ�䳤��
    int cur = 0;

    // ��������ָ�룬�ֱ�ָ���һ���ַ����͵ڶ����ַ����ĵ�ǰλ��
    char *p1 = s1 + i;
    char *p2 = s2;

    // ������ָ�붼û�е����ַ�����ĩβʱ�����бȽ�
    while (*p1 && *p2) {
      // ��������ַ���ȣ�ƥ�䳤�ȼ�һ������ָ�붼����
      if (*p1 == *p2) {
        cur++;
        p1++;
        p2++;
      } else {
        // ��������ַ�����ȣ�����ѭ��
        break;
      }
    }

    // �����ǰλ�õ�ƥ�䳤�ȴ������ƥ�䳤�ȣ��������ƥ�䳤��
    if (cur > max) {
      max = cur;
    }
  }

  // �������ƥ�䳤��
  return max;
}

// ����һ������������������
int main() {
  // ����һ�������������洢������������Ŀ
  int n;

  // �ӱ�׼�����ȡ������������Ŀ
  scanf("%d", &n);

  // ����ÿ����������
  for (int i = 0; i < n; i++) {
    // ���������ַ����������洢��ƥ����ַ�����Ҫƥ����ַ���
    char s1[10001];
    char s2[10001];

    // �ӱ�׼�����ȡ�����ַ���
    scanf("%s", s1);
    scanf("%s", s2);

    // ���ú��������������ַ��������ƥ�䳤��
    int ans = max_match_length(s1, s2);

    // ����������׼���
    printf("%d\n", ans);
  }

  // ����0����ʾ������������
  return 0;
}
