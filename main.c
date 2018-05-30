#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInt(int min, int max){
	return rand() % (max-min+1)+min;
}

char* randomString(int size){
	char *string = malloc(sizeof(char)*size);
	for (int i=0; i<size; i++) string[i] = randomInt(65, 90);
	return string;
}

int main(void) {
	srand(time(NULL));
	for (int i = 0; i < 5; i++) printf("%d: %d\n", i+1, randomInt(10, 30));

	printf("rand: %s\n", randomString(64));
	return 0;
}
