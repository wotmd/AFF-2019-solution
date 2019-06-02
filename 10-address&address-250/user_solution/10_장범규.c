#include <stdio.h>

int main() {
	char ip[36];
	char sub[36];
	char new[36];
	scanf("%s", ip);
	scanf("%s", sub);
	for (int i = 0; i < 36; i++) {
		if (sub[i] == '0') {
			for (int j = i+1; j < 36; j++) {
				if (sub[j] == '1') {
					printf("wrong subnetmask");
					return 0;
				}
				else
					break;
			}
		}
	}

	for (int i = 0; i < 36; i++) {
		if (ip[i] == '1' || ip[i] == '0')
			new[i] = (int)ip[i] & (int)sub[i];
		else
			new[i] = (int)ip[i];
	}
	printf("%s", new);
	return 0;
}