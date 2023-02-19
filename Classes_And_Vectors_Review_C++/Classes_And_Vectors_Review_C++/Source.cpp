#include <iostream>
#include <vector>
using namespace std;

class Vehicle
{
public:
	Vehicle(int);
	int getModel(); int getMileage(){ return mileage; }
	int getNumOfVehicles(){ return numOfVehicles; }
private:
	int model, mileage;
	static int numOfVehicles;
};

inline void displayVehicle(Vehicle&);

int Vehicle::numOfVehicles = 0;

int main()
{
	Vehicle myCar(2016), myBike(2012);
	vector<Vehicle> myFleet;
	displayVehicle(myCar);
	myFleet.push_back(myCar); myFleet.push_back(myBike);
	cout << endl << "# of items in vector: " << myFleet.size() << endl;
	//cout << "myCar: " << myCar.getModel() << ", " << myCar.getMileage() << endl;
	return 0;
}

inline void displayVehicle(Vehicle& v){ cout << "Model: " << v.getModel() << ", mileage: " << v.getMileage() << ", totalNumOfVehicles: " << v.getNumOfVehicles(); }

Vehicle::Vehicle(int year) : model(year), mileage(0){ numOfVehicles++; }
int Vehicle::getModel(){ return model; }
//int Vehicle::getMileage(){ return mileage; }