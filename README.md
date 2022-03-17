# Acalc (Advanced Calculator)

Advanced Calculator (ACalc) is cli tool to easily calculate complex mathematical expression. It supports algebra, trigonometry and definite integral.

## What you can do.
- Calculate long numeric expressions.
- Calculate trigonometric functions.
- Calculate definite integral of mathematical expression having numeric and trigonometric functions.

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
