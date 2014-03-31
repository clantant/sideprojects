#include <stdio.h>
#include <stdlib.h>

int mult(int x, int n);

int main(int argc, char** argv)
{
	int test, i, flg, x, n, i2, ans;
	char num1[5], num2[5];
	char line[20];
	if(argc != 2){
		printf("Error, format is %c filename", argv[0]);
	}
	test = open(argv[1]);
	while(getline(line, 20, test)){
		i2 = 0;
		flg = 0;
		for(i = 0; i < 20; i++){
			if(line[i] == '\n'){
				break;
			}
			else if(line[i] == ','){
				i2 = 0;
				flg = 1;
			}
			else{
				if(flg == 0){
					num1[i2] = line[i];
					i2++;
				}
				if(flg == 1){
					num2[i2] = line[i];
					i2++;
				}
			}
		}
		x = atoi(num1);
		n = atoi(num2);
		ans = mult(x, n);
		printf("%d\n", ans);
	}


}

int mult(int x, int n){
	int i = 0;
	while(i < x){
		i = i + n;
	}
	return i;
}
