#include <stdio.h>
#include <iostream>
using namespace std;

void norm(double *mas, double min, double max, int size){      //функция нормировки
	for (int i = 0;i < size;i++){
		mas[i] = (mas[i]-min)/(max-min);
	}
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
	norm(mas,min,max,n);
	for(int i=0;i<n;i++){
		cout << mas[i] << " ";
	}
	return 0;
}
