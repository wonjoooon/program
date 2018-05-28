#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rockScissorsPaper();
int winLoseDraw(int player, int opponent);

//컴퓨터와 가위바위보


//1.난수를 이용하여  가위(1), 바위(2), 보(3) 중 하나의 값을 반환하는 int rockScissorsPaper() 함수를 정의 
//    (rockScissorsPaper 함수에서 printf 출력을 하거나 scanf 입력을 받지 않음) 
//2. 내(player)가 낸 값(1~3)과 상대방(opponent)이 낸 값(1~3)을 받아 가위(1), 바위(2), 보(3)라는 가정하에 
//    내가 이겼으면 1을, 졌으면 -1을, 비겼으면 0을 반환하는 int winLoseDraw(int player, int opponent) 함수를 정의 
//    (winLoseDraw 함수에서는 난수 발생, printf 출력, scanf 입력을 하지 않음) 
//3. main 함수에서 srand((unsigned int)time(0)); 를 실행하여 난수의 seed를 지정 
//4. main 함수에서 내가 내는 값 1~3 중 하나의 값을 입력 받음 (입력한 값이 0~3 범위가 아니면 다시 입력받음, 0은 게임 종료) 
//5. main 함수에서 rockScissorsPaper 함수를 호출하여 컴퓨터가 내는 값 1~3 중 하나를 결정 
//6. main 함수에서  winLoseDraw 함수를 호출하여 내가 낸 값과 컴퓨터가 낸 값에서 승부를 판단 
//7. main 함수에서 승부 결과를 출력 
//8. 4로 다시 돌아가서 반복함, 4에서 0을 입력한 경우 5~7을 수행하지 않고 바로 게임을 종료함

int main()
{
	


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