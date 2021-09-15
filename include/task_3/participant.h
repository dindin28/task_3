#ifndef _TASK_3_INCLUDE_TASK_3_PARTICIPANT_H_
#define _TASK_3_INCLUDE_TASK_3_PARTICIPANT_H_

#include <iostream>

#include <task_3/date.h>

class Participant
{
public:
  Participant();
  Participant(const char *name, const char *surname, const Date &date);
  Participant(const Participant &copy);
  Participant &operator=(const Participant &copy);
  ~Participant();

  //Getters
  const char *GetName() const;
  const char *GetSurname() const;
  Date GetDate() const;

  //Selectors
  Participant &SetName(const char *name);
  Participant &SetSurname(const char *surname);
  Participant &SetDate(const Date &date);

  void Print();

  friend std::ostream &operator<<(std::ostream &out, const Participant &obj);
  friend std::istream &operator>>(std::istream &in, Participant &obj);

  bool operator==(const Participant &obj);
  bool operator!=(const Participant &obj);

private:
  char *name_, *surname_;
  Date date_;
}; //Class (Participant)

#endif //Header Guard