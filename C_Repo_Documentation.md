# C Language Code Repository - Documentation

## Repository Overview

This repository contains C programming exercises organized by topic:
- **Nested Loops** - Loop control structures
- **Structures** - Struct and typedef usage
- **Arrays** - 1D, 2D, and 3D arrays, pointers
- **IMP** - Important concepts and functions

---

## Compilation Status

| Status | Description |
|--------|-------------|
| ⚠️ | Warnings present (code compiles but has issues) |
| ❌ | Fatal error (compilation failed) |
| ✅ | Clean compile |

---

## File-by-File Analysis

### 1. Nested Loops

#### `1.c` - ⚠️ Warning
**Issue:** Missing initialization in for loop
```c
// BEFORE (warning: statement with no effect)
for(i; i<5; i++){

// AFTER (fixed)
for(i=0; i<5; i++){
```
**Fix:** Add `i=0` initialization.

---

#### `2.c` - ⚠️ Warning
**Issue:** Unused variable `b`
```c
// BEFORE
float b=3.0;  // declared but never used

// AFTER (fixed)
// Remove unused variable or use it in calculation
```
**Fix:** Remove `float b=3.0;` or use it in the program logic.

---

#### `3.c` - ⚠️ Warning
**Issues:** 
1. Wrong format specifier for function pointer
2. Unused variable `s`
```c
// BEFORE
printf("%d", max);        // %d expects int, but max is a function pointer
int s = max(a, b);        // s is never used

// AFTER (fixed)
printf("%p", (void*)max);  // Use %p for pointers
int s = max(a, b);
printf("Result: %d\n", s); // Use the variable
```
**Fix:** Use `%p` for function pointers and utilize the `s` variable.

---

### 2. Structures

#### `01.c` - ⚠️ Warning
**Issue:** Unused variable `e2`
```c
// BEFORE
struct Intro e1, e2;  // e2 never used

// AFTER (fixed)
struct Intro e1;       // Remove e2 if not needed
// OR use e2 in your program
```

---

#### `01Input.c` - ⚠️ Warning
**Issues:**
1. Wrong `scanf` usage for string (array)
2. Unused variable `e3`
```c
// BEFORE
scanf("%s", &e1.name);    // & not needed for arrays
struct Intro e1, e2, e3;   // e3 never used

// AFTER (fixed)
scanf("%s", e1.name);       // Arrays decay to pointers automatically
struct Intro e1, e2;        // Remove e3
```
**Note:** `e1.name` is already a pointer (array), so `&e1.name` gives a pointer-to-pointer which is wrong.

---

#### `typedef.c` - ⚠️ Warning
**Issue:** Unused pointer `ptr1`
```c
// BEFORE
emp* ptr1 = &e1;  // ptr1 never used

// AFTER (fixed)
emp* ptr1 = &e1;
printf("Employee: %s, Salary: %f\n", ptr1->name, ptr1->salary);  // Use ptr1
// OR remove ptr1 if not needed
```

---

#### `funcinstruct.c`, `pointerinstruct.c`, `01_problem.c`, `02.c`, `02problem.c`, `forinstruct.c`, `tempCodeRunnerFile.c`, `00.c` - ✅ Clean
No warnings or errors.

---

### 3. Arrays

#### `2D Arrays/pointerand_2D.c` - ⚠️ Warning
**Issue:** Wrong format specifier for pointer
```c
// BEFORE
printf("Address of %d th 1-D array = %u\n", i, s[i]);  // %u expects unsigned int

// AFTER (fixed)
printf("Address of %d th 1-D array = %p\n", i, (void*)s[i]);  // %p for pointers
```
**Note:** `s[i]` in a 2D array context is a pointer to the i-th row. Use `%p` with `(void*)` cast.

---

#### `2D Arrays/static.c` - ⚠️ Warning
**Issue:** Wrong format specifiers for pointers
```c
// BEFORE
printf("%u %u %d\n", p, *p, *(*p));  // %u for pointers is wrong

// AFTER (fixed)
printf("%p %p %d\n", (void*)p, (void*)*p, *(*p));  // %p for pointers
```

---

#### `2D Arrays/3D_array.c`, `print2D.c`, `pointertoarrayin2d.c`, `1.c` - ✅ Clean
No warnings or errors.

---

#### `Array for ++.c` - ❌ FATAL ERROR
**Issue:** C++ header in C file
```c
// BEFORE (C file with C++ header)
#include<iostream>  // C++ header - not available in C

// AFTER (Option 1: Convert to C)
#include<stdio.h>   // C standard I/O
// Replace cout with printf, endl with \n

// AFTER (Option 2: Rename to .cpp)
// Rename file to "Array for ++.cpp" and compile with g++
```
**Fix:** Either rename to `.cpp` and use `g++`, or convert to pure C using `stdio.h`.

