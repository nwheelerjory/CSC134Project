#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Computer hardware Graphics Quality Recommendation Tool
int main() {
	
	//Declare all variables.
	double gpuclkspeed = 0, cpuclkspeed = 0, cores = 0, perfscore = 0;
	int res = 0;
	string resolution, quality, title = "Computer Hardware Graphics Quality Recommendation Tool";
	
	//Collect user input
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
	
	//If statement conating the main arithmetic for the program used to determine performance score.
	if (res == 1) {
		
		resolution = "1280 x 720";
		perfscore = ((5.0 * gpuclkspeed) + (cores * cpuclkspeed)) * 1;
		
	}
	
	else if (res == 2) {
		
		resolution = "1920 x 1080";
		perfscore = ((5.0 * gpuclkspeed) + (cores * cpuclkspeed)) * .75;
		
	}
	
	else if (res == 3) {
		
		resolution = "2560 x 1440";
		perfscore = ((5.0 * gpuclkspeed) + (cores * cpuclkspeed)) * .55;
		
	}
	
	else if (res == 4) {
		
		resolution = "3840 x 2160";
		perfscore = ((5.0 * gpuclkspeed) + (cores * cpuclkspeed)) * .35;
		
	}
	
	else{
		
		cout << "Error\n";
		
	}
	
	//if staements used to assign a quality score based on the determined performance score.
	if (perfscore <= 11000) {
		
		quality = "Unplayable\n";
		
	}
	
	else if (perfscore > 11000 && perfscore <= 13000) {
		
		quality = "Low\n";
		
	}
	
	else if (perfscore > 13000 && perfscore <= 15000) {
		
		quality = "Medium\n";
		
	}
	
	else if (perfscore > 15000 && perfscore <= 17000) {
		
		quality = "High\n";
		
	}
	
	else if (perfscore > 17000){
		
		quality = "Ultra\n";
		
	}
	
	else{
		
		cout << "Error";
		
	}
	
	//Program output
	cout <<"\n\n" << title;
	cout << "\n\nGPU clock speed: " << gpuclkspeed << "MHz\n";
	cout << "CPU clock speed: " << cpuclkspeed << "MHz\n";
	cout << "Number of cores: " << cores;
	cout << "\nMonitor Resolution: " << resolution;
	cout << setprecision(2) << fixed << showpoint;
	cout << "\nPerformance Score: " << perfscore;
	cout << "\nRecommended Graphics Qaulity: " << quality;
	
	return 0;	
}
