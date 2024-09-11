/*#include "Applications/Libraries/libraries.hpp"


int main() {
	cout << "\033[2J\033[2;1H";
	Table login;
	login.add_row({"Aeonic", "Iridium", "OS"});
	login[0][0].format()
    .font_style({FontStyle::bold})
		.font_color(Color::cyan);
	login[0][1].format()
    .font_style({FontStyle::italic})
		.font_color(Color::blue);
	login[0][2].format()
    .font_style({FontStyle::italic})
		.font_color(Color::green);
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
}*/
/*#include <istream>
#include <ostream>
#include <string>
#include <ctime>
#include <math.h>
#include <cmath>
#include <unistd.h>
#include <limits.h>
#include <fstream>
#include <ctype.h>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include "Applications/Libraries/tabulate/tabulate.hpp"
#include <cstdlib>
#include <filesystem>*/
//#include "browser.h"
/*NOTE TO SELF: INSTALL WEBKIT GTK!*/
/*int TITLE_LENGTH = 20;
int LIMIT_TAB = 8;
ustring app_name = "DBT Browser";*/
/*using namespace std;
using namespace tabulate;
namespace fs = std::filesystem;*/

//using std::filesystem::create_directory;


/*int browser( int argc, char **argv) {
	try {
		// get path contains exe file
		char result[PATH_MAX];
		ssize_t count = readlink("/proc/self/exe", result, PATH_MAX);
		string exe_path = string(result, (count > 0) ? count : 0);
		exe_path = fs::path(exe_path).parent_path().string();
		//~ cout << "exe_path: " << exe_path << endl;
		
		Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "dbt.tbrowser");
		Browser browser(exe_path);
		
		app->run(browser);
	}
	catch(exception const& e) {
		//~ cerr << e.what() << endl;
		
		std::ofstream log("error.txt", std::ios_base::out | std::ios_base::app);
		log << e.what() << std::endl;
	}
}*/