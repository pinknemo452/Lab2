#include<stdio.h>
int main() {
	char string[101];
	char temp[101];
	int tmp;
	char glasn[] = { 'a','e','i','o','u','y' };
	printf("enter: ");
	fgets(string, 101, stdin);
	tmp = 0;
	for (int i = 0; i < 101; i++) {
		if (string[i] != ' ') {
			temp[tmp] = string[i];
			tmp++;

		}
		if ((string[i + 1] == ' ') || (string[i + 1] == '\n')) {
			for (int j = 0; j < 6; j++) {
				if (string[i] == glasn[j]) {
					for (int k = 0; k < tmp; k++) {
						
							printf("%c", temp[k]);
							temp[k] = 0;
						
					}
					printf("\n");
				}
			}
			for (int k = 0; k < i; k++) {
				temp[k+1] = ' ';
			}
			tmp = 0;
		}
		else {
			temp[tmp] = string[i];
		}
	}

	return 0;
}

