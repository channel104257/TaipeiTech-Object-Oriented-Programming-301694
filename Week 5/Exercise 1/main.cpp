#include <iostream>
#include <string>

#include "Time.h"
using namespace std;

// 冒號作為使用者輸入的分割字元
#define STRING_SPLITTER ":"

// 依照使用者輸入的字串 user_input, 切分為 hour, minute, second 並儲存到個別參數
bool SplitUserInput(const string &user_input, unsigned short &hour, unsigned short &minute, unsigned short &second)
{   // 尋找第一個冒號位置並儲存至 first_colom_pos
	size_t first_colom_pos = user_input.find(STRING_SPLITTER);
	string numberBuffer;

	try
	{   // 若找不到冒號回傳 false
		if (first_colom_pos == string::npos)
			return false;
		// 擷取第一個冒號之前的字串並記錄到 numberBuffer
		numberBuffer = user_input.substr(0, first_colom_pos);
		// 轉換型態為 int 儲存至 hour 變數中
		hour = stoi(numberBuffer);

		// 尋找第二個冒號的位置並儲存至 second_colom_pos
		size_t second_colom_pos = user_input.find(STRING_SPLITTER, first_colom_pos + 1);
		// 若找不到冒號回傳 false
		if (second_colom_pos == string::npos)
			return false;
		// 擷取第二個冒號之前的字串並記錄到 numberBuffer
		numberBuffer = user_input.substr(first_colom_pos + 1, second_colom_pos - first_colom_pos - 1);
		// 轉換型態為 int 儲存至 minute 變數中
		minute = stoi(numberBuffer);

		// 擷取第二個冒號之後的字串並記錄到 numberBuffer
		numberBuffer = user_input.substr(second_colom_pos + 1);
		// 轉換型態為 int 儲存至 second 變數中
		second = stoi(numberBuffer);
	}
	catch (...)
	{
		return false;
	}

	return true;
}

int main()
{
	Time time;
	string user_input;

	unsigned short hour, minute, second;
	do
	{
		cout << "請輸入時間 (hh:mm:ss)：";
		cin >> user_input;

		if (user_input == "exit")
			break;      // 跳出迴圈並關閉程式
		else if (SplitUserInput(user_input, hour, minute, second) == false)
			continue;   // 若使用者輸入錯誤，要求重新輸入

		try
		{
			time.setTime(hour, minute, second);
			cout << "轉換為 12 小時制為：" << time.Get12HourMode() << endl << endl;
		}
		catch (invalid_argument e)
		{
			cout << "無效參數: " << e.what() << endl << endl;
		}
	} while (true);

	return 0;
}
