#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayTitle();

int main() {
	
	double gpuclkspeed = 0.0, cpuclkspeed = 0.0, perfscore = 0.0, highscore = 0.0, lowscore = 0.0, multiplierValue = 0.0;
	int res = 0, compCount = 0, count = 0, cores = 0;
	string resolution, quality;
	
	cout << "Please enter number of computers to be tested: ";
	cin >> compCount;
	cout << "\n";
	
	while (compCount < 0) {
		
		cout << "\nNumber of computers to be tested must be greater than 0.\nPlease Re-enter number of computers to be tested: ";
		cin >> compCount;
		cout << "\n";
		
	}
	
	displayTitle();
	for (count = 0; count < compCount; count++) {
	
	cout << "\n\nEnter GPU clock speed in Megahertz: ";
	cin >> gpuclkspeed;
	
	while (gpuclkspeed < 800 || gpuclkspeed > 2000) {
		
		cout << "\nError. GPU clock speed cannot be less than 800 Mhz or greater than 2000 Mhz.\nPlease re-enter GPU clock speed: ";
		cin >> gpuclkspeed;
		
	}
	
	cout << "\nEnter CPU clock speed in Megahertz: ";
	cin >> cpuclkspeed;
	
	while (cpuclkspeed < 1000 || cpuclkspeed > 5500) {
		
		cout << "\nError. CPU clock speed must cannot be less than 1000Mhz or greater than 5500 Mhz.\nPlease re-enter CPU clock speed: ";
		cin >> cpuclkspeed;
		
	}
	
	cout << "\nEnter number of processor cores: ";
	cin >> cores;
	
	while (cores < 1 || cores > 16) {
		
		cout << "\nError. Number of cores cannot be less than 1 or greater than 16.\nPlease re-enter number of cores: ";
		cin >> cores;
		
	}
	
}


}
void displayTitle() {
	
	string title = "\nComputer Hardware Graphics Quality Recommendation Tool\n";
	
	cout << title;
	
}
