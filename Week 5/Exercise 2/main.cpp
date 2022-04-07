#include "Date.h"
using namespace std;

// 斜線作為使用者輸入的分割字元
#define STRING_SPLITTER "/"

// 依照使用者輸入的字串 user_input, 切分為 year, month, day 並儲存到個別參數
bool SplitUserInput(const string &user_input, int &year, unsigned short &month, unsigned short &day)
{   // 尋找第一個斜線位置並儲存至 first_colom_pos
	size_t first_slash_pos = user_input.find(STRING_SPLITTER);
	string numberBuffer;

	try
	{   // 若找不到斜線回傳 false
		if (first_slash_pos == string::npos)
			return false;
		// 擷取第一個斜線之前的字串並記錄到 numberBuffer
		numberBuffer = user_input.substr(0, first_slash_pos);
		// 轉換型態為 int 儲存至 hour 變數中
		year = stoi(numberBuffer);

		// 尋找第二個斜線的位置並儲存至 second_colom_pos
		size_t second_slash_pos = user_input.find(STRING_SPLITTER, first_slash_pos + 1);
		// 若找不到斜線回傳 false
		if (second_slash_pos == string::npos)
			return false;
		// 擷取第二個斜線之前的字串並記錄到 numberBuffer
		numberBuffer = user_input.substr(first_slash_pos + 1, second_slash_pos - first_slash_pos - 1);
		// 轉換型態為 int 儲存至 minute 變數中
		month = stoi(numberBuffer);

		// 擷取第二個斜線之後的字串並記錄到 numberBuffer
		numberBuffer = user_input.substr(second_slash_pos + 1);
		// 轉換型態為 int 儲存至 second 變數中
		day = stoi(numberBuffer);
	}
	catch (...)
	{
		return false;
	}

	return true;
}

int main()
{
	Date date;
	string user_input;

	int year;
	unsigned short month, day;
	do
	{
		cout << "請輸入西元日期 (yyyy/mm/ss)：";
		cin >> user_input;

		if (user_input == "exit")
			break;      // 跳出迴圈並關閉程式
		else if (SplitUserInput(user_input, year, month, day) == false)
			continue;   // 若使用者輸入錯誤，要求重新輸入

		try
		{
			date.SetDate(year, month, day);
			cout << date.GetDateInROC() << endl << endl;
		}
		catch (invalid_argument e)
		{
			cout << "無效參數: " << e.what() << endl << endl;
		}
	} while (true);

	return 0;
}
