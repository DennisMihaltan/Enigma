#include<iostream>
#include<windows.h>

using namespace std;


int main()
{

	while (true)
	{

		Sleep(1000);
		system("taskkill /im chrome.exe /t /f");
		Sleep(1000);
		system("taskkill /im CalculatorApp.exe /t /f");
		Sleep(1000);
		system("taskkill /im msedge.exe /t /f");
	}

	return 0;
}





