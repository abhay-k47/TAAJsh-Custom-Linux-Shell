#ifndef HISTORY_HPP
#define HISTORY_HPP
#include <deque>
#include <fstream>
#include <iostream>
#define CACHE_SIZE 1000

enum DIREC
{
  UP,
  DOWN
};

class History
{
  std::deque<std::string> arr;
  int index;

public:
  History();
  ~History();
  void addHistory(const std::string __str);
  std::string getHistory(DIREC dir);
  void resetHistory();
  void updateHistory();
};
#endif
