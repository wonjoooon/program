#include <stdio.h>

int main()
{
	int t,n,x=1,age;
	int sum;
	int ju=0,ad=0,di=0;

	printf("현재시간 입력(0~23시) : ");
	scanf("%d",&t);

	printf("가족 인원 수 입력 : ");
	scanf("%d",&n);

	while(n>=x){
		printf("%d번째 사람 나이 입력 : ",x);
		scanf("%d",&age);
		x++;

		if(age<3)
			printf("요금은 무료입니다.\n");
		else if((t<15 && age<=12 && age>=3) || (t<15 && age>=65)){
			printf("요금은 25000원입니다.\n");
			ju++;
		 }
		else if(t<15 && age>12 && age<65){
			printf("요금은 34000원입니다.\n");
			ad++;
		}
		else
		   {printf("요금은 10000원입니다.\n");
		di++;
		}
	}

	sum=ju*25000 + ad*34000 + di*10000;
	printf("가족의 요금은 %d원입니다.\n",sum);


	return 0;
}