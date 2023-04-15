#include "sortAlgorithm.h"
#include <iostream>

void swap(double dataValues[], int i, int j)
{
	double temp = dataValues[i];
	dataValues[i] = dataValues[j];
	dataValues[j] = temp;

}

void sort(double dataValues[], int sizeDataSet)
{
	for (int pass = 0; pass < sizeDataSet; pass++)
		for (int i = 1; i < sizeDataSet; i++) {
			if (dataValues[i] < dataValues[i - 1])
				swap(dataValues, i, i - 1);
		}
}