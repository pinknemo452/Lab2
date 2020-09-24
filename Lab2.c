#include<stdio.h>
int main() {
	int i;
	char string[101];
	printf("Enter string: ");
	fgets(string, 101, stdin);
	for (i = 0; i <= 100; i++) {
		if (string[i] == ' ') {
			if (string[i + 1] != ' ')  {
				printf("\n");
			}
		}
		else if (string[i] == '\0') {
			return 0;
		}
		else if ((string[i] != '.') && (string[i] != ',')) {
			printf("%c", string[i]);
		}
	}
	return 0;
}

