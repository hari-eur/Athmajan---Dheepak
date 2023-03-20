#include<stdio.h>
#define print(x,y) printf(x,y)
#define print_1(a,b,c) printf(a,b,c)

int main(void){
	
	char data[100],data_1[100],data_2[100];
	printf("Enter data:");
    gets(data);
    printf("Enter data_1:");
    gets(data_1);
    printf("Enter data_2:");
    gets(data_2);
	
	print("welcome to %s",data);
	print_1("\nHello to %s: Welcome to %s",data_1,data_2);
	return 0;
}
