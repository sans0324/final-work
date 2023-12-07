#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	char str[100];
	char ch1, ch2;
	int i;

	printf("Enter multiple characters :");
	gets(str);

	printf("기존 문자와 새로운 문자를 입력 : ");
	scanf("%c %c",&ch1, &ch2);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ch1) {
			str[i] = ch2;
		}
	}
	printf("변화된 결과 ==> %s\n",str);

	return 0;
}

