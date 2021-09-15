// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#include <task_3/date.h>
#include <task_3/participant.h>
#include <task_3/performance.h>
#include <task_3/competition.h>

#include <iostream>

int main()
{
  Date date_a(28, 2, 2020);
  Date date_b(1, 0, 0);
  std::cout << "Year is leap, has 29 of Fabruary: " << date_a << std::endl;
  std::cout << "Just date with one day: " << date_b << std::endl;
  std::cout << "Sum is " << (date_a + date_b) << std::endl;
  std::cout << std::endl;

  date_a.SetYear(2021);
  std::cout << "Set first date with no leap year: " << date_a << std::endl;
  std::cout << "Now sum is " << (date_a + date_b) << std::endl;
  std::cout << std::endl;

  Performance per_a;
  Performance per_b;
  std::cout << "There is no diffrence between two performances: " << std::endl;
  std::cout << "First performance: " << per_a << std::endl;
  std::cout << "Second performance: " << per_b << std::endl;
  std::cout << "per_a > per_b: " << (per_a > per_b) << std::endl;
  std::cout << "per_a < per_b: " << (per_a > per_b) << std::endl; // Compared by result
  std::cout << std::endl;

  Participant par_a;
  Participant par_b;
  par_a.SetName("Oleh");
  std::cout << "Diffrence between two participants is name: " << std::endl;
  std::cout << "First participant: " << par_a << std::endl;
  std::cout << "Second participant: " << par_b << std::endl;
  std::cout << "par_a == par_b: " << (par_a == par_b) << std::endl;
  std::cout << "par_a != par_b: " << (par_a != par_b) << std::endl;
  std::cout << std::endl;

  Competition competition;
  competition.AddPerformance(per_a);
  per_a.SetResult(101);
  competition.AddPerformance(per_a);
  per_a.SetResult(102);
  competition.AddPerformance(per_a);
  std::cout << "There are 3 diffrent performances in Competition: " << std::endl;
  std::cout << competition << std::endl;
  std::cout << "competition[1] = " << competition[1] << std::endl;
  return 0;
}