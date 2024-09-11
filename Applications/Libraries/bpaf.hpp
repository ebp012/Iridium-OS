#include "basiclib.hpp"
#include "Applications/AeonicHub/hub.hpp"
#include "Applications/applist.h"

//Applications//


int loadBar () {
	cout << "\033[2J\033[1;1H";
	cout<<"<---->";
	sleep(1);
	cout << "\033[2J\033[1;1H";
	cout<<"<#--->\n";
	sleep(1);
	cout << "\033[2J\033[1;1H";
	cout<<"<##-->";
	sleep(1);
	cout << "\033[2J\033[1;1H";
	cout<<"<###->";
	sleep(1);
	cout << "\033[2J\033[1;1H";
	cout<<"<####>";
	sleep(1);
	cout << "\033[2J\033[1;1H";
	return true;
}

int adventure() {

	cout << "Welcome to the adventure game!" << endl;
	cout << "You find yourself in a dark forest, and you see a fork in the path ahead." << endl;
	cout << "Do you go left or right?\n[1] Left\n[2] Right" << endl;

	int choice;
	cin >> choice;

	if (choice == 1) {
		cout << "You decide to go left and you come across a clearing with a small cabin in the center.\n[1] Go inside\n[2] Keep walking" << endl;
		cout << "Do you go inside the cabin or keep walking?" << endl;

		cin >> choice;

		if (choice == 1) {
			cout << "You go inside the cabin and find a warm fire and a comfortable bed. You decide to spend the night and rest." << endl;
		}
		else if (choice == 2) {
			cout << "You decide to keep walking and you eventually come across a river. Do you try to cross the river or go back to the cabin?\n[1] Cross the river\n[2] Go back\n[3] Cross the river and drink some water from it" << endl;

			cin >> choice;

			if (choice == 1) {
				cout << "You attempt to cross the river, but you slip and fall in. You are swept downstream and eventually make it to safety, but you are cold and wet." << endl;
			}
			else if (choice == 2) {
				cout << "You go back to the cabin and spend the night warm and dry by the fire." << endl;
			}
			else if (choice == 3) {
				cout << "You have died! You crossed the river successfully, but the water was intoxicated with dust and other stuff! You got a heart attack, and with nobody to perform CPR, you died!" << endl;
			}
		}
	}
	else if (choice == 2) {
		cout << "You decide to go right and you come across a narrow path leading up a mountain." << endl;
		cout << "Do you follow the path or go back?\n[1] Follow the path\n[2] Go back" << endl;

		cin >> choice;

		if (choice == 1) {
			cout << "You follow the path up the mountain and eventually reach the summit, where you have a beautiful view of the surrounding landscape. You take in the scenery and then begin your descent back down the mountain. You then see a tree." << endl;
		}
		else if (choice == 2) {
			cout << "You decide to go back and you end up retracing your steps through the dark forest." << endl;
			cout << "As you walk through the forest, you come across a clearing with a strange looking tree in the center. It has glowing fruit hanging from its branches. Do you try to reach for the fruit or continue on your journey?\n[1] Reach for the fruit\n[2] Continue with the journey\n[3] Take a short nap by the tree" << endl;
			cin >> choice;
			if (choice == 1) {
				cout << "You carefully climb the tree and reach for one of the glowing fruit. As soon as you touch it, the tree starts to shake and you feel a surge of energy. You decide to eat the fruit and suddenly, you feel a new sense of strength and power. You thank the tree and continue on your journey, feeling ready to take on any challenges that may come your way." << endl;
			}
			else if (choice == 2) {
				cout << "You decide to continue on your journey and avoid the strange tree. As you walk, you come across a small pond. Do you stop to drink from the pond or keep walking?\n[1] Drink some water\n[2] Keep walking" << endl;
				cin >> choice;
				if (choice == 1) {
					cout << "You stop to drink from the pond and replenish your energy. You continue on your journey feeling refreshed." << endl;
				}
			}
			else if (choice == 3) {
				cout << "You have died! A bear came and attacked you while sleeping. Half-awake, you didn't even respond!\n\n" << endl;
			}

			cout << "You managed to survive through the adventure! Great job! [claps]\n" << endl;
	} }
}
//End code from AndyWestKen from CeeksforGeeks Gode
void animate () {
	cout << "\033[2J\033[1;1H";
	cout << "Multiplication Facts For Kids" << endl;
	cout << "\033[2J\033[1;1H";
	cout << "0 times anything is zero\n";
	sleep(1);
	cout << "and one times anything is the original number;";
	sleep(1);
	cout << "To find two times a number\n";
	sleep(1);
	cout << "Just add the number to itself;\nLet us go!";
	cout << "\033[2J\033[1;1H";
	sleep(1);
	cout << "2x1=2\n";
	sleep(1);
	cout << "2x2=4\n";
	sleep(1);
	cout << "3x2=6\n";
	sleep(1);
	cout << "4x2=8\n";
	sleep(1);
	cout << "5x2=10\n";
	sleep(1);
	cout << "6x2=12\n";
	sleep(2);
	cout << "7x2=14\n";
	sleep(2);
	cout << "8x2=16\n";
	sleep(2);
	cout << "9x2=18\n";
	sleep(2);
	cout << "10x2=20\n";
	sleep(2);
	cout << "11x2=22\n";
	sleep(2);
	cout << "12x2=24\n";
	sleep(2);
	cout << "13x2=26\n";
	sleep(2);
	cout << "14x2=28\n";
	sleep(2);
	cout << "15x2=30\n";
	sleep(2);
	cout << "and finally...\n16x2=32!\n";
	cout << "Sorry but this is still under construction and as you know extensions are still in beta. Sorry for the inconvenience! Returning you home in 5 seconds...\n";
	sleep(1);
}

