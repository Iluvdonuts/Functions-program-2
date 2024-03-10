// This program will ask the user to input the current price of an item and its prices from one year and two years ago.
// With those inputs the program will calculate the inflation rates for the past year and the year before.
// The output will show the results along with whether the inflation trend is increasing or decreasing.

#include <iostream>
using namespace std;

void getInput(double& currentPrice, double& priceOneYearAgo, double& priceTwoYearsAgo) {
	cout << "Enter the current price of the item: ";
	cin >> currentPrice;
	cout << "Enter the price of the item one year ago: ";
	cin >> priceOneYearAgo;
	cout << "Enter the price of the item two years ago: ";
	cin >> priceTwoYearsAgo;

}

void calculateInflation(double currentPrice, double priceOneYearAgo, double priceTwoYearsAgo, double& inflationRate1, double& inflationRate2) {
	inflationRate1 = (currentPrice - priceOneYearAgo) / priceOneYearAgo;

}

void outputResults(double inflationRate1, double inflationRate2) {
	cout << "Inflation rate for the past year: " << (inflationRate1 > 0 ? "+" : "") << (inflationRate1 * 100) << "%" << endl;
	cout << "Inflation rate for the year before: " << (inflationRate2 > 0 ? "+" : "") << (inflationRate2 * 100) << "%" << endl;

	if (inflationRate1 > inflationRate2) {
		cout << "Inflation trend: Increasing" << endl;
	}
	  else if (inflationRate1 < inflationRate2) {
		cout << "Inflation trend: Decreasing" << endl;
	} else {
		cout << "Inflation trend: Stable" << endl;

	}
	
}

int main() {
	
	double currentPrice, priceOneYearAgo, priceTwoYearsAgo;
	double inflationRate1, inflationRate2;

	getInput(currentPrice, priceOneYearAgo, priceTwoYearsAgo);
	calculateInflation(currentPrice, priceOneYearAgo, priceTwoYearsAgo, inflationRate1, inflationRate2);
	outputResults(inflationRate1, inflationRate2);

	return 0;

}

