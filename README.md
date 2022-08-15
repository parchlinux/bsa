# BSA

**BSA(Bash Static Analyser)** is a cross-platform static analysis tool that identifies potential security vulnerabilities in bash scripts.

BSA is a part of [ParchLinux](https://parchlinux.ir).

## Getting Started

Prerequisites :
* cmake
* gcc>=8.0
* [ShellCheck](github.com/koalaman/shellcheck)

```
cd build && cmake .. && make && ./bsa
```

## Check for dangerous commands

```
$ bsa tests/fork_bomb.sh
Fork bomb detected: tests/fork_bomb.sh
```

## License

This project is licensed under **"GPL V3"** license, read [the license](LICENSE) for more information.

## About

Copyright 2022 &copy; ParchLinux, \
all rights reserved.
