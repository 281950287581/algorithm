#include<stdio.h>
#define n 4


int queen[n+1];



void Show(){ /* ������лʺ�ڷŷ���*/
	int i;
	printf("(");
	for(i=1;i<=n;i++){
		printf("%d",queen[i]);
	}
	printf(")\n");
}

/* ��鵱ǰ�ܷ���ûʺ󣬲��ܷŷ���0���ܷŷŻ�1*/
int Place(int j){
	int i;
    //������ѰڷŵĻʺ��Ƿ���ͬһ�л���ͬһб����
	for(i=1;i<j;i++){
		if(queen[j]==queen[i]||abs(queen[i]-queen[j])==(j-i)){
			return 0;
		}
	}
	return 1;
}
void Nqueen(int j){
	int i; 
	for(i=1;i<=n;i++){
		queen[j]=i;
		if(Place(j)&&j<=n){
			/* ������лʺ󶼰ڷźã��������ǰ�ڷŷ���*/
			if(j==n){
				Show();
			}else{// ��������ڷ���һ���ʺ�
				Nqueen(j+1);
			}
		}
	}
}
int main(){
	Nqueen(1);
	return 0;
}