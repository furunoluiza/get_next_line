# get_next_line
Welcome to the repository of "get_next_line" project for 42 School!

## Project Description
This project aims to create a function that can extract lines from a text file, delivering them one by one upon each function call. The objective is to retrieve the subsequent line with every invocation until the entire file has been processed. This project facilitates the development of competencies in handling files, dynamically allocating memory, and effectively utilizing pointers in the C programming language.

## How to Use

1. Install and enter in the directory

```sh
git clone https://github.com/furunoluiza/get_next_line.git && cd get_next_line
```

2. Usage

 - Inside project dir create a text file (`file.txt`)

```
A vida é arte do encontro
Embora haja tanto desencontro pela vida
```
- Create a `main.c` file

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
int	main(void)
{
	int	fd;
	fd = open("file.txt", O_RDONLY);
	printf("%s", get_next_line(fd)); // A vida é arte do encontro
	printf("%s", get_next_line(fd)); // Embora haja tanto desencontro pela vida
	close(fd);
}
```

3. Run

```sh
 gcc get_next_line.c get_next_line.h get_next_line_utils.c main.c && ./a.out
```
