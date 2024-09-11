#include "libraries.h"


int main() {
	cout << "\033[2J\033[2;1H";
	Table login;
	login.add_row({"Aeonic", "Iridium", "OS"});
	login[0][0].format()
    .font_style({FontStyle::bold})
		.font_color(Color::cyan)
		.font_align(FontAlign::center);
	login[0][1].format()
    .font_style({FontStyle::italic})
		.font_color(Color::blue)
		.font_align(FontAlign::center);
	login[0][2].format()
    .font_style({FontStyle::italic})
		.font_color(Color::green)
		.font_align(FontAlign::center);
	cout << login << endl;
	sleep(3);
	cls();
	
	string version = "Welcome to Iridium OS!\n\n\033[3;01;33mVersion: 2.34 (build E2BD34B)";
int x=0;
while ( version[x] != '\0')
{
	cout << version[x];
	sleep(1);
	x++;
};
	cout<<"\nCopyright (C) and TCW-D 2017-2022 the Aeonic Corporation, previously E11\n\033[0m";
	nameAsk();
	mainFunc();
	cout<<"\a";
}