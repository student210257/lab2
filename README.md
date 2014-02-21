#Laboratorium 2 — Klasy - wstęp
##Klasa `Array`
1. Stwórz klasę `Array`, pozwalającą przechowywać dowolną liczbę (zdefiniowaną przy tworzeniu obiektu klasy) zmiennych typu `int`. Pamiętaj o korzystaniu z sekcji klasy `private` i `public`. Klasa powinna posiadać zmienną całkowitą zawierającą informacje o rozmiarze obiektu (licznik elementów w tablicy).2. Utwórz funkcje: **zerującą tablicę**, umożliwiającą **wpisywanie** oraz **wypisywanie** elementów tablicy. Zapewnij zabezpieczenie przed wyjściem poza zakres tablicy. Postaraj się zaimplementować wczytywanie danych strumieniowo (format CSV).5. Zaproponuj funkcję sortującą elementy w tablicy rosnąco. Możesz użyć sortowania bąbelkowego. Jest proste do bólu i beznadziejnie powolne ale dla niewielkich tablic nikt nie zobaczy różnicy.

##Przeciążanie operatorów
1. Dodaj przeciążenie operatorów `+`, `–`, `*`, `/` jako operacje na odpowiadających sobie elementach dwóch obiektów klasy `Array`. Zwróć uwagę na sytuacje różnych rozmiarów tablic.
2. Dodaj przeciążenie operatora `<<` na potrzeby funkcji `cout`.
3. Rozbuduj program o możliwość kontroli precyzji wprowadzania i wyprowadzania danych na ekran. [dodatkowe]4. Dodaj możliwość wypisania liczb w notacji zwykłej, naukowej, szesnastkowo, ósemkowo itp. [dodatkowe]

##Funkcje i zmienne statyczne
1. Dodaj zmienną statyczną informującą o liczbie utworzonych tablic, a także funkcje pozwalające na odczyt tej informacji.2. Pamiętaj by uwzględnić zwiększanie i zmniejszanie zmiennej statycznej w konstruktorze i destruktorze obiektu.