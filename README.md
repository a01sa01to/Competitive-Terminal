# Competitive Terminal

## What is this?

My Personal Terminal for Competitive Programming.

This program is intended to use on WSL or Linux.

## How to use

1. Clone this repository.
2. Modify `settings/template.cpp` as you like.
3. Open the Terminal.
4. Run `./competitive-terminal`.

## Available Commands (Case-insensitive)
- compile (Alias: c)<br>Compile a.cpp and Output as a.out<br>Same as `g++ a.cpp -o a.out -std=c++17 -I . -D_GLIBCXX_DEBUG -DLOCAL`
- exit (Alias: e)<br>Exit this terminal
- help (Alias: h)<br>Show this help
- install (Alias: i)<br>Update and Upgrade packages, then Install g++<br>Same as `sudo apt update -y && sudo apt install g++`
- reset (Alias: r)<br>Reset a.cpp according to settings/template.cpp<br>Same as `cat ./settings/template.cpp > a.cpp`
- test (Alias: t)<br>Run a.out; you can test sample inputs<br>Same as `./a.out`
- test-in (Alias: ti)<br>Run a.out and Load input from stdin.txt<br>Same as `./a.out < stdin.txt`
- test-out (Alias: to)<br>Run a.out and Write output to stdout.txt<br>Same as `./a.out > stdout.txt`
- test-in-out (Alias: tio)<br>Run a.out, Load input from stdin.txt and Write output to stdout.txt<br>Same as `./a.out < stdin.txt > stdout.txt`

## License

MIT License. [LICENSE file](./LICENSE) for more information.