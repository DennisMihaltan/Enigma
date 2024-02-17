#include<iostream>
#include<windows.h>
#include<mmsystem.h>

#pragma comment(lib, "winmm.lib")

using namespace std;

int main()
{
	PlaySound(TEXT("musicwav.wav"), NULL, SND_FILENAME | SND_SYNC | SND_LOOP);


	return 0;
}