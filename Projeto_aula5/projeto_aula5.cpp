//* Two threads cooking soup
///* Pavic MUltithreading C++ - 2022
#include <iostream>
#include <thread>

//#include <chrono>

 // using namespace std; // removed std::

 void Lorena() {
	 printf("Lorena thread \n");
 }

void call_from_thread() {
	std::cout << "Hello, World from Thread" << std::endl;
}
// Code Main

int main() {
	
	//Launch a thread

	std::thread t1(call_from_thread);
	std::thread lorena(Lorena);
	// thread t2(call_from_thread);
	// thread t3(call_from_thread);

	std::cout << "Hello, World from CPU" << std::endl;

		lorena.join();
		t1.join();

	//t1.join();
	//t2.join();
	//t3.join();

	std::cout << "Hello, World from CPU - after Join " << std::endl;

	return 0;
}