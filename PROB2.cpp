#include <iostream>
using namespace std;

int main()
{
	int i, j, s, temp, numlist[500000];
	cout << "This program uses selection sorting..." << endl;
	cout << endl;
	
	cout << "Enter array size: ";
	cin >> s;
	
	cout << "Enter the " << s << " elements (integers only): " << endl;
	for(i = 0; i < s; i++)
	cin >> numlist[i];
	
	cout << endl;
	
	cout << "Array elements: " << endl;
	for(i = 0; i < s; i++)
	cout << numlist[i] << " ";
	
	cout << endl;
	
	for(i = 0; i < s; i++)
	{
		for(j = i + 1; j < s; j++)
		{
			if(numlist[i] > numlist[j])
			{
				temp = numlist[i];
				numlist[i] = numlist[j];
				numlist[j] = temp;
			}
		}
	}
	
	cout << endl; 
	cout << "Sorted array: " << endl;
	for(i = 0; i < s; i++)
	cout << numlist[i] << " ";
	
	return 0;
}
