#include<stdio.h>
#include<string.h>
char w[10],x[10],s1[10],s2[10],op[10],er[10];
int eo1[10],eo2[10];//= =Ӧ�ò��ᳬ��ʮλ����ÿ�μ�ʮ���ö� 
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
		printf("ʮ");
		return ;
	}
	for(int i1=0;i1<=i;i1++){
		if(l==2&&eo2[1]==1&&i!=2){
			printf("ʮ");
			l--;
			continue;
		}
		switch(eo1[i1]){
			case 0:printf("��");break;
			case 1:printf("һ");break;
			case 2:printf("��");break;
			case 3:printf("��");break;
			case 4:printf("��");break;
			case 5:printf("��");break;
			case 6:printf("��");break;
			case 7:printf("��");break;
			case 8:printf("��");break;
			case 9:printf("��");break;
		}
		if(l==4){
			printf("ǧ");
			l--;
			continue;
		}
		if(l==3){
			printf("��");
			l--;
			if(n==100) return ;
			continue;
		}if(l==2&&eo1[i]!=0){
			printf("ʮ");
			l--;
			continue;
		}if(l==1){
			l--;
			continue;
		}
		
	}
	
	
}
int izc(char s[25]){
	if(!strcmp(s,"��")) return 0;
	if(!strcmp(s,"һ")) return 1;
	if(!strcmp(s,"��")) return 2;
	if(!strcmp(s,"��")) return 3;
	if(!strcmp(s,"��")) return 4;
	if(!strcmp(s,"��")) return 5;
	if(!strcmp(s,"��")) return 6;
	if(!strcmp(s,"��")) return 7;
	if(!strcmp(s,"��")) return 8;
	if(!strcmp(s,"��")) return 9;
	if(!strcmp(s,"ʮ")) return 10;
}

int main()
{
	freopen("����1.txt","r",stdin);
	scanf("%s%s%s%s",s1,w,s2,x);
	n=izc(x);
	while(1){
		scanf("%s",op);
		if(!strcmp(op,w)){
		memset(op,0,10);	
		scanf("%s%s",op,er);
		if(!strcmp(op,"����")){
		n+=izc(er);
	}	
		if(!strcmp(op,"����")){
		n-=izc(er); 
	}
	}
		if(!strcmp(op,"����")){
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
