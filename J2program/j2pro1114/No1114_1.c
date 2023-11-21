#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	char dummy;
	printf("Peoples: ");
	scanf("%d", &n);
	scanf("%c", &dummy);

	char **peopleP = (char **)malloc(sizeof(char *) * n);

	for(int i = 0; i < n; i++){
		int l;
		printf("Word count: ");
		scanf("%d", &l);
		scanf("%c", &dummy);

		peopleP[i] = (char *)malloc(sizeof(char) * l + 1);
		
		printf("Name: ");
		fgets(peopleP[i], l + 1, stdin);
	}
	
	int rn;
	printf("Number: ");
	scanf("%d", &rn);
	printf("%s\n", peopleP[rn - 1]);

	for(int i = 0; i < n; i++){
		free(peopleP[i]);
	}
	free(peopleP);

	return 0;
}
