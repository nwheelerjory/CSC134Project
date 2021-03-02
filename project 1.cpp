#include <iostream>
using namespace std;

int main() {
	
	double gpuclkspeed = 0, cpuclkspeed = 0, cores = 0, perfscore = 0;
	int res = 0;
	
	cout << "Enter GPU clock speed in Megahertz: ";
	cin >> gpuclkspeed;
	
	cout << "Enter CPU clock speed in Megahertz: ";
	cin >> cpuclkspeed;
	
	cout << "Enter number of processor cores: ";
	cin >> cores;
	
	cout << "\nSelect monitor resolution:\n";
	cout << "1. 1280 x 720\n";
	cout << "2. 1920 x 1080\n";
	cout << "3. 2560 x 1440\n";
	cout << "4. 3840 x 2160\n";
	cin >> res;
	
	if (res == 1) {
		
		perfscore = ((5.0 * gpuclkspeed) + (cores * cpuclkspeed)) * 1;
		
	}
	
	else if (res == 2) {
		
		perfscore = ((5.0 * gpuclkspeed) + (cores * cpuclkspeed)) * .75;
		
	}
	
	else if (res == 3) {
		
		perfscore = ((5.0 * gpuclkspeed) + (cores * cpuclkspeed)) * .55;
		
	}
	
	else if (res == 4) {
		
		perfscore = ((5.0 * gpuclkspeed) + (cores * cpuclkspeed)) * .35;
		
	}
	
	else{
		
		cout << "Error\n";
		
	}
	
	cout << "\nRecommended Graphics Quality:\n";
	
	if (perfscore <= 11000) {
		
		cout << "Unplayable\n";
		
	}
	
	else if (perfscore > 11000 && perfscore <= 13000) {
		
		cout << "Low\n";
		
	}
	
	else if (perfscore > 13000 && perfscore <= 15000) {
		
		cout << "Medium\n";
		
	}
	
	else if (perfscore > 15000 && perfscore <= 17000) {
		
		cout << "High\n";
		
	}
	
	else if (perfscore > 17000){
		
		cout << "Ultra\n";
		
	}
	
	else{
		
		cout << "Error";
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
