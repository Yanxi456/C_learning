#include <stdio.h>
#include <string.h>

const char* AlphaBeta() {
	static char s[27] = "";
	if (s[0]) { //检测是否已计算
		return s;
	}
	else {
	for (int i=0;i<26;i++)
		s[i]='A'+i;
		s[26]=0; //字符串结束
	}
	return s;
}

void AlphaShift(char str[],int k) {
	int n = strlen(str);
	char tmp[k+1];
	strncpy(tmp,str+n-k,k);
	for (int i=0;i<n-k;i++) str[n-1-i] = str[n-1-k-i];
	for (int i=0;i<k;i++) str[i] = tmp[i];
}		

void Transform(char from[], char to[], char in_out[]) {
	char *p = in_out;
	for (;*p;p++) {
		if (*p>='a' && *p<='z') {
		*p = *p -'a' + 'A'; //小写变大写
		char *q = strchr(from,*p);
		*p = *(to + (q - from));
		*p = *p -'A' + 'a';
	}
		else if (*p>='A' && *p<='Z') {
			char *q = strchr(from,*p);
			*p = *(to + (q - from)); //对应位置翻译
		}
	}
}

void CaesarEncrypt(char plaintext[], int shift) {
    const char* originalAlphabet = AlphaBeta();
    char shiftedAlphabet[27];
    AlphaShift(shiftedAlphabet, shift);
    Transform(originalAlphabet, shiftedAlphabet, plaintext);
}

int main() {
    char plaintext[100];
    int shift;

    printf("Enter the plaintext: ");
    scanf("%s", plaintext);

    printf("Enter the shift value: ");
    scanf("%d", &shift);

    CaesarEncrypt(plaintext, shift);

    printf("Encrypted text: %s\n", plaintext);

    return 0;
}
