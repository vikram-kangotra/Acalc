# ACALC
## Advanced Calculator for Accelerated Learning Coders

Acalc was designed with the intent that programmers would gain the most from the application. That isn't to say that it can't be used by people who aren't programmers. It is, in fact, incredibly simple to set up and utilise.
Acalc is capable of solving any sequence of difficult mathematical expressions.
It can be used with or without a file name, and it can be run directly from the command line as REPL (Read Evaluate Print Loop).

## What it can do?
- Perform calculations with long numeric expressions.
- Use trigonometric functions to solve problems.
- Determine the definite integral of a mathematical expression that contains both numeric and trigonometric functions.

## How to build
```
cmake CMakeLists.txt
```

## Usage
```bash
acalc [FileName]
```

## Example
```bash
> 34+234/3243*2423-432+sin(32+432/23+tan(x))-2343/23-34*sin(tan(x))
-324.5426186
> int( sin(x) )(0, pi)
2
> int(x^5*sin(cos(x)) + tan(x)*sin(x))(pi, 2*pi/3)
114.3102697
```
