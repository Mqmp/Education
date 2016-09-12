#include <iostream>
#include <ctype.h>
#include <cstdio>
#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(NULL));

	int startNum = 65;
	int endNum = 25;
	int num[5];
	num[5] = 0;
	char A[100], B[100], C[100], D[100], E[4*100];
	
 	for (int i = 0; i < 4; i++) {
		num[i] = 1 + rand() % 4;
	}
	for (int j = 0; j < num[0]; j++)
		A[j] = startNum + rand() % endNum;
	A[num[0]+1] = '\0';
	for (int j = 0; j < num[1]; j++)
		B[j] = startNum + rand() % endNum;
	B[num[1]+1] = '\0';
	for (int j = 0; j < num[2]; j++)
		C[j] = startNum + rand() % endNum;
	C[num[2]+1] = '\0';
	for (int j = 0; j < num[3]; j++)
		D[j] = startNum + rand() % endNum;
	D[num[3]+1] = '\0';
	
	for (int i = 0; i < num[0]; ++i)
		printf("%c\n", A[i]);

	for (int i = 0; i < num[1]; ++i)
		printf("%c\n", B[i]);

	for (int i = 0; i < num[2]; ++i)
		printf("%c\n", C[i]);

	for (int i = 0; i < num[3]; ++i)
		printf("%c\n", D[i]);
	bool flag = 0;

	return 0;
}
