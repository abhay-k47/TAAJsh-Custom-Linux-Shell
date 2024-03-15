The purpose of this project is to implement an application program that will run as a shell on top of the Linux kernel. The shell will accept user commands (one line at a time), and execute the same.

## Features

- Run an external command
- Redirecting standard input from a file
- Redirecting standard output to a file
- Background execution of commands
- Piping between commands
- Interrupting running commands by pressing `Ctrl-C` and `Ctrl-Z`
- Handling wildcards in commands (‘\*’ and ‘?’)
- Searching through history using up/downarrow keys
- `sb` command to detect a simple malware
- `flock` command to check for file locks
- editing commands using `Ctrl+A` and `Ctrl+E

## Build and Installation

- Clone the repository
- `cd` into the directory `TAAJsh-Custom-Linux-Shell`
- Add execute permissions to `build.sh` by running `chmod +x build.sh`
- Run `./build.sh` to build and install the shell
- For clean build files, run `./build.sh clean`
- To build in debug mode, run `./build.sh --trace`
