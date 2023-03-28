// OS_11.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <fstream>
#include <windows.h>
#include <mutex>

using namespace std;

std::mutex lock1, lock2;

void writeFunc1()
{
	std::lock(lock1, lock2);

	cout << "Entering Write Func 1." << endl;
	ofstream myfile;
	myfile.open("os_thread.txt", ios::app);
	myfile << "operating system\n";
	myfile.close();

	lock1.unlock();
	lock2.unlock();

	Sleep(1);
}

void writeFunc2()
{
	std::lock(lock1, lock2);

	cout << "Entering Write Func 2." << endl;
	ofstream myfile;
	myfile.open("os_thread.txt", ios::app);
	myfile << "OPERATING SYSTEM.\n";
	myfile.close();
	Sleep(1);

	lock1.unlock();
	lock2.unlock();
}

int main()
{
	std::thread first(writeFunc1);     // spawn new thread that calls writeFunc1()
	std::thread second(writeFunc2);  // spawn new thread that calls writeFunc2()

	// synchronize if threads
	first.join();                // pauses until first finishes
	second.join();               // pauses until second finishes

	std::cout << "Both Threads Have Concluded Successfully. \n";

    return 0;
}

