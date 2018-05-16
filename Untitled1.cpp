#include<stdio.h>
#include<stdlib.h>
#include<string.h>//imprimir documentação dessa biblioteca
#include<time.h>

long long int intInput(){
	long long int n;
	printf("Digite um valor longo: ");
	scanf("%lld",&n);
	return n;
}

void stringInput(){
	char string[10];
	int i;
	printf("Digite um texto de ate 10 caracteres: ");
	for(i=0;i<10;i++){
		scanf(" %c",&string[i]);
	}
	for(i=0;i<10;i++){
		printf("%c",string[i]);
	}
	printf("\n");
}

void ponteiroInput(int *p){
	printf("%d\n",*p);
}

//método para o quicksort
int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int main(){
	clock_t begin, end;
	double time_spent;
	begin = clock();
	
	//input valor longo de até 19 digitos
	printf("%lld\n",intInput());
	
	//input string
	stringInput();
    
    //ponteiros
    int n;
    printf("Digite um valor: ");
    scanf("%d%*c",&n);
    ponteiroInput(&n);
    //Ou
	int *p;
	p = &n;
	ponteiroInput(p);
	
	//Quick Sort
	int x[] = {4,5,2,3,1,0,9,8,6,7};
	qsort (x, sizeof(x)/sizeof(*x), sizeof(*x), comp);
	for (int i = 0 ; i < 10 ; i++)
        printf ("%d ", x[i]);
    
    end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\ntempo de execucao: %lf segundos\n",time_spent);
	return 0;
}

