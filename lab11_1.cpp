#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    cout << "Press Enter 3 times to reveal your future." << endl;
    
    cin.get(); // กด Enter ครั้งที่ 1
    cin.get(); // กด Enter ครั้งที่ 2
    cin.get(); // กด Enter ครั้งที่ 3

  
    srand(static_cast<unsigned int>(time(0)));

  
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    int randomIndex = rand() % 9; // เลือกค่าแบบสุ่มจาก 0 ถึง 8


    cout << "You will get " << grades[randomIndex] << " in this 261102." << endl;

    return 0;
}
