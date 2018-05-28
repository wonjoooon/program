#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rockScissorsPaper();
int winLoseDraw(int player, int opponent);

//��ǻ�Ϳ� ����������


//1.������ �̿��Ͽ�  ����(1), ����(2), ��(3) �� �ϳ��� ���� ��ȯ�ϴ� int rockScissorsPaper() �Լ��� ���� 
//    (rockScissorsPaper �Լ����� printf ����� �ϰų� scanf �Է��� ���� ����) 
//2. ��(player)�� �� ��(1~3)�� ����(opponent)�� �� ��(1~3)�� �޾� ����(1), ����(2), ��(3)��� �����Ͽ� 
//    ���� �̰����� 1��, ������ -1��, ������� 0�� ��ȯ�ϴ� int winLoseDraw(int player, int opponent) �Լ��� ���� 
//    (winLoseDraw �Լ������� ���� �߻�, printf ���, scanf �Է��� ���� ����) 
//3. main �Լ����� srand((unsigned int)time(0)); �� �����Ͽ� ������ seed�� ���� 
//4. main �Լ����� ���� ���� �� 1~3 �� �ϳ��� ���� �Է� ���� (�Է��� ���� 0~3 ������ �ƴϸ� �ٽ� �Է¹���, 0�� ���� ����) 
//5. main �Լ����� rockScissorsPaper �Լ��� ȣ���Ͽ� ��ǻ�Ͱ� ���� �� 1~3 �� �ϳ��� ���� 
//6. main �Լ�����  winLoseDraw �Լ��� ȣ���Ͽ� ���� �� ���� ��ǻ�Ͱ� �� ������ �ºθ� �Ǵ� 
//7. main �Լ����� �º� ����� ��� 
//8. 4�� �ٽ� ���ư��� �ݺ���, 4���� 0�� �Է��� ��� 5~7�� �������� �ʰ� �ٷ� ������ ������

int main()
{
	
	int n,computer,s;

	srand((unsigned int)time(0));

	do
	{
	do
	{
	printf("����(1), ����(2), ��(3) �Է�, �������� 0 :");
	scanf("%d",&n);
	if(n==0)
		break;
	}while(n>3 || n<0);
	
	computer=rockScissorsPaper();

	s=winLoseDraw(n,computer);

	if(s==1)
		printf("��� = %d, ��ǻ�� = %d : �̰���ϴ�\n",n,computer);
	if(s==-1)
		printf("��� = %d, ��ǻ�� = %d : �����ϴ�\n",n,computer);
	if(s==0)
		printf("��� = %d, ��ǻ�� = %d : �����ϴ�\n",n,computer);
	}while(n!=0);
	
	return 0;
}

int rockScissorsPaper()
{
	return rand()%(3-1+1)+1;
}
int winLoseDraw(int player, int opponent)
{
	if(player==1)
	{
		if(opponent==1)
			return 0;
		if(opponent==2)
			return -1;
		if(opponent==3)
			return 1;
	}
	if(player==2)
	{
		if(opponent==1)
			return 1;
		if(opponent==2)
			return 0;
		if(opponent==3)
			return -1;
	}
	if(player==3)
	{
		if(opponent==1)
			return -1;
		if(opponent==2)
			return 1;
		if(opponent==3)
			return 0;
	}
}