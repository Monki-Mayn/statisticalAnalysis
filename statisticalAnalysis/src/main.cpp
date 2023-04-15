#include "analysis\sortAlgorithm.h"
#include "analysis\calculations.h"
#include <iostream>

int main()
{
	std::cout << "How many values are in your data set?\n";
	int sizeDataSet{};
	std::cin >> sizeDataSet;

	std::cout << "\nPlease enter the values in your data set:\n";
	double* dataValues = new double[sizeDataSet];
	for (int i = 0; i < sizeDataSet; i++)
		std::cin >> dataValues[i];

	double sum{};
	double min{};
	double max{};
	sum = findSum(dataValues, sizeDataSet);

	findMinMax(dataValues, sizeDataSet, min, max);

	std::cout << "\nHere is your sorted data set:\n\n";
	sort(dataValues, sizeDataSet);
	for (int i = 0; i < sizeDataSet; i++)
		std::cout << dataValues[i] << " ";

	std::cout << '\n';
	std::cout << "\nSum:              " << sum << '\n';
	std::cout << "\nMinimum value:    " << min << '\n';
	std::cout << "\nMaximum value:    " << max << '\n';
	std::cout << "\nRange:            " << max - min << '\n';
	std::cout << "\nMean:             " << sum / sizeDataSet << '\n';

	std::cin.get();
	std::cin.get();

	delete[] dataValues;

	return 0;
}