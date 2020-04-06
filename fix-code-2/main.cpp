#include <iostream>
#include <string>
using namespace std;

int main() {
  float cost_of_jeans = 39.99;
  int num_jeans = 10;
  float jeans_value = cost_of_jeans * num_jeans;

  float cost_of_shorts = 21.5;
  int num_shorts = 12;
  float shorts_value = cost_oF_shorts * num_shorts;

  float cost_of_shirts = 10.0;
  int num_shirts = 22;
  float shirts_value = cost_of_shirts * num_shirts;

  float total_clothes_value = jeans_value + shorts_value + shirts_value;
  cout << "Total clothes value is " << total_clothes_value << endl;
}