int rickText () {
	std::cout << "\nOh no! They're trying to roll you! Don't click it!\nYou will get back to the home screen in 5 seconds.";
	sleep(5);
	return 1;
}
void rickFinder () {
	std::cout << "\n-----\nType in your youtube link below and press enter to see if it was a rickroll. If nothing happens and you just go home, you are sure it is not a rickroll.\n";
	std::string link;
	std::cin >> link;
	/*Official Link*/
	if (link == "https://www.youtube.com/watch?v=dQw4w9WgXcQ") {
		rickText();
	}
	else if (link == "http://www.youtube.com/watch?v=dQw4w9WgXcQ") {
		rickText();
	}
	else if (link == "https://m.youtube.com/watch?v=dQw4w9WgXcQ") {
		rickText();
	}
	else if (link == "http://m.youtube.com/watch?v=dQw4w9WgXcQ") {
		rickText();
	}
	else if (link == "www.youtube.com/watch?v=dQw4w9WgXcQ") {
		rickText();
	}
	else if (link == "youtube.com/watch?v=dQw4w9WgXcQ") {
		rickText();
	}
	else if (link == "dQw4w9WgXcQ") {
		rickText();
	}

	/*Voice Crack*/
	else if (link == "https://www.youtube.com/watch?v=BjDebmqFRuc") {
		rickText();
	}
	else if (link == "http://www.youtube.com/watch?v=BjDebmqFRuc") {
		rickText();
	}
	else if (link == "https://m.youtube.com/watch?v=BjDebmqFRuc") {
		rickText();
	}
	else if (link == "http://m.youtube.com/watch?v=BjDebmqFRuc") {
		rickText();
	}
	else if (link == "www.youtube.com/watch?v=BjDebmqFRuc") {
		rickText();
	}
	else if (link == "youtube.com/watch?v=BjDebmqFRuc") {
		rickText();
	}
	else if (link == "BjDebmqFRuc") {
		rickText();
	}
	/*TomorrowTides*/
	else if (link == "tomorrowtides.com") {
		rickText();
	}
	/*Not The Link*/
	else {
		std::cout << "\nThat isn't a rickroll! We're taking you home in 5 seconds.";
		sleep(5);
	}
}
void extensionFind () {
	cout<<"Enter the number of the extension that you would like to use.\n<1> Rickroll Detector\n<2> Times Tables\n<3>Advanced Text Editor\n";
		int extension;
		cin >> extension;
		if (extension == 1) {
			rickFinder();
		}
		else if (extension == 2) {
			animate();
		}
		else if (extension == 3) {
			cout << "\033[2J\033[1;1H";
		cout<<"----------\n(C) 2017-2022 the Aeonic Corporation \n\nBestPenguin Advanced Text Editor\nCreate a document of any file type of your choosing (.txt, .nst, .cpp/.hpp, .md mainly)\nPress enter when done, then enter the filename INCLUDING THE EXTENSION, then press enter again. It takes 5 seconds to save a file.\nSaved files may be accessed through the Binocular app.\n";
		string note;
		cin>>note;
		cout << "\nEnter the filename below and do not forget to add the extension.\n";
		string filename;
		cin >> filename;
		sleep(5);
		string filename2 = filename;
		ofstream MyFile(filename2);
		MyFile << note;
		cout<<"Saved!\n\n\n";
		MyFile.close();
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			extensionFind();
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout << "That extension does not exist. Taking you home...\n";
		}
}

void cls(){
	cout << "\033[2J\033[1;1H";
}


void supportFunc(){
	cout<<"----------\n(C) 2017-2022 the Aeonic Corporation \n\nAeonic Hub\nThis is your hub for support with your Aeonic product.\nWhich product are you looking for help with? (iridium, bestfile, intervideo, bestpenguin, legacy): ";
		string prodHelp;
		cin>>prodHelp;
		if (prodHelp=="iridium") {
			cout<<"\n(1)What apps can I use?\n(2)";
		}
		else if (prodHelp=="sentence") {

		}
		else if (prodHelp=="polanco") {

		}
		else if (prodHelp=="prodraw") {

		}
		else if (prodHelp=="bestfile") {
			cout<<"\nChoose your BestFile product\n(1)Sentence\n(2)Polanco\n(3)\n(3)ProDraw\nEnter a number: ";
			int chosen;
			cin>>chosen;
			if (chosen==1){
				cout<<"What do you need?\n(1)Basic formatting\n(2)Keyboard Shortcuts\n(3)Advanced Formatting\n(4)Accessibility\n(5)Image Insertion\nChoose what you need: ";
				int chosen2;
				cin>>chosen2;
				if (chosen2==1){
					cls();
					cout<<"Basic Fomatting in Aeonic Sentence\nBOLD-press the dark B. It makes text darker.\nITALIC-press the slanted I. It slants text.\nUNDERLINE-press the U with a line under it. It puts a line under text.\nOVERLINE-press the O viwh a line over it. It puts a line over text.\nCOLOURS AND MORE-see advanced formatting.\n\n";
				}
				if (chosen2==2){
					cls();
					cout<<"Keyboard Shortcuts\n(1)PC, (2)Mac, (3)Linux or (4)Iridium? ";
					int chosen3;
					cin>>chosen3;
					cout<<endl;
					if (chosen3==1 || chosen3==3){
						cout<<"PC/Linux Shortcuts\nControl B-Bold.\nControl I-Italic.\nControl U-Underline.\nAlt O-Overline.\nAlt Shift 5-Strikethrough\nBackspace-Delete the character to the left.\nDel-Delete the character to the right.\nIns-Replace text to the right with new text\nPrt Sc-take a screenshot.\nControl P-print.\nControl S-save.\nTab-navigate the toolbars without a mouse\nEnter-Open the selected item in the toolbar\n";
					}
					else if (chosen3==2){
						cout<<"Mac/Asahi Shortcuts\nCommand B-Bold.\nCommand I-Italic.\nCommand U-Underline.\nCommand Option O-Overline.\nCommand Shift X-Strikethrough\n⌫/Delete-Delete the character to the left.\n⌦-Delete the character to the right.\n⌧-Delete the selected text\nCommand Shift 3-take a screenshot.\nCommand P-print.\nCommand S-save.\n⇥/Tab-navigate the toolbars without a mouse\n⌤/Enter-Open the selected item in the toolbar\nReturn-make a new line";
					}
					else if (chosen3==4){
						cout<<"Iridium OS shortcuts\nNo shortcuts were found on the database.\n";
					}
					else {
						cout<<endl;
					}
				}
			}
			else {
				cout<<"\nEither support has not been made for that product, it's unsupported (check Legacy), or it doesn't exist.\n";
			}
		}
		else if (prodHelp=="iridium") {

		}
		else if (prodHelp=="bestpenguin") {
			cout<<"\nAeonic BestPenguin 9.0/9.1 Technical Support\nNote: BestPenguin 9.1 ended mainstream support on the 30th April 2022. Extended support ends on the 30th of September 2022. After that, all online BestPenguin services, including Expert 3.1, eVirt, App Supermarket, and Music will shut down. More advanced support articles will be forever removed.";
		}
		else if (prodHelp=="legacy") {
			cout<<"\nSupport for Older Products\n(1)BestPenguin X\n(2)BestPenguin RocketPro\n(3)BestPenguin Point and 6.0\n(4)BestPenguin 6.1, Pengo 7.0-8.0\n(5)LabSim\n(6)eSuper/BestOffice";
		}
		else {
			cout<<"That product doesn't exist. You will be returned home.\n";
		}
}

