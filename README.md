#Laboratorium 2
##Wstęp do klas
> W trakcie tego laboratorium przerobisz proceduralny kod prostej aplikacji na kod obiektowy. Przypomnisz sobie jak konstruować struktury i poznasz różnice pomiędzy widocznością danych w strukturach i klasach. Nauczysz się jak sterować widocznością atrybutów obiektu i zaimplementujesz dla nich *settery* i *gettery*.

##[Kod startowy](https://github.com/programowanie/lab2)

Plik `main.cpp` zawiera kod startowy do tego laboratorium. Zawiera się w nim prosty, strukturalny program przechowujący podstawowe parametry *okręgu* (lokalizacja na płaszczyźnie i promień) i pozwalający na wyliczanie jego obwodu i pola.

	float circle_circumference(float radius)
	{
		return 2 * M_PI * radius;
	}
	
	float circle_area(float radius)
	{
		return M_PI * pow(radius,2);
	}
	
	int main()
	{
		float circle_location_x = 5.;
		float circle_location_y = 2.;
		float circle_radius = 10.;
	
		printf("Circle location is %.1fx%.1f.\n", 
			circle_location_x, circle_location_y);
		printf("Circle circumference is %.2f.\n",
			circle_circumference(circle_radius));
		printf("Circle area is %.2f.\n",
			circle_area(circle_radius));
	}
	
##Zadanie
Twoim zadaniem będzie konwersja tego programu z podejścia strukturalnego na obiektowe. Aby to osiągnąć, wykonaj kroki opisane w kolejnych akapitach.

###Struktura
Zamiast dwóch zmiennych zawierających dane o lokalizacji (`circle_location_x` i `circle_location_y`), zadeklaruj strukturę `location`. Struktura powinna posiadać atrybuty `x` i `y`.

###Klasa *Circle*
Używając poniższego kodu, zadeklaruj klasę `Circle`.

	class Circle
	{
		location location;
		float radius;
	};
	
Zauważ, że, na tym etapie, jedyną różnicą w składni **klas** i **struktur** jest słowo, którymi je deklarujemy (`struct` lub `class`). Przetestuj widoczność zmiennych zadeklarowanych w strukturze i klasie (np. `x` ze struktury `location` i `radius` z klasy `circle`), odwołując się do nich w funkcji `main()`. Wynotuj sobie i przeczytaj uważnie ewentualne błędy i ostrzeżenia kompilatora. Wnioski zanotuj w komentarzach na końcu pliku `main.cpp`.

###Settery i gettery
Domyślnie atrybuty i funkcje klasy są prywatne. Wiesz, co oznacza to w praktyce dzięki własnym obserwacjom z poprzedniego punktu. Z punktu widzenia paradygmatów programowania obiektowego to bardzo dobre rozwiązanie. W kolejnych laboratoriach przyjrzymy się temu bliżej.

Widocznością atrybutów i funkcji klasy można sterować dzięki modyfikatorom *public*, *private* i *protected*. W największym skrócie:
 
> * Modyfikator `public` oznacza, że atrybut lub metoda jest widoczna zarówno ze środka klasy, klas dziedziczonych jak i z zewnątrz klasy. 
> * Modyfikator `private` oznacza, że atrybut lub metoda nie jest widoczna na zewnątrz klasy i nie może być dziedziczona. 
> * Modyfikator `protected` oznacza, że atrybut lub metoda nie jest widoczna na zewnątrz klasy i może być dziedziczona.

Pozostawiając deklaracje atrybutów w sekcji `private`, w sekcji `public` klasy `Circle` utwórz funkcje:

- `set_location()`,
- `get_location()`,
- `set_radius()`,
- `get_radius()`.

Są to tak zwane *settery* i *gettery*. Pozwalają na ustawianie i pobieranie prywatnych atrybutów obiektów. Zaimplementuj je i przetestuj poprawność działania.

Dlaczego pobieramy i ustawiamy dane w klasie przy użyciu specjalnych publicznych metod, a nie odnosząc się do nich bezpośrednio? Odpowiedz na to pytanie w komentarzu na koniec pliku z kodem.

###Publiczne metody obiektu
Masz dane dwie metody wyliczające parametry okręgu (`circle_circumference` i `circle_area`). Przenieś je do klasy, robiąc z nich publiczne metody obiektu. Pamiętaj, żeby uprościć ich nazwy do `circumference` i `area`. Nie przekazuj też do nich parametru promienia w argumencie, tylko pobierz go z wewnętrznych pól obiektu.

###Test efektów pracy
Funkcję `main()` wypełnij poniższym kodem.

	Circle circle;
	circle.set_location((location){ 4., 2. });
	circle.set_radius(15.);
	
	printf("Circle location is %.1fx%.1f.\n", 
		circle.get_location().x, circle.get_location().y);
	printf("Circle radius is %.1f.\n", 
		circle.get_radius());
	printf("Circle circumference is %.2f.\n", 
		circle.circumference());
	printf("Circle area is %.2f.\n", 
		circle.area());
		
Wynik pracy programu powinien wyglądać jak poniżej:

	Circle location is 4.0x2.0.
	Circle radius is 15.0.
	Circle circumference is 94.25.
	Circle area is 706.86.
	
##Rozwiązanie zadania
W mailu z rozwiązaniem zadania powinien znaleźć się plik `main.cpp`, zawierający następujące elementy:

- strukturę `location`,
- klasę `Circle`,
- funkcję `main()`,
- komentarz zawierający odpowiedzi na pytania postawione w zadaniach.

Powodzenia!

[Wyślij zadanie](mailto:pawel.ksieniewicz@pwr.edu.pl?subject=[PO][LAB1]&body=Pamiętaj o załączeniu pliku main.cpp lub, jeśli to prawda, napisz, że jest dostępne w publicznym repozytorium na Twoim profilu na GitHubie.)