// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main()
{
  // Insert the height of the person
  int height;
  std::cout << "Please enter the person's height in inches: ";
  std::cin >> height;

  //calculate the height in feet and inches.
  int feet = height / 12;
  int inches = height % 12;

  std::cout << "That person is " << feet << "\'" << inches << "\"\n";

  return 0;
}
