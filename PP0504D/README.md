# PP0504D - Reprezentacja liczb typu float

Napisz funkcję
```c++
void printfloat(float);
```
która dla zadanej liczby typu float wypisze jej reprezentację szesnastkową.
Wejście

W pierwszej linii liczba testów t, w kolejnych t wierszach jedna liczba zmiennoprzecinkowa w zakresie typu float.
Wyjście

W kolejnych t wierszach odzielone pojedynczymi spacjami bajty reprezenacji kolejnych liczb, w kolejności od najstarszego bajtu.
## Przykład

Wejście:
```c++
5
1 
-1 
0 
123.125 
-345
```
Wyjście:
```c++
3f 80 0 0 
bf 80 0 0 
0 0 0 0 
42 f6 40 0 
c3 ac 80 0 
```
