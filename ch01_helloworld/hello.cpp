#include <iostream>
#include <thread>

void hello() {
	int cnt = 10000;
	while(cnt--)
		std::cout << "hello concurrency world!" << std::endl;
}

int main() {
	std::thread t(hello);
	t.join();

	return 0;
}