#include <iostream>
#include <float.h>
using namespace std;

int main(int argc, char **argv)
{
	int n;
	double min=DBL_MAX,max=-DBL_MAX;
	cin >> n;
	double m[n];
	for (int i=0;i<n;i++){
		cin >> m[i];
		if (m[i]<min) min=m[i];
		if (m[i]>max) max=m[i];
	}
	for (int i=0;i<n;i++){
		cout << (m[i]-min)/(max-min) << " ";
	}
	
}