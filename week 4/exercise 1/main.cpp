#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include "PlayGround.h"
#ifdef _WIN32
#include <conio.h>
#endif // _WIN32

using namespace std;

int main()
{
	PlayGround playground(5);

	cout << "請使用方向鍵 ↑、↓ 增加、減少人數。按下 ESC 離開程式" << endl << endl;
	cout << "目前空地人數 : " << playground.GetCurrentCount() << endl;

#ifndef _WIN32
	system("stty -icanon");
#endif // !_WIN32

	char key;
	do
	{
		#ifdef _WIN32
			key = _getch();
		#else
			key = getchar();
		#endif //_WIN32

			if (key == (char)224)
			{
				#ifdef _WIN32
					key = _getch();
				#else
					key = getchar();
				#endif //_WIN32

					if (key == (char)72)
					{
						if (playground.AddCount() == false)
						{
							cout << "空地人數已滿 !" << endl;
							continue;
						}
					}
					else if (key == (char)80)
					{
						if (playground.DecreaseCount() == false)
						{
							cout << "空地沒有人 !" << endl;
							continue;
						}
					}
			}
			cout << "目前空地人數 : " << playground.GetCurrentCount() << endl;

	} while (key != (char)27);

	return 0;
}


