# 0x1C. C - Make- Files

## C - Language By: Julien Barbier23 6:00 AM

## Resources

**Read or watch:**

- [Make- File](https://intranet.alxswe.com/rltoken/moIpBFMN3sJcVMNn5VIFlA)
- [Installing the make utility](https://intranet.alxswe.com/rltoken/1AUviCUw3TrznESzWbrKAQ)
- [make-official documentation](https://intranet.alxswe.com/rltoken/vQFeXLq1izNua2z2dVl5Yg)

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone(https://intranet.alxswe.com/rltoken/u_RzOFqA4lSt5AdGRAfQ_w)], without the help of Google:

## General

- What are `make`, Make- Files
- When, why and how to use Make- Files
- What are rules and how to set and use them
- What are explicit and implicit rules
- What are the most common / useful rules
- What are variables and how to set and use them

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Version of `gcc`: 9.3.0
- Version of `make`: GNU Make 4.2.1
- All your - Files should end with a new line
- A `README.md` - File, at the root of the folder of the project, is **mandatory**

## More Info

## - Files

In the following tasks, we are going to use [these - Files](https://github.com/alx-tools/0x1B.c). We want to compile these only.

## Tasks

## 0. make -f 0-Make- File

**mandatory**

Create your first Make- File.

Requirements:

- name of the executable: `school`
- rules: `all`
  - The `all` rule builds your executable
- variables: none

```c
julien@ubuntu:~/0x1C. Make- Files$ make -f 0-Make- File 
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Make- Files$ ./school 
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
julien@ubuntu:~/0x1C. Make- Files$
```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1C-make- Files`
- File: `0-Make- File`

## 1. make -f 1-Make- File

**mandatory**

Requirements:

- name of the executable: `school`
- rules: `all`
  - The `all` rule builds your executable
- variables: `CC`, `SRC`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` - Files

```c
julien@ubuntu:~/0x1C. Make- Files$ make -f 1-Make- File
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Make- Files$ make -f 1-Make- File
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Make- Files$
```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1C-make- Files`
- File: `1-Make- File`

## 2. make -f 2-Make- File

**mandatory**

Create your first useful Make- File.

Requirements:

- name of the executable: `school`
- rules: `all`
  - The `all` rule builds your executable
- variables: `CC`, `SRC`, `OBJ`, `NAME`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` - Files
  - ``OBJ``: the `.o` - Files
  - `NAME`: the name of the executable
- The `all` rule should recompile only the updated source - Files
- You are not allowed to have a list of all the `.o` - Files

```c
julien@ubuntu:~/0x1C. Make- Files$ make -f 2-Make- File
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Make- Files$ make -f 2-Make- File
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Make- Files$ echo "/* School */" >> main.c
julien@ubuntu:~/0x1C. Make- Files$ make -f 2-Make- File
gcc    -c -o main.o main.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Make- Files$
```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1C-make- Files`
- File: `2-Make- File`

## 3. make -f 3-Make- File

**mandatory**

**Requirements:**

- name of the executable: `school`
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
  - `all`: builds your executable
  - `clean`: deletes all Emacs and Vim temporary - Files along with the executable
  - `oclean`: deletes the object - Files
  - `fclean`: deletes all Emacs and Vim temporary - Files, the executable, and the object - Files
  - `re`: forces recompilation of all source - Files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` - Files
  - `OBJ`: the `.o`- Files
  - `NAME`: the name of the executable
  - `RM`: the program to delete - Files
- The `all` rule should recompile only the updated source - Files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the `.o` - Files

```c
julien@ubuntu:~//0x1C. Make- Files$ ls -1
0-Make- File
1-Make- File
2-Make- File
3-Make- File
school.c
main.c
main.c~
m.h
julien@ubuntu:~/0x1C. Make- Files$ make -f 3-Make- File
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Make- Files$ make all -f 3-Make- File
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Make- Files$ ls -1
0-Make- File
1-Make- File
2-Make- File
3-Make- File
school
school.c
school.o
main.c
main.c~
main.o
m.h
julien@ubuntu:~/0x1C. Make- Files$ make clean -f 3-Make- File 
rm -f *~ school
julien@ubuntu:~/0x1C. Make- Files$ make oclean -f 3-Make- File 
rm -f main.o school.o
julien@ubuntu:~/0x1C. Make- Files$ make fclean -f 3-Make- File 
rm -f *~ school
rm -f main.o school.o
julien@ubuntu:~/0x1C. Make- Files$ make all -f 3-Make- File
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Make- Files$ make all -f 3-Make- File
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Make- Files$ make re -f 3-Make- File
rm -f main.o school.o
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Make- Files$ 
```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1C-make- Files`
- File: `3-Make- File`

## 4. A complete Make- File

**mandatory**

Requirements:

- name of the executable: `school`
- rules: `all`, `clean`, `fclean`, `oclean`, `re`
  - `all`: builds your executable
  - `clean`: deletes all Emacs and Vim temporary - Files along with the executable
  - `oclean`: deletes the object - Files
  - `fclean`: deletes all Emacs and Vim temporary - Files, the executable, and the object - Files
  - `re`: forces recompilation of all source - Files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` - Files
  - `OBJ`: the `.o` - Files
  - `NAME`: the name of the executable
  - `RM`: the program to delete - Files
  - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
- The `all` rule should recompile only the updated source - Files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail

You are not allowed to have a list of all the `.o` - Files

```c
julien@ubuntu:~/0x1C. Make- Files$ make all -f 4-Make- File
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Make- Files$
```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1C-make- Files`
- File: `4-Make- File`

## 5. Island Perimeter

**mandatory**

**Technical interview preparation:**

- You are not allowed to google anything
- Whiteboard first

Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in grid:

- `grid` is a list of list of integers:
  - 0 represents a water zone
  - 1 represents a land zone
  - One cell is a square with side length 1
  - Grid cells are connected horizontally/vertically (not diagonally).
  - Grid is rectangular, width and height don’t exceed 100
- Grid is completely surrounded by water, and there is one island (or nothing).
- The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

Requirements:

- First line contains `#!/usr/bin/python3`
- You are not allowed to import any module
- Module and function must be documented

```py
guillaume@ubuntu:~/0x1C$ cat 5-main.py
#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

guillaume@ubuntu:~/0x1C$ 
guillaume@ubuntu:~/0x1C$ ./5-main.py
12
guillaume@ubuntu:~/0x1C$
```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1C-make- Files`
- File: `5-island_perimeter.py`

## 6. make -f 100-Make- File

## advanced

Requirements:

- name of the executable: `school`
- rules: `all`, `clean`, `fclean`, `oclean`, `re`
  - `all`: builds your executable
  - `clean`: deletes all Emacs and Vim temporary - Files along with the executable
  - `oclean`: deletes the object - Files
  - `fclean`: deletes all Emacs and Vim temporary - Files, the executable, and the object - Files
  - `re`: forces recompilation of all source - Files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` - Files
  - `OBJ`: the `.o` - Files
  - `NAME`: the name of the executable
  - `RM`: the program to delete - Files
  - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
- The `all` rule should recompile only the updated source - Files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the `.o` - Files
- You have to use `$(RM)` for the cleaning up rules, but you are not allowed to set the `RM` variable
- You are not allowed to use the string `$(CC)` more than once in your Make- File
- You are only allowed to use the string `$(RM)` twice in your Make- File
- You are not allowed to use the string `$(CFLAGS)` (but the compiler should still use the flags you set in this variable)
- You are not allowed to have an `$(OBJ)` rule
- You are not allowed to use the `%.o: %.c` rule
- Your Make- File should work even if there is a - File in the folder that has the same name as one of your rule
- Your Make- File should not compile if the header - File `m.h` is missing

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x1C-make- Files`
- File: `100-Make- File`
