#include <iostream?
int fatalError() {
	sleep(3);
	cout << "\033[2J\033[1;1H";
	cout << "Oh oh. :-{ A fatal error has occured to BestPenguin Disk.\nIf you call Aeonic's amazing Tech Support, provide the above below error information.\nnError code: ";
	return false;
}