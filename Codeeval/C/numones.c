#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *line;
	line = (char *)(malloc(sizeof(char)*1024));
	FILE *f;
	int x, y, z;
	f = fopen(argv[1], "r");
	while (fgets(line, 1024, f)) {

        	// Skip empty lines
        	if (line[0] == '\n') {
            		continue;
        	}
		y = 0;
		x = atoi(line);
		while(x > 0){
			z = x % 2;
			if(z == 1){
				y = y + 1;
			}
			x = x / 2;
		}
        	printf("%d\n", y);
    	}

    	return 0;
}
