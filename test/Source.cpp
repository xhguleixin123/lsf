#include <iostream>
#include <Windows.h>
#include <chrono>

bool running = true;
int nScreenWidth = 120;
int nScreenHeight = 40;
float speed = 20;
int main()
{
	wchar_t* screen = new wchar_t[nScreenWidth * nScreenHeight];
	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(hConsole);
	DWORD dwByesWritten = 0;

	float x = 40.0f, y = 20.0f;

	auto tp1 = std::chrono::system_clock::now();
	auto tp2 = std::chrono::system_clock::now();

	while (running)
	{
		tp2 = std::chrono::system_clock::now();
		std::chrono::duration<float> elapsedTime = tp2 - tp1;
		tp1 = tp2;
		float fElapsedTime = elapsedTime.count();

		for (int i = 0; i < nScreenWidth * nScreenHeight; i++)
		{
			screen[i] = ' ';
		}
		if (GetAsyncKeyState((unsigned short)'Q') & 0x8000)
		{
			running = false;
		}

		if (GetAsyncKeyState((unsigned short)'W') & 0x8000)
		{
			y -= speed * fElapsedTime;
			if (y < 0)
			{
				y = 0;
			}
		}
		if (GetAsyncKeyState((unsigned short)'S') & 0x8000)
		{
			y += speed * fElapsedTime;
			if (y > nScreenHeight)
			{
				y = nScreenHeight - 1;
			}
		}

		if (GetAsyncKeyState((unsigned short)'A') & 0x8000)
		{
			x -= speed * fElapsedTime;
			if (x < 0)
			{
				x = 0;
			}
		}

		if (GetAsyncKeyState((unsigned short)'D') & 0x8000)
		{
			x += speed * fElapsedTime;
			if (x > nScreenWidth)
			{
				x = nScreenWidth - 1;
			}
		}
		screen[((int)y) * nScreenWidth + (int)x] = '*';

		screen[nScreenWidth * nScreenHeight - 1] = '\0';
		WriteConsoleOutputCharacter(hConsole, screen, nScreenWidth * nScreenHeight, { 0, 0 }, &dwByesWritten);
	}
}