#include <stdio.h>
#define N 3


int main()
{
	double ident[N][N] = {{0}}, (*p)[N]; 
	int i = 0;
	
	for(p = &ident[i]; p < &ident[N]; p++, i++)
		(*p)[i] = 1.0;
    i = 0;
	//for(double *p = ident[i]; i < N*N; p++, i++)
	for(double *p = ident[i]; p < &ident[N][0]; p++, i++)	
	{
		printf("%f ", *p);
		if(i != 0 && i%N == N - 1)
		printf("\n");
	}
	
	return 0;
}


