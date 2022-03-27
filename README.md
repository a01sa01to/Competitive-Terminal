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

This table is sorted in ascending order by command.

| Command (Alias)   | Description                                        | Same Bash Command                                             |
| :---------------- | :------------------------------------------------- | :------------------------------------------------------------ |
| compile (c)       | Compile `a.cpp` and Output as `a.out`              | `g++ a.cpp -o a.out -std=c++17 -I . -DLOCAL`                  |
| exit (e)          | Exit this terminal                                 | -                                                             |
| help (h)          | Show help                                          | -                                                             |
| install (i)       | Update packages, then Install g++                  | `sudo apt update -y && sudo apt install g++`                  |
| reset (r)         | Reset `a.cpp` according to `settings/template.cpp` | `cat ./settings/template.cpp > a.cpp`                         |
| test (t)          | Run `a.out` for testing sample inputs              | `./a.out`                                                     |
| test-in (ti)      | Run `a.out` with input of `stdin.txt`              | `./a.out < stdin.txt`                                         |
| test-out (to)     | Run `a.out` and Write output to `stdout.txt`       | `./a.out > stdout.txt`                                        |
| test-in-out (tio) | Combination of `test-in` and `test-out`            | `./a.out < stdin.txt > stdout.txt`                            |
| version (v)       | Show the version of this terminal                  | -                                                             |

## License

MIT License. [LICENSE file](./LICENSE) for more information.