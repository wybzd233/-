#include<stdio.h>
#include<string.h>
char w[10],x[10],s1[10],s2[10],op[10],er[10];
int eo1[10],eo2[10];//= =应该不会超过十位数，每次加十。得额 
int n,n1,i,l; 
void re(int a){
	int j;
	i=0;
	while(a>=10){
		j=a%10;
		a/=10;
		eo2[i]=j;
		i++;
	}
	l=i+1;
	eo2[i]=a;
	for(int j=0,i1=i;j<=i;j++,i1--){
		eo1[j]=eo2[i1];
	}
	if(n==10){
		printf("十");
		return ;
	}
	for(int i1=0;i1<=i;i1++){
		if(l==2&&eo2[1]==1&&i!=2){
			printf("十");
			l--;
			continue;
		}
		switch(eo1[i1]){
			case 0:printf("零");break;
			case 1:printf("一");break;
			case 2:printf("二");break;
			case 3:printf("三");break;
			case 4:printf("四");break;
			case 5:printf("五");break;
			case 6:printf("六");break;
			case 7:printf("七");break;
			case 8:printf("八");break;
			case 9:printf("九");break;
		}
		if(l==4){
			printf("千");
			l--;
			continue;
		}
		if(l==3){
			printf("百");
			l--;
			if(n==100) return ;
			continue;
		}if(l==2&&eo1[i]!=0){
			printf("十");
			l--;
			continue;
		}if(l==1){
			l--;
			continue;
		}
		
	}
	
	
}
int izc(char s[25]){
	if(!strcmp(s,"零")) return 0;
	if(!strcmp(s,"一")) return 1;
	if(!strcmp(s,"二")) return 2;
	if(!strcmp(s,"三")) return 3;
	if(!strcmp(s,"四")) return 4;
	if(!strcmp(s,"五")) return 5;
	if(!strcmp(s,"六")) return 6;
	if(!strcmp(s,"七")) return 7;
	if(!strcmp(s,"八")) return 8;
	if(!strcmp(s,"九")) return 9;
	if(!strcmp(s,"十")) return 10;
}

int main()
{
	freopen("数据1.txt","r",stdin);
	scanf("%s%s%s%s",s1,w,s2,x);
	n=izc(x);
	while(1){
		scanf("%s",op);
		if(!strcmp(op,w)){
		memset(op,0,10);	
		scanf("%s%s",op,er);
		if(!strcmp(op,"增加")){
		n+=izc(er);
	}	
		if(!strcmp(op,"减少")){
		n-=izc(er); 
	}
	}
		if(!strcmp(op,"看看")){
			memset(op,0,10);
			scanf("%s",op);
			if(!strcmp(op,w)){
				re(n);
				printf("\n");
				
				
			}
		}
	}
	
	return 0;
}
