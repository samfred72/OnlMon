#include "OnlMonDBVar.h"

#include <cmath>
#include <iostream>

OnlMonDBVar::OnlMonDBVar()
{
  for (float & i : val)
  {
    i = NAN;
  }
  return;
}

int OnlMonDBVar::SetVar(const float rval[3])
{
  updated = 1;
  for (short int i = 0; i < 3; i++)
  {
    val[i] = rval[i];
  }
  return 0;
}

void OnlMonDBVar::Print() const
{
  std::cout << "Value: " << val[0] << ", Error: " << val[1]
            << ", Quality: " << val[2]
            << ", updated: " << updated << std::endl;
  return;
}