int mainFunc() {

	//cout<<"Please choose an app to open\n";
	//cout<<"Clock\nText\nBinocular\nNumString\nExpert (browser)\nAddition-Calculator\nSubtraction-Calculator\nMultiplication-Calculator\nDivision-Calculator\nTour\nCmdline\nCircle-Calculator\nExtensions\n";
	Table apps;
	apps.add_row({"Important", "Clock", "Action", "Expert", "Extensions", "Tour"});
	apps.add_row({"Office", "Text", "Numstring", "Binocular", "Extensions", "Action"});
	apps.add_row({"Utilities", "Calculator", "eNote", "Progra", "Sentence", "AeonicHub"});
	apps.add_row({"Games", "Adventure", "Stonks", "NumGuess"});
	apps[0][0].format()
		.font_style({FontStyle::bold})
		.font_color(Color::cyan)
		.font_align(FontAlign::right);
	apps[1][0].format()
		.font_style({FontStyle::bold})
		.font_color(Color::yellow)
		.font_align(FontAlign::right);
	apps[2][0].format()
		.font_style({FontStyle::bold})
		.font_color(Color::magenta)
		.font_align(FontAlign::right);
	apps[3][0].format()
		.font_style({FontStyle::bold})
		.font_color(Color::green)
		.font_align(FontAlign::right);
	std::cout << apps << endl;
	string app;
	cin>>app;
	if (app=="clock"){
		cls(); /* clear the screen */
		// current date/time based on current system
	 time_t now = time(0);

		// convert now to string form
	 char* dt = ctime(&now);
	 cout << "The time is " << dt << "." << endl;
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	else if (app=="aeonichub" || app=="aeonic-hub" || app=="access-e11" || app=="aeonic" || app=="help" || app=="support" || app=="help-and-support"){

		supportFunc();
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	else if (app=="text"){
		cout << "\033[2J\033[1;1H";
		cout<<"----------\n(C) 2017-2022 the Aeonic Corporation \n\nBestPenguin Text\nCreate a quick text (.txt) document on BestPenguin Disk, which saves right to the cloud\nPress enter when done, then enter the filename, then press enter again. It takes 5 seconds to save a file.\nSaved files may be accessed through the Binocular app.\n";
		string note;
		cin>>note;
		cout << "\nEnter the filename: ";
		string filename;
		cin >> filename;
		sleep(5);
		string filename2 = "Documents/usr1/" + filename + ".txt";
		ofstream MyFile(filename2);
		MyFile << note;
		cout<<"Saved!\n\n\n";
		MyFile.close();
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}

	else if (app=="adventure"){
		cout << "\033[2J\033[1;1H";
		cout<<"----------\n(C) 2017-2023 the Aeonic Corporation \n\nChoose your own adventure\n\n";
		adventure();
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}

	else if (app=="numguess") {
		cout << "\033[2J\033[1;1H";
		cout << "-------\n(C) 2017-2022 the Aeonic Corporation \n\nAeonic NumGuess\nA simple game where you guess the number between 0 and the number of your choice\nEnter the maximum of the numbers to be guessed: ";
		int max;
		cin >> max;
		cout << endl;
		srand(time(0));
		int randNumber = rand() % max + 1;
		cout << "Now guess the number that was chosen. No decimals or negatives!\nType here: ";
		int myGuess;
		cin >> myGuess;
		loadBar();
		sleep(1);
		cout<<"You guessed a number between 1 and "<<max<<".\n";
		sleep(1);
		cout<<"Detecting whether you were right or wrong.";
		sleep(1);
		cout<<".";
		sleep(1);
		cout<<".";
		sleep(1);
		cout<<".Finished! You were ";
		if (myGuess == randNumber) {
			cout << "correct! Amazing!\n";
		}
		cout<<"Press [5] to end the programme. Press [4] to restart the programme. Press [6] to make it safe to shut down.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else if (d=="4"){
			cout << "\033[2J\033[1;1H";
			cout << "Programme restarting is not available yet. But, we're still working on it behind the scenes!";
			mainFunc();
		}
		else if (d=="6"){
			cout << "\033[2J\033[1;1H";
			cout << "It shall be fine to shutdown your computer. Everything has been shut down.";
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	else if (app=="linemode"){
		cls();
		#include "Applications/LineMode/HTFormatText.h"
		#include "Applications/LineMode/HTBufferFile.h"
		#include "Applications/LineMode/HTFormatText.h"
		#include "Applications/LineMode/HTBufferFile.h"
	}
	else if (app=="numstring"){
		cout << "\033[2J\033[1;1H";
		cout<<"----------\n(C) 2017-2022 the Aeonic Corporation \n\nAeonic Numstring\nCreate a quick numerical text (.nst) document on BestPenguin Disk, which saves right to the cloud\nPress enter when done, then enter the filename, then press enter again. It takes 5 seconds to save a file.\nSaved files may be accessed through the Binocular app.\n";
		double note;
		cin>>note;
		cout << "\nEnter the filename: ";
		string filename;
		cin >> filename;
		sleep(5);
		string filename2 = "Documents" + filename + ".nst";
		ofstream MyFile(filename2);
		MyFile << note;
		cout<<"Saved!\n\n\n";
		MyFile.close();
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		//else if (app=="exit"){
		//	#include "bpdlogin.hpp"
		//	cls();
		//	main();
		//}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	else if (app=="binocular"){
		cout << "\033[2J\033[1;1H";
		cout<<"----------\n(C) 2017-2022 the Aeonic Corporation \n\nBestPenguin Binocular\nBrowse the files on your hard drive\n";
	cout<<"	 __   __  "<<endl;
	cout<<"	/  \\-/  \\ "<<endl;
	cout<<"	\\__/-\\__/ "<<endl;
		cout << "\nEnter the file type (.txt, .nst, .xml, .bmp, documentation): ";
		string filetype;
		cin >> filetype;
		if (filetype == "txt") {
			string filename;
			cout << "\nEnter the filename, no extension: ";
			cin >> filename;
			string file = "Documents/usr1/" + filename + ".txt";
			cout << endl;
			ifstream readTheFileAlready(file);
			while (getline (readTheFileAlready, file)) {
				cout << file;
			}
		}
		else if (filetype == "nst") {
			string filename;
			cout << "\nEnter the filename, no extension: ";
			cin >> filename;
			string file = "Documents/usr1/" + filename + ".nst";
			cout << endl;
			ifstream readTheFileAlready(file);
			while (getline (readTheFileAlready, file)) {
				cout << file;
			}
		}
		else if (filetype == "docs") {
			string filename;
			string file = "Documents/usr1/documentation.md";
			cout << endl;
			ifstream readTheFileAlready(file);
			while (getline (readTheFileAlready, file)) {
				cout << file;
			}
		}
		else if (filetype == "xml") {
			string filename;
			cout << "\nEnter the filename, no extension: ";
			cin >> filename;
			string file = "Documents/usr1/" + filename + ".xml";
			cout << endl;
			ifstream readTheFileAlready(file);
			while (getline (readTheFileAlready, file)) {
				cout << file;
			}
		}
		else if (filetype == "text") {
			string filename;
			cout << "\nEnter the filename, including extension: ";
			cin >> filename;
			string file = "Documents/usr1/" + filename;
			cout << endl;
			ifstream readTheFileAlready(file);
			while (getline (readTheFileAlready, file)) {
				cout << file;
			}
		}
		else {
			fatalError();
		}
		cout<<endl<<endl;
		string d;
		cout<<"Press [5] to end the programme. Press [4] to restart the programme. 	Press [6] to make it safe to shut down.\n";
		//string d;\\
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else if (d=="4"){
			cout << "\033[2J\033[1;1H";
			cout << "Programme restarting is not available yet. But, we're still working on it behind the scenes!";
			mainFunc();
		}
		else if (d=="6"){
			cout << "\033[2J\033[1;1H";
			cout << "It shall be fine to shutdown your computer. Everything has been shut down.";
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	/*else if (app=="progra"){
		char filename[];
		float a,b,c;
		cout<<"Enter First Number: ";
		cin>>a;
		cout<<"Enter Second Number: ";
		cin>>b;

		c=a+b;
		cout<<"Sum of "<<a<<" and "<<b<<" is "<<c<<endl;
		writeHtml(filename, a, b, c);
	}*/
	else if (app=="stonks"){
		cout << "\033[2J\033[1;1H";
	// initiate variables
	int price;
	std::string bors;
	long long crypto = 150000;
	long long buyCost;
	long long sellCost;
	long long shares = 0;
	long long days;
	long long dayCount;
	long long daysGoneWithoutSelling = 1;
	string skip;
	string sellCost_string;
	string buyCost_string;
	int finalChoice;
	int average = 0;
	int displayTip;
	using namespace std;
	cout << "\033[2J\033[1;1H";
		cout<<"----------\n(C) 2017-2022 @OwenBlack on Replit (modified by Aeonic) \n\nStonks: The Stock Market Game\nStonks is an open source game that was created by Owen Black. It has been slightly modified from the original by Aeonic.\n";
	cout<<"\n";
	cout << "\x1B[32mIn this game your goal is to buy low and sell high for HUGE gains in the stock market\n\n\033[0m";

	cout << "\x1B[31mHow many days would you like to play the stock market "
					"for?\nYou may not play less than 4 days, and you may not play more than 4 years/1461 days.\nPlease type below?\n\033[0m";
	cout << "\x1B[34m";
	cin >> days;
	cout << "\n\033[0m";
	cout << "\033[2J\033[1;1H";

	dayCount = days;
	for (int j = 3; j >= days; j++) {
		cout << "\033[2J\033[1;1H";
		cout << "\x1B[31mFATAL ERROR! Please restart. The game has encountered a serious error. The error is written below.\n\nERR: TOO_SMALL_INTEGER_ENTERED\nWait some time and it will restart automatically with the minimum days.\n\033[0m";
		days = 5;
	}
	for (int k = 1461; k < days; k++) {
		cout << "\033[2J\033[1;1H";
		cout << "\x1B[32mFATAL ERROR! Please restart. The game has encountered a serious error. The error is written below.\n\nERR: TOO_LARGE_INTEGER_ENTERED\nWait some time and it will restart automatically with the maximum days DONT DO AGAIN.\033[0m";
		days = 1461;
	}
	for (int i = 5; i <= days; i++) {
		// changes in stock price
		srand((unsigned)time(0));
		int price = 1 + (rand() % 1001);

		// List of in game tips
		string tips[] = {
				"Tip: Buy low, and then sell high. You'll get LOADS of money that way.","'Stonks, the stock market game as featured on the Sharaceubad Gazette, is amazing for ANYONE to learn about stocks.'- Warren Buffet","11,000 Runs and Climbing! Possibly the best app on Iridium?","If only this were possible in real life!","Did you hear about that hamster that outperformed the S&P 500!!!","SPLASH!","There was once a poor old man. He started playin' Stonks and became a trillionaire. And in friggin' real life."	};

		displayTip = 0 + (rand() % 14);
		cout << "\x1B[34m";
		cout << " =====   ========   =====   #     #  #    #   #####" << endl;
		cout << "=     =     =     =      =  ##    #  #   #   #     #" << endl;
		cout << "#           =     =      =  # #   #  #  #    #       " << endl;
		cout << " #####      =     =      #  #  #  #  ###      #####  " << endl;
		cout << "      #     =     =      #  #   # #  #  #          #" << endl;
		cout << "#     #     =     =      #  #    ##  #   #   #     # " << endl;
		cout << " #####      =      =====    #     #  #    #   #####  " << endl;
		cout << "\n\033[0m";
		/*std::cout << "\n";
		std::cout << "|        |   |    | |     |   | | / /    |     \n";
		std::cout << " ----    |   |    | |     |   | |/ /      ---- \n";
		std::cout << "     |   |   |    | |     |   | |_ _          |\n";
		std::cout << "    /    |   |    | |     |   | | _ _        / \n";
		std::cout << "----     |   |||||| |     |   | |  _ _   ----  ";
		std::cout << "\n(" << tips[displayTip] << ")\n\n";*/
		std::cout << "============================================================="
								 "===============================\n\n";

		// show your stats like crypto days and shares
		std::cout << "Days Left: " << dayCount << "       ";
		dayCount = dayCount - 1;
		std::cout << "Balance: ₿" << crypto << "       ";
		std::cout << "Shares: " << shares << "        ";
		std::cout << "Average Buy Cost: " << average << "\n\n";

		// give the option for 1 2 or 3
		std::cout << "\nTodays Stock Price: $" << price
							<< "\n\nWhat would you like to do?    Buy(1)?   Sell(2)?    Or "
								 "wait to the next day(3)?\n\nYour Choice?: ";
		cout << "\x1B[34m";
		std::cin >> bors;
		cout << "\n\033[0m";

		// option 1 buying
		if (bors == "1" and crypto != 0) {
			average = (average + price) / daysGoneWithoutSelling;
			daysGoneWithoutSelling++;
			std::cout << "The absolute maximum amount of shares you can buy is: " << crypto / price;
			std::cout << "\nIf you want to buy the absolute maximum amount of shares possible, type in '12345'\nHow many shares would you like to buy?: ";
			std::cin >> buyCost;

			if (buyCost == 12345) {
				shares = crypto / price;
				crypto = crypto - (shares * price);
			}
			if (buyCost > (crypto / price)) {
				std::cout<< "\n\nYou are now $" << crypto <<" in debt.\n\n";

				std::cout << "---------------------------------------------------------"
										 "------------\n\n";
			} else if (buyCost <= (crypto / price)) {
				std::cout << "---------------------------------------------------------"
										 "------------\n\n";

				std::cout << buyCost;
				// account for bought shares
				shares = shares + buyCost;
				crypto = crypto - (price * buyCost);
			}

		}
		// option 2 sold shares
		else if (bors == "2" and shares != 0) {
			daysGoneWithoutSelling = 1;
			std::cout << "\nThe max amount of shares you can sell is " << shares;
			std::cout
					<< "\nIf you would like to sell all of your shares type '12345', "
						 "else...\nHow many shares would you like to sell?: ";

			std::cin >> sellCost;

			if (sellCost == 12345) {
				std::cout << "---------------------------------------------------------"
										 "------------\n\n";

				// account for sold shares
				crypto = crypto + (shares * price);
				shares = 0;

			} else if (sellCost > shares) {
				std::cout << "\nYOU DO NOT HAVE THAT MANY SHARES TO SELL!!!";
				std::cout << "\n\n-----------------------------------------------------"
										 "----------------\n\n";
			} else if (sellCost <= shares) {
				std::cout << "---------------------------------------------------------"
										 "------------\n\n";

				// account for sold shares
				shares = shares - sellCost;
				crypto = crypto + (sellCost * price);
			} else {
				std::cout << "INVALID RESPONCE";
			}
			if (shares == 0) {
				average = 0;
			}
		}
		// option 3 skipping to the next day
		else if (bors == "3") {
			std::cout << "Skipping to the next day.\n";
			std::cout << "-----------------------------------------------------------"
									 "----------\n";

		} else if (crypto == 0) {
			std::cout << "You can't buy anymore because you are your balance is 0 so "
									 "you have to sell";
			std::cout << "\nHow much would you like to sell?: ";
			std::cin >> sellCost;
			std::cout << "-----------------------------------------------------------"
									 "----------\n";
			shares = shares - (sellCost * price);
			crypto = crypto * sellCost * crypto;
		} else if (bors == "2" and shares == 0) {
			std::cout << "You do not have any shares to sell! And because either you "
									 "weren't paying attention or you are trying to cheat you "
									 "will lose a day!\n";
		}
		std::cout << "\033[2J\033[1;1H";
		system("clear");

		std::cout.imbue(std::locale(""));

		std::cout << std::fixed << std::showpoint << std::setprecision(3);

		if (dayCount == 0) {
			if (shares > 0) {
				std::cout << "Would you like me to convert your shares to crypto using "
										 "the last share price? Yes(1) No(2): ";
				std::cin >> finalChoice;

				if (finalChoice == 1) {
					std::cout << "\n\nYou have 0 days left to make money. Lets see how "
											 "you did!\n";
					crypto = crypto + (shares * price);
					shares = 0;
					std::cout << "\nAfter " << days << " days you have made $" << crypto
										<< " crypto\n";
					std::cout << "\nYou own " << shares << " shares\n";
				} else if (finalChoice == 2) {
					std::cout << "\n\nYou have 0 days left to make money. Lets see how "
											 "you did!\n";
					std::cout << "\nAfter " << days << " days you have made $" << crypto
										<< " crypto\n";
					std::cout << "You own " << shares << " shares\n";
				} else {
					while (finalChoice != 1 && finalChoice != 2) {
						std::cout << "\nInvalid responce!\n";
						std::cout << "\nWould you like me to convert your shares to crypto "
												 "using the last share price? Yes(1) No(2): ";
						std::cin >> finalChoice;
					}
				}
			} else if (shares == 0) {
				std::cout << "\n\nYou have 0 days left to make money. Lets see how you "
										 "did!\n";
				std::cout << "\nAfter " << days << " days you have made $" << crypto
									<< " crypto\n";
				std::cout << "You own " << shares << " shares\n";
			}

			if (crypto > 1000000000000) {
				std::cout << "\nVERY VERY Impresive!!! Now just do that in the real "
										 "world and you will be set ;)";
			} else if (crypto > 1000000000) {
				std::cout << "\nCan you teach me your ways? Because that was amazing!";
			} else if (crypto > 1000000) {
				std::cout << "\nWOW WOW WOW, very good indeed. Very stonks";
			} else if (crypto >= 1000) {
				std::cout << "\nPretty good but I think you can do better, maybe if "
										 "you play for longer?!";
			} else if (crypto < 1000) {
				std::cout
						<< "\nYOU LOST THE MONEY!!! oh well.. back to McDonalds I guess";
			}
		}
	}
sleep(5);
loadBar();
cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				mainFunc();
			}
			else {
				cout << "\033[2J\033[1;1H";
				fatalError();
			}
	}
	else if (app=="expert"){
		cout << "\033[2J\033[1;1H";

		cout<<"-----------\n(C) 2017-2022 the Aeonic Corporation \n\nExpert Web Browser\nBrowse a small collection of web sites\nType in LIST in all caps to find a list of sites.\n";
		string site;
		cin>>site;
		if (site=="LIST"){
			cout << "\033[2J\033[1;1H";
			cout<<"bing.com\napple.com\nw3schools.com\n";
			cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				mainFunc();
			}
			else {
				cout << "\033[2J\033[1;1H";
				fatalError();
			}
		}

		else if (site=="bing.com"){
			cout << "\033[2J\033[1;1H";
			cout<<"\n\n\nMicrosoft Bing Images Video ... Log In ---\nLanguages:हिंदीಕನ್ನಡবাংলাमराठीతెలుగుதமிழ்ગુજરાતીമലയാളംਪੰਜਾਬੀ\nThe ruins of a mayan superpower\n";
			cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				mainFunc();
			}
			else {
				cout << "\033[2J\033[1;1H";
				fatalError();
			}
		}
		else if (site=="apple.com"){
			cout << "\033[2J\033[1;1H";
			cout<<endl;
			cout<<endl;
			cout<<"Apple Logo Mac iPad iPhone Watch TV Music Support Store Search\n\nUnable to display homepage, since there was an error connecting to the server. Please try viewing this page on a supported browser.\n";
			cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				mainFunc();
			}
			else {
				cout << "\033[2J\033[1;1H";
				fatalError();
		}
		}
		else if (site=="w3schools.com"){
			cout << "\033[2J\033[1;1H";
			cout<<"\n\n\nHTMLThe language for building web pages\nHTML Example:\n<!DOCTYPE html>\n<html>\n<title>\nHTML Tutorial</title>\n<body>\n<h1>This is a heading</h1>\n<p>This is a paragraph.</p>\n</body>\n</html>\n\nCSS Example:\nbody {\nbackground-color: lightblue;\n}\nh1 {\ncolor: white;\ntext-align: center;\n}\np {\nfont-family: verdana;\nfont-size: 20px;\n}\nCSS\nThe language for styling web page\ns";
			cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				mainFunc();
			}
			else {
				cout << "\033[2J\033[1;1H";
				fatalError();
			}
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout<<"Website not found\n";
			cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				cout<<"Press [5] to end the programme.\n";
				string d;
				cin >> d;
				if (d=="5"){
					cout << "\033[2J\033[1;1H";
					mainFunc();
				}
				else {
					cout << "\033[2J\033[1;1H";
					fatalError();
				}
			}
			else {
				cout << "\033[2J\033[1;1H";
				fatalError();
			}
		}
	}
	else if (app=="addition-calculator"){
		cout << "\033[2J\033[1;1H";
		cout<<"\n-----------\n(C) 2017-2022 the Aeonic Corporation \n\nCalculator\nOperation: Addition\n";
		cout<<"Please enter addend #1:";
		int addend1;
		cin>>addend1;
		cout<<"Please enter addend #2:";
		int addend2;
		cin>>addend2;
		int answer = addend1 + addend2;
		loadBar();
		cout<<"\nHere is the answer: "<<addend1<<"+"<<addend2<<"="<<answer<<".\n";
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	else if (app=="calculator"){
		cout << "\033[2J\033[1;1H";
		cout<<"\n-----------\n(C) 2017-2022 the Aeonic Corporation \n\nCalculator\nOperations: Universal\n\nRound, Add, Subtract, Multiply, Divide, Exponent, Tetrate, Log, Sqrt, Sin, Cos, Tan, Absolute Value (abs), Circle, Quadratic\n";
		cout << "Choose an operation from above: ";
		string operation;
		cin >> operation;
		if (operation == "add") {
			cout<<"Please enter addend #1:";
			double addend1;
			cin>>addend1;
			cout<<"Please enter addend #2:";
			double addend2;
			cin>>addend2;
			double answera = addend1 + addend2;
			loadBar();
			cout<<"\nHere is the answer: "<<addend1<<"+"<<addend2<<"="<<answera<<".\n";
		}
		else if (operation == "subtract") {
			cout<<"Please enter subtractend:";
			double total;
			cin>>total;
			cout<<"Please enter reduction:";
			double subtractend;
			cin>>subtractend;
			double answers = total - subtractend;
			loadBar();
			cout<<"\nHere is the answer: "<<total<<"-"<<subtractend<<"="<<answers<<".\n";
		}
		else if (operation == "multiply"){
			cout<<"Please enter factor 1:";
			double factor1;
			cin>>factor1;
			cout<<"Please enter factor 2:";
			double factor2;
			cin>>factor2;
			double answerm = factor1 * factor2;
			loadBar();
			cout<<"\nHere is the answer: "<<factor1<<"x"<<factor2<<"="<<answerm<<".";
		}
		else if (operation == "divide") {
			cout<<"Please enter dividend:";
			double dividend;
			cin>>dividend;
			cout<<"Please enter divisor:";
			double divisor;
			cin>>divisor;
			double answerd = dividend / divisor;
			loadBar();
			cout<<"\nHere is the answer: "<<dividend<<"-"<<divisor<<"="<<answerd<<".\n";
		}
		else if (operation == "exponent") {
			cout<<"Please enter base:";
			double base;
			cin>>base;
			cout<<"Please enter exponent:";
			double exponent;
			cin>>exponent;
			double answere = pow(base, exponent);
			loadBar();
			cout<<"\nHere is the answer: "<<base<<"^"<<exponent<<"="<<answere<<".\n";
		}
		else if (operation == "tetrate") {
			cout<<"Please enter base:";
			double base;
			cin>>base;
			cout<<"Please enter exponent:";
			double exponent;
			cin>>exponent;
			double answerf;
			if (exponent < -1) {
				cout<<"\nYour equation "<<base<<"^^"<<exponent<<" could not be calculated because it is impossible to tetrate to anything less than -1.".\n";
			}
			else if (exponent == -1) {
				answerf = 0;
				cout<<"\nHere is the answer: "<<base<<"^^"<<exponent<<"="<<answerf<<".\n";
			}
			else if (exponent == 0) {
				answerf = 1;
				cout<<"\nHere is the answer: "<<base<<"^^"<<exponent<<"="<<answerf<<".\n";
			}
			else if (exponent == 1) {
				answerf = base;
				cout<<"\nHere is the answer: "<<base<<"^^"<<exponent<<"="<<answerf<<".\n";
			}
			else if (exponent == 2) {
				answerf = pow(base, base);
				cout<<"\nHere is the answer: "<<base<<"^^"<<exponent<<"="<<answerf<<".\n";
			}
			else if (exponent == 3) {
				double basea = base;
				double baseb = pow(basea, basea)
				answerf = pow(basea, baseb);
				cout<<"\nHere is the answer: "<<base<<"^^"<<exponent<<"="<<answerf<<".\n";
			}
			else if (exponent == 4) {
				double basea = base;
				double baseb = pow(basea, basea)
				double basec = pow(basea, baseb)
				answerf = pow(basea, basec);
				cout<<"\nHere is the answer: "<<base<<"^^"<<exponent<<"="<<answerf<<".\n";
			}
			// cout<<"\nHere is the answer: "<<base<<"^^"<<exponent<<"="<<answerf<<".\n";
			loadBar();
		}
		else if (operation == "log") {
			cout<<"Please enter base: e";
			cout<<"Please enter total:";
			double total;
			cin>>total;
			double answerl = log(total);
			loadBar();
			cout<<"\nHere's the answer: log("<<total<<") = "<<answerl<<".\n";
		}
		else if (operation == "sqrt") {
			cout<<"Please enter root: 2";
			cout<<"\nPlease enter total:";
			double totalk;
			cin>>totalk;
			double answerr = sqrt(totalk);
			loadBar();
			cout<<"\nHere's the answer: √"<<totalk<<" = "<<answerr<<".\n";
		}
		else if (operation == "sin") {
			//cout<<"Please enter root: 2";
			cout<<"Please enter amount:";
			double amount;
			cin>>amount;
			double answeri = sin(amount);
			loadBar();
			cout<<"\nHere's the answer: sin("<<amount<<") = "<<answeri<<".\n";
		}
		else if (operation == "cos") {
			//cout<<"Please enter root: 2";
			cout<<"Please enter amount:";
			double amounkt;
			cin>>amounkt;
			double answerc = cos(amounkt);
			loadBar();
			cout<<"\nHere's the answer: cos("<<amounkt<<") = "<<answerc<<".\n";
		}
		else if (operation == "tan") {
			//cout<<"Please enter root: 2";
			cout<<"Please enter amount:";
			double amounlkt;
			cin>>amounlkt;
			double answert = tan(amounlkt);
			loadBar();
			cout<<"\nHere's the answer: cos("<<amounlkt<<") = "<<answert<<".\n";
		}
		else if (operation == "abs") {
			//cout<<"Please enter root: 2";
			cout<<"Please enter amount:";
			double amoujnlkt;
			cin>>amoujnlkt;
			double answern = abs(amoujnlkt);
			loadBar();
			cout<<"\nHere's the answer: |"<<amoujnlkt<<"| = "<<answern<<".\n";
		}	
		else if (operation == "round") {
			//cout<<"Please enter root: 2";
			cout<<"Please enter amount:";
			double amounjlkt;
			cin>>amounjlkt;
			double answero = round(amounjlkt);
			loadBar();
			cout<<"\nRounding "<<amounjlkt<<" will result in "<<answero<<".\n";
		}
		else if (operation == "circle") {
			cout<<"Find the area of a circle (formula: TAU/2 r^2)\n";
			double tau = 6.28318530718;
			double halfTau = tau/2;
			double radius;
			cout << "Type the radius of the circle below.\n";
			cin >> radius;
			cout << "The computer is finding the area.\n";
			double radSquare = radius * radius;
			double answere = halfTau * radSquare;
			cout << "Area is:" << answere << ".\n";
		}
		else if (operation == "quadratic") {
			cout<< "What type of quadratic is it?\n[1] ax+b+c=0\n[2]x+bx+c=0\nEnter the number: "
			double quadraticType;
			cin >> quadraticType;
			if (quadraticType == 1) {
				cout<<"ax^2+bx+c=0\nEnter a: ";
				double quadraticA;
				cin>>quadraticA;
				cout << "\nNow enter b: ";
				double quadraticB;
				cin >> quadraticB;
				cout << "\nFinally enter c: ";
				double quadraticC;
				loadBar();
				/*
					x_1=(-b+sqrt(b^2-4ac))/2a
					x_2=(-b-sqrt(b^2-4ac))/2a
				*/
				double negative = -1;
				double quadraticNb = negative * quadraticB;
				double quadraticBs = quadraticB * quadraticB;
				double quadraticFac = 4 * quadraticA * quadraticC;
				double quadraticBsfac = quadraticBs - quadraticFac;
				double quadratisSbsfac = sqrt(quadraticBsfac);
				double quadraticXo = quadraticNb + quadraticSbsfac;
				double quadraticXb = quadraticNb - quadraticSbsfac;
				cout<<"\The quadratic equation "<<quadraticA<<"x+"<<quadraticB<<"x+"<<quadraticC<<"=0 will result in the solutions "<<quadraticXo<<" and "<<quadraticXb<<"."<<".\n";
			}
		}
		else {
			cls();
			cout << "Here's a list of what you can do:\n- Round\n- Add\n- Subtract\n- Multiply\n- Divide\n- Exponent\n- Log\n- Sqrt\n- Sin\n- Cos\n- Tan\n- Circle\n- Absolute value (abs)\n- Quadratic";
		}
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	else if (app=="subtraction-calculator"){
		cout << "\033[2J\033[1;1H";
		cout<<"\n-----------\n(C) 2017-2022 the Aeonic Corporation \n\nCalculator\nOperation: Subtraction\n";
		cout<<"Please enter total:";
		int subtract1;
		cin>>subtract1;
		cout<<"Please enter amount to subtract:";
		int subtract2;
		cin>>subtract2;
		int answer2 = subtract1 - subtract2;
		loadBar();
		cout<<"Your equation was: "<<subtract1<<"-"<<subtract2<<"\nYour answer is: "<<answer2<<".\n";
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	else if (app=="multiplication-calculator"){
		cout << "\033[2J\033[1;1H";
		cout<<"\n-----------\n(C) 2017-2022 the Aeonic Corporation \n\nCalculator\nOperation: Multiplication\n";
		cout<<"Please enter factor #1: ";
		int factor1;
		cin>>factor1;
		cout<<"Please enter factor #2: ";
		int factor2;
		cin>>factor2;
		int answer3 = factor1 * factor2;
		cout<<"Loading....\nCalculating the answer...\nYour equation was: "<<factor1<<"•"<<factor2<<"\nYour answer is: "<<answer3<<".\n";
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	else if (app=="division-calculator"){
		cout << "\033[2J\033[1;1H";
		cout<<"\n-----------\n(C) 2017-2022 the Aeonic Corporation \n\nCalculator\nOperation: Divisor\n";
		cout<<"Please enter dividend: ";
		int dividend;
		cin>>dividend;
		cout<<"Please enter divisor: ";
		int divisor;
		cin>>divisor;
		int answer4 = dividend / divisor;
		cout<<"Loading....\nCalculating the answer...\nYour equation was: "<<dividend<<"÷"<<divisor<<"\nYour answer is: "<<answer4<<".\n";
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	else if (app=="esuper"){
		cout << "\033[2J\033[1;1H";
		cout << "eSuper is not yet available on BestPenguin Disk or the BestPenguin Source application on BestPenguin Point.\n";
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	else if (app=="tour"){
		cout<<"Welcome to BestPenguin Disk!\n";
		cout<<"Please locate your number pad. It should look like this: \n[ ][/][*][-]\n[7][8][9][+]\n[4][5][6][ ]\n[1][2][3][>]\n[0   ][.][ ]\nOn BestPenguin, the 5 key is used as a function key. The 8 key is the up arrow, 6 key is the right arrow, 4 key is left arrow, 2 key is down arrow.\nPress the enter key on the keypad to submit text in text inputs.\nFinally, if you'd like some documentation, go to the appscreen, enter Binocular, and type in documentation. You'll then see the documentation. Tour has ended\n";
		cout<<"Press [5] to end the programme.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	else if (app=="cmdline") {
		cls();
		cout<<"\n-----------\n(C) 2017-2021 the E11 Software Programmes Corporation\nBestPenguin Source\nCommand Line\n";
		cout<<"Hard Disk\n E11\n  Virtual Hard Disks\n   bpd.evhd\n    cmdline.disk.bpaf\n";
		string d;
		cin >> d;
		if (d=="exit"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else if (d=="cls"){
			cls();
		}
		else if (d=="help"){
			cout<<"cls: clear screen, note that this will uninstall the os\nexit: Exit CMDline\nhelp: Help information\nver: BestPenguin Disk version\n";
			cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				mainFunc();
			}
			else {
					cout << "\033[2J\033[1;1H";
					fatalError();
					mainFunc();
			}
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	else if (app == "do"|| app=="perform" || app=="open" || app=="action") {
		cls();
		cout<<"\n-----------\n(C) 2017-2022 the Aeonic Corporation \nIridium \n";
		cout<<"Hard Disk\n Iridium\n  Applications\n   Libraries\n    Applications\n";
		string d;
		cin >> d;
		if (d=="exit"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else if (d=="clear"){
			cls();
			cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				mainFunc();
			}
			else {
					cout << "\033[2J\033[1;1H";
					fatalError();
					mainFunc();
			}
		}
		else if (d=="ls"){
			cls();
			cout << "main.cpp\n" ;
			cout << "Applications\n";
			cout << "|Libraries\n";
			cout << "||Applications\n";
			cout << "||iridium\n||tabulate\n||ultralight\n||basiclib.hpp\n||bpaf.hpp\n||bpdlogin.hpp\n||iridium.hpp\n||libraries.hpp\n||lodepng.c\n||lodepng.h\n||platinum.h\nDocuments\n|usr1\n||documentation.md\n";
		}
		else if (d=="help"){
			cout<<"clear: clear screen, note that this will uninstall the os\nexit: Exit CMDline\nls: list directories\nhelp: Help information\nver: BestPenguin Disk version\n";
			cout<<"Press [5] to end the programme.\n";
			string d;
			cin >> d;
			if (d=="5"){
				cout << "\033[2J\033[1;1H";
				mainFunc();
			}
			else {
					cout << "\033[2J\033[1;1H";
					fatalError();
					mainFunc();
			}
		}
		else {
			cout << "\033[2J\033[1;1H";
			fatalError();
		}
	}
	else if (app=="circle-calculator"){
		cout<<"Find the area of a circle (formula: TAU/2 r^2)\n";
		double tau = 6.28318530718;
		double halfTau = tau/2;
		double radius;
		cout << "Type the radius of the circle below.\n";
		cin >> radius;
		cout << "The computer is finding the area.\n";
		double radSquare = radius * radius;
		double answer = halfTau * radSquare;
		cout << "Area is:" << answer << ".\n";
		cout << "Type 'redo' to restart the programme. Press [5] to exit.\n";
		string redoBox;
		cin >> redoBox;
		if (redoBox == "redo"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else if (redoBox=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout<<"Another error has occured.";
			mainFunc();
		}
		//else {
			//cout << "\033[2J\033[1;1H";
			//cout<<"Invalid.\n";
		//}
		cout<<"Press [5] to exit.\n";
		string d;
		cin >> d;

	}
	else if (app=="extensions"){
		loadBar();
		cout<<"These are some extensions (BETA) for anybody to try.\n";
		sleep(1);
		extensionFind();
		sleep(2);
		loadBar();
		cout << "\033[2J\033[1;1H";
		mainFunc();
	}
	else if (app=="version"){
		cls();
		Table version;
	version.add_row({"BestPenguin", "Disk"});
	version[0][0].format()
		.font_style({FontStyle::bold})
		.font_color(Color::cyan);
	version[0][1].format()
		.font_style({FontStyle::italic})
		.font_color(Color::blue);
	cout << version << endl;
	cout<<"\033[3;01;33mVersion: 2.3.4 PBR (Public Beta Release)\nCopyright (C) and TCW-D 2017-2021 the E11 Corporation\n\033[0m";
		sleep(3);
		loadBar();
		cout << "\033[2J\033[1;1H";
		mainFunc();
	}
	else {
		cout << "\033[2J\033[1;1H";
		cout<<"The app you requested does not exist [yet]. What may have happened:\nYou typed the app name wrong\nYou did not type the app name in all lowercase\nYou entered a space in the name\nYou wrote Expert (Browser) instead of expert.\nThe app you requested is non-existent\nYou typed from right to left\n";
		cout<<"Press [5] to undo the error.\n";
		string d;
		cin >> d;
		if (d=="5"){
			cout << "\033[2J\033[1;1H";
			mainFunc();
		}
		else {
			cout << "\033[2J\033[1;1H";
			cout<<"Another error has occured.";
			mainFunc();
		}
	}
	return true;
}
void nameAsk(){
	cout<<"Are you user 1 or 2? Type just the number.\n";
	int name;
	cin>>name;
	if (name == 1) {
		cout<<"Signing you in...\n";
		cls();
		loadBar();
		cout<<"Welcome, User 1!\n";
		mainFunc();
	}
	/*else if (name == 2) {
		#include "usr2.cpp"
		cout<<"Signing you in...\n";
		cls();
		loadBar();
		cout<<"Welcome, User 2!\n";
		guestFunc();
	}*/
	else {
		fatalError();
		cout << "NONEXISTENT_USER_ENTERED\n";
	}
}