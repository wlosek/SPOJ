# GLUTTON - Obżartuchy

Co roku w Megabajtolandii odbywa się Zlot Obżartuchów. Podczas każdego zlotu tradycją jest, że pierwszego dnia wszyscy uczestnicy obżerają się ciastkami przez całą dobę non-stop, nie mając ani ułamka sekundy przerwy. Jak tylko obżartuch skończy jeść jedno ciastko to od razu musi zabrać się za następne (nie dotyczy to sytuacji pod koniec doby, kiedy to uczestnikowi nie wolno napocząć ciastka jeśli wie, że nie zdąży go zjeść przed końcem doby). Kolejnym ważnym elementem tradycji jest to, że każdy obżartuch je każde swoje ciastko w niezmiennym przez całą dobę, charakterystycznym dla siebie tempie.

Na najbliższy Zlot zostały zaproszone tylko te obżartuchy, które już uczestniczyły w poprzednich Zlotach. Dzięki temu wiadomo z góry w jakim tempie każdy z nich je ciastka (obżartuchy nie lubią zmieniać swojego wyuczonego tempa). Na podstawie tych danych, organizatorzy Zlotu chcą określić ile należy kupić ciastek. Sytuację utrudnia fakt, że ciastka w sklepie sprzedawane są w pudełkach o stałej wielkości, a nie na sztuki - przez to być może trzeba będzie kupić trochę więcej ciastek niż zostanie zjedzonych.

## Zadanie

Mając daną liczbę obżartuchów zaproszonych na Zlot oraz czas jedzenia pojedynczego ciastka (podany w sekundach) przez każdego z nich Twój program powinien policzyć ile należy kupić pudełek z ciastkami.

## Specyfikacja wejścia

W pierwszej linii wejścia znajduje się jedna dodatnia liczba całkowita, oznaczająca liczbę zestawów testowych, które dalej pojawią się na wejściu. Każdy zestaw ma następującą postać. W pierwszej linii znajdują się dwie liczby całkowite N i M oddzielone pojedynczą spacją (1 ≤ N ≤ 10.000, 1 ≤ M ≤ 1.000.000.000). Oznaczają one odpowiednio liczbę zaproszonych obżartuchów na Zlot oraz liczbę ciastek w jednym pudełku. Kolejne N wierszy zestawu zawiera po jednej liczbie całkowitej dodatniej niewiększej niż 100.000. Są to czasy (w sekundach) jedzenia pojedynczego ciastka przez kolejnych obżartuchów.

## Specyfikacja wyjścia

Dla każdego zestawu danych pojawiającego się na wejściu należy wypisać dokładnie jedną liczbę całkowitą (każdą w osobnej linii), oznaczającą liczbę pudełek z ciastkami, jaką organizatorzy muszą kupić na Zlot.

## Przykład

Wejście
```c++
2
2 10
3600
1800
3 356
123
32999
10101
```
Wyjście
```c++
8
2
```

