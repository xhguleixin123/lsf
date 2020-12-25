#include <iostream>
#include <Windows.h>
#include <chrono>
#include <fstream>
#include <sstream>
std::string ReadFile(const char* filepath);

bool running = true;
int nScreenWidth = 47;
int nScreenHeight = 19;
float speed = 20;
int nMapWidth = 47;
int nMapHeight = 18;
int main()
{
	/*std::string output = ReadFile("test.txt");
	std::cout << output;*/
	wchar_t* screen = new wchar_t[nScreenWidth * nScreenHeight];
	wchar_t* screen2 = new wchar_t[nScreenWidth * nScreenHeight];
	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(hConsole);
	DWORD dwByesWritten = 0;

	float x = 40.0f, y = 20.0f;

	auto tp1 = std::chrono::system_clock::now();
	auto tp2 = std::chrono::system_clock::now();
	
	std::wstring map;


	
	map += L"                                                ";
	map += L"              * * * *        * * * *            ";      
	map += L"           *          *    *         *          ";      
	map += L"        *               **             *        ";      
	map += L"       *                                *       ";      
	map += L"       *                                *       ";      
	map += L"       *       *       **     *****     *       ";      
	map += L"       *       *     *        *         *       ";      
	map += L"        *      *     *        *         *       ";      
	map += L"         *     *       *      *****    *        ";      
	map += L"          *    *         *    *       *         ";      
	map += L"           *   *          *   *      *          ";      
	map += L"            *  * * *  * *     *     *           ";      
	map += L"              *                   *             ";      
	map += L"                *                *              ";      
	map += L"                 *             *                ";      
	map += L"                    *        *                  ";      
	map += L"                        *                       ";
	
	long nn = 0;
	
	while (running)
	{
		nn++;
		for (int i = 0; i < nScreenWidth * nScreenHeight; i++)
		{
			screen[i] = ' ';
		}
		if (nn % 1000 == 0)
		{
			for (int ny = 0; ny < nMapHeight; ny++)
			{
				for (int nx = 0; nx < nMapWidth; nx++)
				{
					screen[ny * nScreenWidth + nx] = map[ny * nMapWidth + nx];
				}
			}
		}

		if (GetAsyncKeyState((unsigned short)'Q') & 0x8000)
		{
			running = false;
		}
		
		screen[nScreenWidth * nScreenHeight - 1] = '\0';
		WriteConsoleOutputCharacter(hConsole, screen, nScreenWidth * nScreenHeight, { 0, 0 }, &dwByesWritten);
		if (nn % 1000 == 0)
		{
			Sleep(300);
		}
	}
}

std::string ReadFile(const char* filepath)
{
	std::string sourceString = "";
	std::ifstream inFile;
	inFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);

	try
	{
		inFile.open(filepath);
		std::stringstream shaderSourceStream;
		shaderSourceStream << inFile.rdbuf();
		inFile.close();
		sourceString = shaderSourceStream.str();
	}
	catch (std::ifstream::failure e)
	{
	}
	return sourceString;
}