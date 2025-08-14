# C++ Learning Repository

Comprehensive, example-driven walkthrough of core to intermediate C++ concepts. The project is organized by numbered chapters that mirror a typical progression: basics → control flow → functions → arrays → object-oriented programming → inheritance → virtual base classes → pointers → polymorphism → file I/O → templates → STL → practice.

> All source files are simple, focused `.cpp` examples meant for learning / experimentation. Many have matching compiled `.exe` artifacts (can be deleted/rebuilt anytime).

## 📂 Repository Layout (Chapters & Focus)

| Chapter | Folder (Representative) | Focus / Concepts (inferred from filenames) |
|---------|-------------------------|---------------------------------------------|
| 1 | `Chapter 1 Basic/` | Basic syntax, I/O, literals, operators (not listed but implied) |
| 2 | `Chapter 2 conditional/` | if / else, switch, conditional logic |
| 3 | `Chapter 3 Looping/` | while, for, do-while, iteration patterns |
| 5 | `Chapter 5 Function/` | Functions, parameters, return types, overloading |
| 6 | `Chapter 6 Array/` | Arrays, indexing, basic algorithms |
| 7 | `Chapter 7 Function/` | (Possibly recursion / advanced function topics) |
| 8 | `Chapter 8 Class & Object/` | Classes, constructors, encapsulation, methods |
| 9 | `Chapter 9 Inheritance/` | Inheritance forms, access specifiers |
| 10 | `Chapter 10 Virtual Base Class/` | Virtual inheritance, diamond problem (`44_Theory_Virtual_Base_Class.cpp`, `45_Example_Virtual_Base_Class.cpp`) |
| 11 | `Chapter 11 Pointer/` | Raw pointers, `new`/`delete`, pointer to object, arrays via pointers, `this` pointer, base vs derived pointer dispatch |
| 12 | `Chapter 12 Polymorphism/` | Virtual functions, abstract base classes, pure virtuals (`56_`, `57_`, `58_`, `Pure_Virtual_Function.cpp`) |
| 13 | `Chapter 13 File Input and Output/` | File streams, read/write, open modes (`60_`–`62_`) + sample text files |
| 14 | `Chapter 14 Templates/` | Function & class templates, multi-parameter templates, defaults, overloading (`63_`–`68_`) |
| 15 | `Chapter 15 Standard Template Library (STL)/` | (Likely `std::list`, containers, iterators, algorithms) |
| Practice | `Chapter wise Practise/`, `Overall CPP Practise/` | Consolidated exercises / algorithm practice |

Other standalone educational examples (e.g. `TripletSorting.cpp`, allocation demos) reinforce memory management and algorithm reasoning.

## 🛠 Development Environment

Tested toolchain: MinGW (GCC) on Windows via VS Code.

### Recommended Compiler
Although the VS Code task uses `gcc.exe`, C++ sources should ideally be compiled with `g++.exe` so the correct C++ standard library is linked automatically.

### VS Code Task (Existing)
Located at `.vscode/tasks.json`:
- Label: `C/C++: gcc.exe build active file`
- Command: `C:\MinGW\bin\gcc.exe` (suggest changing to `g++.exe`)
- Output: Places the `.exe` beside the source file.

### Switching Task to g++ (Optional Improvement)
Edit `.vscode/tasks.json`:
```jsonc
"command": "C:/MinGW/bin/g++.exe",
"args": [
  "-std=c++17",
  "-Wall",
  "-Wextra",
  "-O0",
  "-g",
  "${file}",
  "-o", "${fileDirname}/${fileBasenameNoExtension}.exe"
]
```

## ▶️ Building & Running (Manual)
From PowerShell (adjust path with quotes because of spaces and ampersand):
```powershell
# Example: build a polymorphism sample
& "C:/MinGW/bin/g++.exe" -std=c++17 -Wall -Wextra -g "d:/C++ Programming/Sanket & C++/Chapter 12 Polymorphism/57_Virtual_Function_Example.cpp" -o "d:/C++ Programming/Sanket & C++/Chapter 12 Polymorphism/57_Virtual_Function_Example.exe"

# Run it
& "d:/C++ Programming/Sanket & C++/Chapter 12 Polymorphism/57_Virtual_Function_Example.exe"
```
Use `&` to invoke paths containing special characters. Quote any path containing spaces or `&`.

