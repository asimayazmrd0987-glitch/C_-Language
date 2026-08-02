![](https://capsule-render.vercel.app/api?type=waving&color=0:1C1C1C,100:FF4500&height=120&section=header&text=C%20Language%20For%20Everyone&fontSize=36&fontColor=ffffff&animation=fadeIn)

## Repository Overview

This repository contains C programming exercises organized by topic:
- **Nested Loops** - Loop control structures
- **Structures** - Struct and typedef usage
- **Arrays** - 1D, 2D, and 3D arrays, pointers
- **IMP** - Important concepts and functions

---

# Pure C Language

## CI/CD Configuration

### GitHub Actions Workflow (.github/workflows/c-ci.yml)
```yaml
name: C/C++ Build and Check

on:
  push:
    branches: [ "main" ]
  pull_request:
    branches: [ "main" ]
  workflow_dispatch:

jobs:
  build:
    runs-on: ubuntu-latest

    steps:
    - name: Checkout repository
      uses: actions/checkout@v4

    - name: Install dependencies
      run: |
        sudo apt-get update
        sudo apt-get install -y gcc g++ make

    - name: List source files
      run: |
        echo "=== C files ==="
        find . -type f -name "*.c"
        echo "=== C++ files ==="
        find . -type f -name "*.cpp"

    - name: Build (compile check)
      shell: bash
      run: |
        c_files=$(find . -type f -name "*.c")
        cpp_files=$(find . -type f -name "*.cpp")

        if [ -z "$c_files" ] && [ -z "$cpp_files" ]; then
          echo "No C or C++ files found."
          exit 1
        fi

        # Compile C files
        while IFS= read -r -d '' file; do
          echo "Checking C syntax: $file"
          gcc -Wall -Wextra -fsyntax-only "$file"
        done < <(find . -type f -name "*.c" -print0)

        # Compile C++ files  
        while IFS= read -r -d '' file; do
          echo "Checking C++ syntax: $file"
          g++ -Wall -Wextra -fsyntax-only "$file"
        done < <(find . -type f -name "*.cpp" -print0)
,,,

---


 
