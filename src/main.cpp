#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <test_framework.hpp>

int main(int argc, char** argv)
{
	std::thread mesosThread(testFramework, argc, argv);
	std::cout << "main, mesos and http now execute concurrently...\n";

	// synchronize threads:
	mesosThread.join();               // pauses until first finishes

	std::cout << "Thread completed.\n";
	std::getchar();
	return 0;
}

