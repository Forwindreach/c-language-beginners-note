#include<stdio.h>
int i,ch;
int cnt[5] = {0};
int main()
{

while((ch = getchar())!= EOF){
	switch(ch){
		
		case '0' : cnt[0]++;break;
		case '1' : cnt[1]++;break;
		case '2' : cnt[2]++;break;
		case '3' : cnt[3]++;break;
		case '4' : cnt[4]++;break;
	}
}
	puts("统计结果");
	for(i = 0;i<5;i++)
	printf("%d出现了%d次",i,cnt[i]);
	return 0; 
}

