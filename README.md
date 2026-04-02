# Project-7-level-5-Undo-Redo
# Undo / Redo System in C++

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Data Structure](https://img.shields.io/badge/Data%20Structure-Stack-green)
![Project](https://img.shields.io/badge/Type-Educational-orange)

---

# Project Overview

This project demonstrates how to implement an **Undo / Redo system** in **C++** using the **Stack Data Structure**.

The program stores previous values of a string and allows the user to:

* Undo previous changes
* Redo undone changes

This technique is widely used in applications such as:

* Text editors
* Code editors
* Graphic design software

---

# Key Idea

The project uses **two stacks**:

| Stack      | Purpose                        |
| ---------- | ------------------------------ |
| Undo Stack | Stores previous values         |
| Redo Stack | Stores values that were undone |

---

# Class Design

The project contains a class called:

```cpp id="c1"
class clsMyString
```

### Private Members

```cpp id="c2"
stack<string> _Undo;
stack<string> _Redo;
string _Value;
```

* `_Undo` → stores previous states
* `_Redo` → stores undone states
* `_Value` → current string value

---

# Main Functions

## Set Value

```cpp id="c3"
void Set(string Value)
```

* Saves the current value into the **Undo stack**
* Updates the string value

---

## Get Value

```cpp id="c4"
string Get()
```

Returns the current value.

---

## Undo Operation

```cpp id="c5"
void Undo()
```

Steps:

1. Move current value to **Redo stack**
2. Get last value from **Undo stack**
3. Set it as current value

---

## Redo Operation

```cpp id="c6"
void Redo()
```

Steps:

1. Move current value to **Undo stack**
2. Get value from **Redo stack**
3. Restore it as current value

---

# Property Feature

The project uses **C++ property syntax**:

```cpp id="c7"
__declspec(property(get = Get, put = Set)) string Value;
```

This allows using the class like this:

```cpp id="c8"
S1.Value = "Ahmed";
cout << S1.Value;
```

instead of calling functions manually.

---

# Project Structure

```id="c9"
UndoRedoProject
│
├── clsMyString.h
├── main.cpp
└── README.md
```

---

# Example Program Flow

### Initial Value

```id="c10"
S1 :
```

### After Changes

```id="c11"
S1 : Ahmed
S1 : Ahmed2
S1 : Ahmed3
```

---

# Undo Example

```id="c12"
Undo

S1 after undo : Ahmed2
S1 after undo : Ahmed
S1 after undo :
```

---

# Redo Example

```id="c13"
Redo

S1 after redo : Ahmed
S1 after redo : Ahmed2
S1 after redo : Ahmed3
```

---

# Algorithm Visualization

### Undo

```id="c14"
Current Value → Redo Stack
Last Undo Value → Current Value
```

---

### Redo

```id="c15"
Current Value → Undo Stack
Last Redo Value → Current Value
```

---

# Learning Objectives

This project helps understand:

* Stack Data Structure
* Undo / Redo algorithms
* Object Oriented Programming
* Property syntax in C++
* State management

---

# Possible Improvements

Future improvements could include:

* Limiting stack size
* Supporting multiple data types
* Adding file saving for history
* Implementing command history system

---

# Author

Ahmed Mohamed

---
