//Dean Orchard. 100589745
//October 29th, 2015.
//This function sorts the elements of array a in increasing order when order is true and in decreasing order when order is false.
#include <iostream> //Loads libraries utilized within this program.
using namespace std; 

//_______________________________________//

void sort(int a [], int size, bool order) //Sorts the elements of "a" based upon bool being "true" or "false".
{
int temporary1; //Declares a temporary integer.

if (order == true) //When order is equal to true this triggers the ascending order sort.
	{
	for (int z = 0; z < (size - 1); z++) //Sorts the array elements in ascending order.
		{
		for (int i = 0; i < (size - 1); i++)
			{
			if (a [i] > a [i + 1]) 
			{
			temporary1 = a[i]; //This copies the value of "int temporary1" into "a[i]"
			a[i] = a[i + 1]; //This takes the value of "a[i]" and increments the value of "i" by one. 	
			a[i + 1] = temporary1; 
			}
		}
	}
}

else if (order == false) //When order is equal to false this triggers the descending order sort.
	{
		for (int p = 0; p < (size - 1); p++) 
		{
			for (int n = 0; n < (size - 1); n++) //Sorts the array elements in descending order.
			{
				if (a[n] < a[n + 1])
				{
					temporary1 = a[n]; //For an explanation please refer to the previous variable swap block.
					a[n] = a[n + 1]; 
					a[n + 1] = temporary1;
				}
			}
		}
	}
}

//_______________________________________//

void main()
{
	const int size = 4; //Declares a integer to the value of four constantly.
	int a[] = { 1, 4, 8, 3 }; //Declares an array of intgers.
	bool order = true; //When boolean is equal to false trigger the below function.
	sort(a, size, order);

	for (int b = 0; b < size; b++) {
		cout << a[b] << " ";
	}

}