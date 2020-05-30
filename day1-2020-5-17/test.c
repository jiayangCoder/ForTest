#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)

typedef struct pos{
	int x;
	int y;
	char addr[123];
	int list[2000];
	int *p;

}pos_t,*pos_p,pos_arr[10];
struct stu{
	char name[16];
	int age;
	char sex;
	int score[8];
	char big[1024 * 100];
};
void Show(struct stu x)
{
	printf("%p\n",&x);
	printf("name: %s\n",x.name);
	printf("age: %d\n", x.age);
	printf("sex: %c\n", x.sex);
	int num = sizeof(x.score) / sizeof(x.score[0]);
	int i = 0;
	for (; i < num; i++){
		printf("%d %d\n",i,x.score[i]);
	}


}
int Count(int x){
	int count = 0;
	while (x){
		x /= 10;
		count++;
	}
}
int IsNarcissus(int x)
{
	int old_data = x;
	int count = Count(x);
	int sum = 0;
	while (x != 0){
		int temp = x % 10;
		sum+=pow(temp, count);
		x /= 10;
	}
	return sum == old_data;
}
void show(int n){
	//上半部
	int i = 0;
	for (; i < n; i++){
		int j = 0;
		for (; j < n - 1 - i; j++){
			printf(" ");
		}
		for (; j < 2 * i + 1; j++){
			printf("*");
		}
		printf("\n");
	}
	//下半部
	for (i = 0; i < n-1; i++){
		int j = 0;
		for (; j <=i; j++){
			printf(" ");
		}
		for (; j < 2 * n - 3 - 2 * i; j++){
			printf("*");
		}
		printf("\n");

	}

}

typedef struct class{
	char name[100];
	int age;
	char number[11];

}class_t;

	
void print(class_t *p){
	printf("%s\n",(*p).name);
	printf("%d\n",p->age);
	printf("%s\n",p->number);
}
int Countnum(int i){
	int count = 0;
	while (i>0){
		i /= 10;
		count++;

	}
	return count;
}
int shui(int i){

	int old_data = i;
	int count = 0;
	count = Countnum(i);

	int sum = 0;
	
	while (i!= 0){
		int t = i % 10;
		sum+=(t^(count));
		i /= 10;
		//int t = i % 10;
		//sum += pow(t, count);
		//i /= 10;

	}

	return sum == old_data;
}


int main()
{


	int i = 153;
	//for (; i < 10000; i++){
	//	if (shui(i)){
	//		printf("%d ", i);
	//	}
	//}
	int sum = 0,count = 3;

	int t = 2;
	sum =pow(t,count);
	//while (i != 0){
	//	int t = i % 10;
	//	sum += (t ^ (count));
	//	i /= 10;
	//}
	printf("%d\n",sum);




	//class_t han = { "hanzejia", 24, "1916210746" };
	//print(&han);


	//class_t han = { "hanzejia", 24, "1916210746" };
	////class_t *p = &han;

	//print(&han);

	//strcat(han.name, "123");
	//printf("%s\n",(*p).name);



	/*strcpy(han.name,"123");*/

	/*printf("%s\n", strcpy(han.name, "123"));*/
	//char a[30] = "string(1)";
	//char b[] = "string(2)";
	//printf("before strcpy() :%s\n", a);
	//printf("after strcpy() :%s\n", strcpy(a, b));
	

	/*printf("%s\n", strcpy("123", "456"));*/

	//printf("%s\n",(*p).name);
	//printf("%d\n",p->age);
	//printf("%s\n",han.number);

	//int i = 0;
	//printf("请输入：");
	//scanf("%d",&i);
	//show(i);


	system("pause");
	return 0;

}
//int a = 10;
//pos_t sus_pos = { 23, 46, "陕西省西安市长安区XXX大学！",\
	//{111,222,333,444,555},&a };
//pos_t xayd_pos = { 0, 0, "", { 0 } };
//pos_t xacd_pos = { 0 };
//pos_t skd_pos;//不太推荐

//pos_p p = &sus_pos;


//sus_pos.x = 23;
//sus_pos.y = 45;
//struct stu stux;
//strcpy(stux.name,"zhangsan")

//struct stu stux = { "tom", 21, 'm', { 91, 90, 62, 90 } };
///*struct stu *p = &stux;*/
//printf("main:%p\n",&stux);
//printf("main:%p\n", &(stux.name));
//int i = 0;
//for (; i < 100000; i++){
//	Show(&stux);
//}
//printf("name: %s\n",p->name);
//p->age = 80;
//printf("age: %d\n",p->age);
//int num = sizeof(p->score) / sizeof(p->score[0]);
// 
//int i = 0;
//for (; i < num; i++){
//	printf("%d %d\n",i,stux.score[i]);
//}
//if (sum == old_data){
//	return 1;
//}
//else{
//	return 0;
//}
//int i = 0;
//printf("请输入：");
//int num = 0;
//scanf("%d",&i);
//while (i != 0){
//	i = i / 10;
//	num++;
//}

//
//int a = 0;
//for (; a < 100000; a++){
//	if (i = (i%10)^num+(i%100)^num){
//		printf("%d ",i);
//	}
//}
//int i = 100;
//for (; i < 100000; i++){
//	if (IsNarcissus(i)){
//		printf("%d ",i);
//	}
//}