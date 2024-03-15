#include "history.hpp"
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
using namespace std;

History::History()
    : index(-1)
{
  char* home = getenv("HOME");

  if (home != nullptr)
  {
    ifstream file(string(home) + "/.taajsh_history");
    if (!file.is_open() && errno != ENOENT)
    {
      perror("can't open history file");
    }
    else
    {
      string line;
      while (getline(file, line, '\n'))
      {
        arr.push_back(line);
      }
      file.close();
    }
  }
}

History::~History()
{
  arr.clear();
}

void History::addHistory(const std::string __str)
{
  if (arr.size() == CACHE_SIZE)
    arr.pop_back();
  arr.push_front(__str);
}

string History::getHistory(DIREC dir)
{
  string temp;

  if (dir == UP)
  {
    if (index < static_cast<int>(arr.size() - 1))
      temp = arr[++index];
    else
      temp = arr[index];
  }
  else if (dir == DOWN)
  {
    if (index > 0)
      temp = arr[--index];
    else
    {
      index = -1;
      temp = "";
    }
  }
  return temp;
}

void History::resetHistory()
{
  index = -1;
}

void History::updateHistory()
{
  char* home = getenv("HOME");

  if (home != nullptr)
  {
    ofstream file(string(home) + "/.taajsh_history");
    if (!file.is_open())
    {
      perror("can't open history file");
    }
    else
    {
      for (auto line : arr)
      {
        file << line << "\n";
      }

      file.close();
    }
  }
}
