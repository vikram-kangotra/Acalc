# Acalc (Advanced Calculator)

## Description
Advanced Calculator (ACalc) is cli tool to easily calculate complex mathematical expression. It supports algebra, trigonometry and definite integral.

## How to build
```
cmake CMakeLists.txt
make
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