---

### 4. IMP (Important Programs)

#### `01.c`, `pi_func.c`, `Recursionwithfabonacii.c` - ✅ Clean
No warnings or errors.

---

## Quick Fix Commands

### Fix All Warnings Automatically
```bash
# Fix Nested Loops/1.c - add initialization
sed -i 's/for(i; i<5; i++)/for(i=0; i<5; i++)/' "Nested Loops/1.c"

# Fix Structures/01Input.c - remove & from scanf
sed -i 's/scanf("%s", &e1.name)/scanf("%s", e1.name)/' "Structures/01Input.c"

# Fix pointer formats in 2D array files
sed -i 's/%u/%p/g' "Arrays/2D Arrays/pointerand_2D.c"
sed -i 's/%u/%p/g' "Arrays/2D Arrays/static.c"
```

### Fix Fatal Error
```bash
# Option 1: Rename to C++
git mv "Arrays/Array for ++.c" "Arrays/Array for ++.cpp"

# Option 2: Convert to C (manual edit)
# Change #include<iostream> to #include<stdio.h>
# Change cout/endl to printf
```

---

## CI/CD Configuration

### GitHub Actions Workflow (.github/workflows/c-ci.yml)
```yaml
name: C CI

on: [push, pull_request]

jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v4

      - name: Install dependencies
        run: sudo apt-get update && sudo apt-get install -y gcc g++

      - name: Compile C files
        run: |
          find . -name "*.c" -exec gcc -Wall -Werror {} \;

      - name: Compile C++ files
        run: |
          find . -name "*.cpp" -exec g++ -Wall -Werror {} \;
```

---

## Common C Programming Mistakes & Fixes

| Mistake | Why It's Wrong | Correct Way |
|---------|---------------|-------------|
| `scanf("%s", &str)` | Arrays decay to pointers; `&` gives pointer-to-pointer | `scanf("%s", str)` |
| `printf("%u", ptr)` | `%u` is for unsigned int, not pointers | `printf("%p", (void*)ptr)` |
| `for(i; i<n; i++)` | Missing initialization, undefined behavior | `for(i=0; i<n; i++)` |
| `#include<iostream>` in `.c` | C++ header not available in C | Use `#include<stdio.h>` or rename to `.cpp` |
| Unused variables | Wastes memory, compiler warnings | Remove or use the variable |
| `printf("%d", func_ptr)` | Function pointers need `%p` | `printf("%p", (void*)func_ptr)` |

---

## Compilation Commands

```bash
# Compile single C file
gcc -Wall -o output file.c

# Compile with all warnings as errors (strict)
gcc -Wall -Werror -o output file.c

# Compile C++ file
g++ -Wall -o output file.cpp

# Compile all C files in directory
find . -name "*.c" -exec gcc -Wall {} \;
```

---

## Repository Structure

```
OOP/
├── Nested Loops/
│   ├── 1.c          ⚠️ Missing init
│   ├── 2.c          ⚠️ Unused var
│   └── 3.c          ⚠️ Format + unused
├── Structures/
│   ├── 00.c         ✅
│   ├── 01.c         ⚠️ Unused var
│   ├── 01Input.c    ⚠️ scanf + unused
│   ├── 01_problem.c ✅
│   ├── 02.c         ✅
│   ├── 02problem.c  ✅
│   ├── forinstruct.c ✅
│   ├── funcinstruct.c ✅
│   ├── pointerinstruct.c ✅
│   ├── tempCodeRunnerFile.c ✅
│   └── typedef.c    ⚠️ Unused ptr
├── Arrays/
│   ├── Array for ++.c  ❌ C++ header
│   └── 2D Arrays/
│       ├── 1.c          ✅
│       ├── 3D_array.c   ✅
│       ├── pointerand_2D.c  ⚠️ Format
│       ├── pointertoarrayin2d.c ✅
│       ├── print2D.c    ✅
│       └── static.c     ⚠️ Format
├── IMP/
│   ├── 01.c             ✅
│   ├── pi_func.c        ✅
│   └── Recursionwithfabonacii.c ✅
└── .github/workflows/
    └── c-ci.yml
```

---

## Author

**Asim Ayaz**  
GitHub: [@asimayazmrd0987-glitch](https://github.com/asimayazmrd0987-glitch)  
Email: asimayazmrd0987@gmail.com

---

*Generated for Ubuntu 26.04 DevOps Environment*
