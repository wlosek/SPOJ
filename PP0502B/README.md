# PP0504B - StringMerge

Napisz funkcję:
```c++
char* string_merge(char *, char *);
```
która sklei ze sobą dwa łańcuchy biorąc na przemian po jednym znaku z każdego łańcucha i umieści w nowej dynamicznie alokowanej tablicy znaków, do której zwróci wskaźnik. Należy wziąć po tyle znaków ile jest w krótszym łańcuchu.
## Input

W pierwszej linii liczba testów t, w kolejnych liniach po dwa łańcuchy znaków odzielone spacją.
## Output

W każdej linii jeden łańcuch, wynik działania funkcji string_merge.
## Example

Input:
```c++
4
a bb
abs sfd
ewr w
wqeqweqweq eqweqwe
```
Output:
```c++
ab
asbfsd
ew
weqqewqewqewqe
```
