#include<stdio.h>
#include<string.h>
char w[10],x[10],s1[10],s2[10],op[10],er[10];
int eo1[10],eo2[10];
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
int main()
{
	scanf("%d",&n);
	re(n);
	return 0;
}
