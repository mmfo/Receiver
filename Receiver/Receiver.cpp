#include <iostream>
#include <vector>
#include "../../COMMON/IDD.h"
#include "../../COMMON/class/Manager.h"
#include "../../COMMON/class/Antenna.h"
#include "../../COMMON/class/Modem.h"
using namespace std;
int main()
{
	std::cout << "Hello World!\n";
	vector<ControllerType> controllers = {
		CONTROLLER_TYPE_ANTENNA,
		CONTROLLER_TYPE_MODEM
	};
	Antenna antenna(RECEIVER);
	Modem modem(RECEIVER);
	Manager manager(controllers, RECEIVER);

	//wait forever
	while (TRUE)
		this_thread::sleep_for(chrono::milliseconds(1000));
	return 0;
}