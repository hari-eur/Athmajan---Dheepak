#include<stdio.h>
#include<string.h>
char* subset_sort(char[]);

char* subset_sort(char str[]){
	
	if(str =='\0'){
		return '\0';
	}
	
	int i,j,index=0,len;
	char temp;
	len=strlen(str);
	for(i=0;i<len;i++){
		for(j=0;j<len;j++){
			if((int)str[i]<(int)str[j]){
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		
	    }
	}
	return str;
	
}

int main(){
	int i=0;
	char str[100];
	printf("enter string");
	scanf("%[^\n]s",str);
	char final[100]={'\0'};
	
	int dig_index=0,alp_index=0;
	while(str[i]!='\0'){
	    char dig[100]={'\0'};
	    char alp[100]={'\0'};
		
		while(str[i]>='0' && str[i]<='9'){
			dig[dig_index++]=str[i];
			i++;
		}
		dig_index=0;
		strcat(final,subset_sort(dig));
		
	
		while((str[i]>='A' && str[i]<'Z')||(str[i]>='a' && str[i]<'z')){
			alp[alp_index++]=str[i];
			i++;
		}
		strcat(final,subset_sort(alp));
		alp_index=0;
		
	}
	printf("\n");
	printf("%s ",final);
	return 0;
	
}
