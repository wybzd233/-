#include<iostream>
#include<string.h>
using namespace std;
char ch[30]={"��һ�����������߰˾�ʮ"}; 
class ob
{
	public:
	char Cm[25];//�������� 
	int cmm;//���������� 
};
int main()
{
	ob ob[11];
	ob[0].cmm=0;
	strcpy(ob[0].Cm,"��");
	for(int i=1;i<=10;i++){
		ob[i].cmm = i;
		strncpy(ob[i].Cm,ch+i*2,i*2+1);
		ob[i].Cm[3]='\0';
	}
	for(int i=0;i<=10;i++){
		printf("%d ",ob[i].cmm);
		printf("%s\n",ob[i].Cm );
	}
	return 0; 
}
