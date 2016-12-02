#include <stdio.h>
#include <stdlib.h>

#define MAX 40

int main(){

	FILE *fp;
	char words[MAX];

	if( (fp = fopen("wordy", "a+")) == NULL ){

		fprintf(stdout, "Can't open \"words\" file.\n");
		exit(1);
	}

	puts("Enter words to add to the file; press Enter");
	puts("key at the beginning of a line to terminate.");

	while( fgets(words, MAX, stdin) != NULL && words[1] != '\0' )

		fprintf(fp, "%s", words);

	puts("File contents");

	rewind(fp);

	while( fscanf(fp, "%s", words) == 1 )

		puts(words);

	if( fclose(fp)!= 0 )

		fprintf(stderr, "Error closeing file.\n");

	return 0;
}
