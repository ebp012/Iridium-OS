#include "libraries.hpp"
using namespace std;
using namespace tabulate;
namespace fs = std::filesystem;
using std::filesystem::create_directory;

void createFatalError() {
	sleep(3);
	system("clear");
	printf("Oh oh. :-{ A fatal error has occured to BestPenguin Disk.\nIf you call E11 Tech Support, please provide the above upcoming error information.\nERR: SUPPORT INFO NOT PROGRAMMED YET\nIt's now safe to turn off your computer.\nNote: BestPenguin Text always saves your files. You can still access them!");
}

void loadingAnimation () {
	system("clear");
	printf("<--->\n");
	sleep(1);
	system("clear");
	printf("<#-->\n");
	sleep(1);
	system("clear");
	printf("<##->\n");
	sleep(1);
	system("clear");
}

void clearScreen(){
	system("clear");
}
void logonPrompt(){
	printf("Please enter your first name for personalisation\n");
	scanf("%d", &myNum);
	printf("Signing you in...\n");
	clearScreen();
	loadingAnimation();
	printf("Welcome, %d!\n", myNum);
}
