#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>

#define MAX_NUM 20

std::mutex mtx;
std::condition_variable cv;
bool isEvenTurn = false; // false for odd, true for even

void printNumbers(bool isEven) {
    std::cout << std::endl;
}

int main() {
    std::thread t1(printNumbers, false); // Odd numbers
    std::thread t2(printNumbers, true);  // Even numbers

    t1.join();
    t2.join();

    return 0;
}