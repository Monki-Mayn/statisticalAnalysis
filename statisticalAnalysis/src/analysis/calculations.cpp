#include "calculations.h"

double findSum(double dataValues[], int sizeDataSet)
{
	double sum{ 0 };
	for (int i = 0; i < sizeDataSet; i++)
		sum += dataValues[i];

	return sum;
}

void findMinMax(double dataValues[], int sizeDataSet, double& min, double& max)
{
	min = dataValues[0];
	for (int i = 0; i < sizeDataSet; i++)
		if (dataValues[i] < min)
			min = dataValues[i];

	max = dataValues[0];
	for (int i = 0; i < sizeDataSet; i++)
		if (dataValues[i] > max)
			max = dataValues[i];
}