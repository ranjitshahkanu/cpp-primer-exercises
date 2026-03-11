# C++ Primer Exercises

A structured collection of exercises and experiments and small projects while studying **C++** using *C++ Primer (5th Edition)*.

The goal of this repository is to build strong foundations in modern C++ while practicing clean project structure and consistent, incremental learning.

---

## 🎯 Project Objectives

* **Foundational Mastery:** Develop a deep understanding of core C++ concepts and the C++11 standard.
* **Structured Learning:** Organize exercises by topic and chapter for clarity and maintainability.
* **Code Quality:** Practice writing clear, readable, and well-structured C++ code.
* **Performance Awareness:** Experiment with simple timing utilities to understand execution behavior.

---

## 🛠 Tech Stack

* **Language:** C++11 / C++14
* **Compiler:** `clang++` or `g++`
* **Build Method:** Manual compilation (simple Makefiles may be added later)
* **Operating System:** macOS

---

## 📁 Repository Structure

The structure below shows the **general layout** of the repository.
Additional chapters and exercises will be added progressively.

```
cpp-primer-exercises/
├── README.md
├── docs/                     # Notes and summaries
│
├── src/
│   ├── common/               # Shared utilities (timers, helpers)
│   │   └── timer.hpp
│   │
│   ├── 01_getting_started/
│   │   ├── 00_minimal_program/
│   │   │   └── main.cpp
│   │   └── 01_io_basics/
│   │       └── hello_world.cpp
│   │
│   ├── 02_variables_and_basic_types/
│   │   └── ...
│   │
│   └── projects/             # Larger experiments added later
```

---

## 🚀 How to Compile and Run

### Example

Compile a specific program:

```bash
clang++ src/01_getting_started/01_io_basics/hello_world.cpp -o hello
./hello
```

### General Pattern

You can compile any file in the repository using:

```bash
clang++ path/to/file.cpp -o output_name
./output_name
```

Example using `g++`:

```bash
g++ path/to/file.cpp -o output_name
./output_name
```

---

## 📚 Learning Resource

Primary reference:

*C++ Primer (5th Edition)*

This repository follows the concepts introduced in the book while adding small experiments and utilities where helpful.

---

## 📝 Notes

Conceptual explanations, summaries, and study notes are stored in the `docs/` directory.

---

## 📈 Progress

* [ ] Chapter 1 — Getting Started
* [ ] Chapter 2 — Variables and Basic Types
* [ ] Chapter 3 — Strings, Vectors, and Arrays
* [ ] Chapter 4 — Expressions
* [ ] Chapter 5 — Statements

