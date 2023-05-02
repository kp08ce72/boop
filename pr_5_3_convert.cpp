#include<iostream>
using namespace std;

class DistanceConverter {
  private:
    double centimeters;

  public:
    DistanceConverter(double c) {
      centimeters = c;
    }

    void convert() {
      double inches = centimeters / 2.54;
      double feet = inches / 12;
      double meters = centimeters / 100;
      double kilometers = meters / 1000;

      cout << "Inches: " << inches << endl;
      cout << "Feet: " << feet << endl;
      cout << "Meters: " << meters << endl;
      cout << "Kilometers: " << kilometers << endl;
    }
};

int main() {
  double cm;
  cout << "Enter distance in centimeters: ";
  cin >> cm;

  DistanceConverter dc(cm);
  dc.convert();

  return 0;
}