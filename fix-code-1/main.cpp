#include <iostream>
#include <string>
using namespace std;

int main() {
  float rain_this_year = 321;
  float rain_december = 67;
  string yearly_rain_less_december = rain_this_year - rain_december;
  cout << "The amount of rain from January to November was: " << yearly_rain_less_december << endl;
}
