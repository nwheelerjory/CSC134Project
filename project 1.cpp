#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Computer hardware Graphics Quality Recommendation Tool
int main() {
	
	//Declare all variables.
	double gpuclkspeed = 0, cpuclkspeed = 0, cores = 0, perfscore = 0, highscore = 0, lowscore = 0;
	int res = 0, compCount = 0, count = 0;
	string resolution, quality, title = "Computer Hardware Graphics Quality Recommendation Tool";
	
	cout << "Please enter number of computers to be tested: ";
	cin >> compCount;
	
	while (compCount < 0) {
		
		cout << "\nNumber of computers to be tested must be greater than 0.\nPlease Re-enter number of computers to be tested: ";
		cin >> compCount;
	}
	
	cout << "\n\n" << title;
	
	for (count = 0; count < compCount; count++) {
	
	//Collect user input
	cout << "\n\n\nEnter GPU clock speed in Megahertz: ";
	cin >> gpuclkspeed;
	
	while (gpuclkspeed < 800 || gpuclkspeed > 2000) {
		
		cout << "\nError. GPU clock speed cannot be less than 800 Mhz or greater than 2000 Mhz.\nPlease re-enter GPU clock speed: ";
		cin >> gpuclkspeed;
		
	}
	
	cout << "Enter CPU clock speed in Megahertz: ";
	cin >> cpuclkspeed;
	
	while (cpuclkspeed < 1000 || cpuclkspeed > 5500) {
		
		cout << "\nError. CPU clock speed must cannot be less than 1000Mhz or greater than 5500 Mhz.\nPlease re-enter CPU clock speed: ";
		cin >> cpuclkspeed;
		
	}
	
	cout << "Enter number of processor cores: ";
	cin >> cores;
	
	while (cores < 1 || cores > 16) {
		
		cout << "\nError. Number of cores cannot be less than 1 or greater than 16.\nPlease re-enter number of cores: ";
		cin >> cores;
		
	}
	
	cout << "\nSelect monitor resolution:\n";
	cout << "1. 1280 x 720\n";
	cout << "2. 1920 x 1080\n";
	cout << "3. 2560 x 1440\n";
	cout << "4. 3840 x 2160\n";
	cin >> res;
	
	while (res < 1 || res > 4) {
		
		cout << "\nError. Resolution selected must be one of the resoltuions displayed in the menu.\nPlease re-select: ";
		cout << "\n\nSelect monitor resolution:\n";
		cout << "1. 1280 x 720\n";
		cout << "2. 1920 x 1080\n";
		cout << "3. 2560 x 1440\n";
		cout << "4. 3840 x 2160\n";
		cin >> res;
		
	}
	
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
	cout << "\n\nGPU clock speed: " << gpuclkspeed << "MHz\n";
	cout << "CPU clock speed: " << cpuclkspeed << "MHz\n";
	cout << "Number of cores: " << cores;
	cout << "\nMonitor Resolution: " << resolution;
	cout << setprecision(2) << fixed << showpoint;
	cout << "\nPerformance Score: " << perfscore;
	cout << "\nRecommended Graphics Qaulity: " << quality;
	
	if(highscore<perfscore) {
	
        highscore=perfscore;
        
	}
	
    if(perfscore<lowscore) {
	
        lowscore=perfscore;
        
	}
	
    if(count==0) {
    	
        lowscore=perfscore;
        
	}
	
	perfscore=0;
	
	}
	
	cout << "The highest performance score was: " << highscore << endl;
	cout << "The lowest performance score was: " << lowscore << endl;
	
	

	
	
	

	
	return 0;	
}