### Using the VS Code Task
1. Open a `.cpp` file.
2. Press `Ctrl+Shift+B`.
3. Select the build task.
4. Run the generated `.exe` (from the terminal or Explorer → right‑click → Run).

## 📖 Naming Conventions
Prefix numbers (e.g. `56_`, `57_`) reflect lesson order. Descriptive suffix clarifies the topic: `Virtual_Function`, `Array_of_Obj_Using_Pointer`, etc. Matching `.exe` files are build artifacts (safe to delete & regenerate).

## 🧩 Key Concept Highlights
- Memory Management: `new_operator.cpp`, `memoryAllocation.cpp`, pointer arrays, object arrays.
- Polymorphism: Virtual dispatch examples and pure virtual function patterns.
- Abstract & Virtual Base: Demonstrates diamond inheritance resolution with virtual inheritance.
- Templates: Progressive introduction from single-type to multi-parameter, defaults, and overloading.
- File I/O: Reading/writing multiple files (`sanket*.txt`) with `ifstream`, `ofstream`, `fstream`.
- STL (early): `1_STL_List_DSA.cpp` hints at container & iterator usage.

## ✅ Suggested Progression for Learners
1. Basics & control flow (Ch 1–3)
2. Functions & arrays (Ch 5–6)
3. Classes & objects (Ch 8)
4. Inheritance & virtual base (Ch 9–10)
5. Pointers & dynamic memory (Ch 11)
6. Polymorphism (Ch 12)
7. File I/O (Ch 13)
8. Templates (Ch 14)
9. STL & practice problems (Ch 15 + practice folders)

## 🚀 Adding a New Example
1. Choose the appropriate chapter folder (create a new one if concept is distinct).
2. Name file with incremental prefix: `69_New_Topic_Name.cpp` (continue numbering logically) or keep chapter-local numbering.
3. Include minimal `main()` focusing on one concept.
4. Build using the task or manual command.

Template skeleton:
```cpp
#include <bits/stdc++.h> // or individual headers
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Demo code here
    return 0;
}
```
Prefer explicit headers (e.g. `<iostream>`, `<vector>`, `<string>`) over `<bits/stdc++.h>` for portability.

## 🧪 Simple Sanity Test
To verify toolchain setup:
```powershell
& "C:/MinGW/bin/g++.exe" -x c++ - <<'EOF'
#include <iostream>
int main(){ std::cout << "Toolchain OK\n"; }
EOF
```
(If heredoc redirection fails in PowerShell, instead create a temp file.)

## 🔍 Potential Improvements (Roadmap)
- Replace `gcc.exe` with `g++.exe` in task.
- Add a root CMake build for batch compilation.
- Introduce unit tests (e.g. with Catch2) for algorithm examples.
- Add README badges & CI (GitHub Actions) to auto-build samples.
- Expand STL coverage: vectors, maps, algorithms, iterators.
- Add modern C++ sections: smart pointers, RAII, `std::optional`, lambdas, move semantics.

## ❗ Notes
- Some spellings / identifiers are intentionally informal (learning context).
- `.exe` files may be outdated—rebuild after editing source.
- Disable `C_Cpp.errorSquiggles` was set; re‑enable for inline diagnostics if desired.

## 📄 License
No explicit license provided. If you plan to share publicly, consider adding an open-source license (e.g. MIT) to clarify usage rights.

## 🤝 Contributions
For personal learning, but you can:
- Refactor examples
- Add comments explaining tricky parts
- Extend practice problems

Open a PR with concise description & chapter reference.

## 🧭 Quick Reference
| Task | Action |
|------|--------|
| Build active file | Ctrl+Shift+B |
| Run executable | Launch `.exe` in same folder |
| Clean | Delete `.exe` files |
| Add new lesson | Copy template, increment number |

---
Educational C++ example set—grow it as your understanding deepens.
