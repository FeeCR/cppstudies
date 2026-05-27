#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    msg.push_back("This is a simple C++ program.");

    for (const string& word : msg)
    {
        cout << word << " ";
    }

    cin.get(); // Wait for user input before closing the console

    cout << endl;
}