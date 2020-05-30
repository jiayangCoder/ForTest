#include<stdio.h>
#include<windows.h>
#include<assert.h>
#pragma warning(disable:4996)

void show(){
	printf("hehhe\n");
	printf("hehhe\n");
	printf("hehhe\n");

}
void Inc(int *p){
	assert(p != NULL);
	*p += 10;
}
int main(){
	int a = 20;
	int *p = &a;
	int **q = &p;

	const int *p = &a;
	int const *p = &p;
	const int *const p = &a;

	const int **q = &p;
	int const **q = &p;
	int *const*q = &p;
	int **const q = &p;
	int *const*const q = &p;
	int const *const* q = &p;
	int const *const* const q = &p;





	//const int a = 10;
	//const int *p = (int*)&a;
	///**p = 20;*/
	//printf("%d\n",a);



	//const char *s = "hello word";
	



	//const int a = 10;
	//a = 20;
	//int *p = &a;
	//*p = 20;
	//p = 20;

	//printf("before: %d\n",a);
	//Inc(&a);
	//printf("after: %d\n",a);

	//int i = 0;

	//int sum = 0;
	//int n = 0;
	//int ret = 1;
	//scanf("%d",&n);
	//for (i = 1; i <= n; i++){
	//	int j = 0;
	//	ret = 1;
	//	for (j = 1; j <= i; j++){
	//		ret *= j;

	//	}
	//	sum += ret;

	//}
	//printf("%d\n",sum);

	//int i = 0;
	//int arr[10] = {0};

 //   for (i = 0; i <= 10; i++)
	//{
	//	arr[i] = 0;
	//	show();
	//	printf("hehe\n");
	//}
	//printf("%p, %p\n",&i,arr);


	//int sum = 0;
	//int i = 1;
	//for (; i <= 100; i++){
	//	sum += i;
	//}
	//printf("%d\n",sum);

	system("pause");
	return 0;
}