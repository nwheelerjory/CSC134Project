#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayTitle();
string getResolutionString();
double getMultiplierValue(string);
double calculatePerformanceScore(double, double, double, int);

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
	
	resolution = getResolutionString();
	multiplierValue = getMultiplierValue(resolution);
	perfscore = calculatePerformanceScore(multiplierValue, gpuclkspeed,cpuclkspeed,cores);
	
}


}
void displayTitle() {
	
	string title = "\nComputer Hardware Graphics Quality Recommendation Tool\n";
	
	cout << title;
	
}

string getResolutionString() {
	
	int res;
	string resolution;
	
	cout << "\nSelect monitor resolution:\n";
	cout << "\t1. 1280 x 720\n";
	cout << "\t2. 1920 x 1080\n";
	cout << "\t3. 2560 x 1440\n";
	cout << "\t4. 3840 x 2160\n";
	cin >> res;
	
	while (res < 1 || res > 4) {
		
		cout << "\nError. Resolution selected must be one of the resoltuions displayed in the menu.\nPlease re-select: ";
		cout << "\n\nSelect monitor resolution:\n";
		cout << "\t1. 1280 x 720\n";
		cout << "\t2. 1920 x 1080\n";
		cout << "\t3. 2560 x 1440\n";
		cout << "\t4. 3840 x 2160\n";
		cin >> res;
		
	}
	
	if (res == 1) {
		
		resolution = "1280 x 720";
		
	}
	
	else if (res == 2) {
		
		resolution = "1920 x 1080";
		
	}
	
	else if (res == 3) {
		
		resolution = "2560 x 1440";
		
	}
	
	else if (res == 4) {
		
		resolution = "3840 x 2160";
		
	}
	
	else{
		
		cout << "Error\n";
		
	}
	
	return resolution;
	
}

double getMultiplierValue(string resolution) {
		
		double multiplier; 
		
	if (resolution == "1280 x 720") {
		
		multiplier =  1.00;
		
	}
	
	else if (resolution == "1920 x 1080") {
		
		multiplier = .75;
		
	}
	
	else if (resolution == "2560 x 1440") {
		
		multiplier = .55;
		
	}
	
	else if (resolution == "3840 x 2160") {
		
		multiplier = .35;
		
	}
	
	else{
		
		cout << "Error\n";
		
	}
	
	return multiplier; 
	
}

double calculatePerformanceScore(double multiplierValue, double gpuclkspeed, double cpuclkspeed, int cores) {
	
	double perfscore;
	
	perfscore = ((5.0 * gpuclkspeed) + (cores * cpuclkspeed)) * multiplierValue;
	
	return perfscore;
	
}


