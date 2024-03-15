#ifndef PIPELINE_HPP
#define PIPELINE_HPP
#include "command.hpp"
#include <iostream>
#include <string>
#include <vector>

class Pipeline
{
public:
  std::string command;
  std::vector<Command*> components;
  bool isBackgroundProcess;
  size_t n_alive;
  pid_t group_pid;
  Pipeline(const std::string& __str);
  ~Pipeline();
  void parse();
  void execute();
};

#endif
