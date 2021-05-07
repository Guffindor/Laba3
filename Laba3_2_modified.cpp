#include <stdio.h>
#include <iostream>
using namespace std;

double *norm(double *mas, double min, double max, int size){      //функция нормировки
	double *new_mas = new double[size];
	for (int i = 0;i < size;i++){
		new_mas[i] = (mas[i]-min)/(max-min);
	}
	return new_mas;
}

int main(int argc, char **argv)
{
	int n;    //Длина массива
	double min,max,number; 
	cin >> n;
	double mas[n];
	mas[0]=n;
	max=n;
	min=n;
	for(int i=0;i<n;i++){
		cin >> number;
		if (number > max) max = number; 
		if (number < min) min = number;
		mas[i]=number;
	}
	double *new_mas = norm(mas,min,max,n);
	for(int i=0;i<n;i++){
		cout << new_mas[i] << " ";
	}
	delete[] new_mas;
	return 0;
}
