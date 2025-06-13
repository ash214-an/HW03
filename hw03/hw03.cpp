#include <iostream>
using namespace std;

template <typename T>
class SimpleVector {
private:
	T* data;
	int currentSize;
	int currentCapacity;


public:

	SimpleVector() {
		currentCapacity = 10;
		data = new T[currentCapacity];
		currentSize = 0;
	}


	SimpleVector(int capacity) {
		currentCapacity = capacity;
		data = new T[currentCapacity];
		currentSize = 0;
	}

	~SimpleVector() {
		delete[] data;
	}


	void push_back(const T& value) {
		if (currentSize < currentCapacity) {
			data[currentSize++] = value;
		}
	}


	void pop_back() {
		if (currentSize > 0) {
			--currentSize;
		}
	}


	int size() const {
		return currentSize;
	}


	int capacity() const {
		return currentCapacity;
	}
};


int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	SimpleVector<int> vec;
	vec.push_back(10);
}
