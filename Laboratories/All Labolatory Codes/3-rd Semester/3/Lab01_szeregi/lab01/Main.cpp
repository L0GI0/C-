// Proszę poprawic i uzupelnic kod funkcji main, zgodnie z
// komentarzami umieszczonymi w ciele funkcji main. Przykładowy wynik
// dzialania programu umieszczony jest w komentarzu pod funkcją main

// Istniejacy kod nalezy poprwic, to znaczy wprowadzic jak najmniejsza
// liczbe zmian, aby zaczal on dzialac poprawnie

// Linie opatrzone komentarzem zabraniajacym je zmieniac, musza
// wykonac sie w niezmienionej formie.

// Nie wolno uzywac funkcji, caly program musi byc napisany tylko w
// funkcji main. 

// Ostateczny program powinien byc przyjazny dla uzytkownika i
// programisty (miec czytelny i dobrze napisany kod)

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Szeregi

// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// /home/dokt/dog/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_01

int main ()
{
  cout<<"Poczatek programu"<<endl; // tej linii nie wolno zmieniać

  // TODO: wczytanie z klawiatury ile kolejnych wyrazow ciagu arytmetycznego nalezy wypisac
  cout<<"Ile kolejnych wyrazow ciagu arytmetycznego wypisac?"<<endl; // tej linii nie wolno zmieniać
  int liczbaWyrazow;

  // TODO: wypisanie podanej przez uzytkownika liczby kolejnych
  // wyrazow ciagu arytmetycznego o roznicy "roznica" i pierwszym
  // wyrazie 1, jezeli wsrod wypisanych wyrazow pojawi sie liczba, z
  // przedzialu [20, 30) to przed nia i za nia wstawiane sa gwiazdki
  // np.  1 6.5 12 17.5 *23* *28.5* 34 39.5 45
  float roznica = 5.5;
  cout<<"----- ciag arytmetyczny o roznicy "<<roznicy<<" -----\n"; // tej linii nie wolno zmieniać
  for (int i = 1; i < 1 + liczbaWyrazow*roznica; i += roznica) {
    int dzisietne = i/10;
    if (dziesietne = 2)
      cout <<"*"<<i<<"* ";
    else
      cout <<i<<" ";
  }
  cout<<endl;

  // TODO: wypisanie podanej przez uzytkownika liczby wyrazow ciagu arytmetycznego o roznicy 1,
  // pierwszy wyraz ciagu wynosi 9
  cout<<"----- ciag arytmetyczny o roznicy 1 i pierwszym wyrazie rownym 9  -----\n"; // tej linii nie wolno zmieniać

  // TODO: wypisanie tych samych wyrazow w systemie szesnastkowym
  // liczba szesnastkowa powinna być wypisana od tyłu, to znaczy 16 = 01, 164 = 4A
  cout<<"- to samo w systemie szesnastkowym -\n"; // tej linii nie wolno zmieniać

  // TODO: wypisanie podanej przez uzytkownika liczby pierwszych wyrazow ciagu geometrycznego o ilorazie 2,
  // pierwszy wyraz ciagu wynosi 1
  cout<<"----- ciag geometyczny o ilorazie 2 i pierwszym wyrazie rownym 1  -----\n"; // tej linii nie wolno zmieniać


  // TODO: wypisanie tych samych wyrazow co powyzej w systemie binarnym
  // liczba binarna powinna być wypisana od tyłu, to znaczy 4 = 001, 10 = 0101
  cout<<"- to samo w systemie binarnym -\n"; // tej linii nie wolno zmieniać
  
  // TODO: wczytanie z klawiatury liczby całkowitej podanej przez uzytkownika do zmiennej start
  cout<<"Ktory wyraz ciagu geometrycznego wypisac jako pierwszy?"<<endl; // tej linii nie wolno zmieniać
  int start
  
  
  // TODO: wypisanie pieciu kolejnych wyrazow ciagu geometrycznego, o
  // ilorazie q=0.1 i pierwszym wyrazie rownym 1, zaczynajac od wyrazu
  // start
  cout<<"----- 5 kolejnych wyrazów ciągu geometycznego -----\n"; // tej linii nie wolno zmieniać
  int indeksCiaguGeom;
  float wyrazCiaguGeom = 1;
  int koniec = start + 5;
  cout <<"wyrazy ciagu geometrycznego od "<<start<<" do "<<koniec<<"\n";
  for (int indeksCiaguGeom = 0; indeksCiaguGeom < start+5; ++indeksCiaguGeom); {
    wyrazCiaguGeom *= 0.1;
    if (indeksCiaguGeom >= start)
      cout <<wyrazCiaguGeom<<"\t";
  }
  cout <<"\n";

  // wypisanie tych samych wyrazow co powyzej w odwrotnej kolejnosci
  cout<<"- to samo od tylu -\n";
  for (; indeksCiaguGeom >= start; --indeksCiaguGeom) // tej linii nie wolno zmienić
    cout <<(wyrazCiaguGeom /=0.1)<<"\t";			  // tej linii nie wolno zmienić
  cout <<"\n";
  

  // TODO: wypisanie podanej przez uzytkownika na poczatku programu
  // liczby wyrazow SZEREGU geometrycznego o pierwszym wyrazie rownym
  // 1 i ilorazie rownym 0.2 (kolejne wyrazy szeregu geometrycznego sa
  // suma odpowiednich wyrazow ciagu geometrycznego), wyrazy szeregu
  // nalezy obliczyc z definicji
  cout<<"-----  szereg geometryczny -----\n"; // tej linii nie wolno zmieniać
  
  
  // TODO: wczytanie liczby całkowitej podanej przez uzytkownika 
  cout<<"Ktory wyraz szeregu geometrycznego wypisac jako pierwszy?"<<endl; // tej linii nie wolno zmieniać
  
  // TODO: wczytanie liczby całkowitej podanej przez uzytkownika
  cout<<"Na ktorym  wyrazie szeregu geometrycznego skonczyc?"<<endl; // tej linii nie wolno zmieniać

  // TODO: wypisanie kolejnych wyrazow (zaczynając od podanego przez
  // użytkownika wyrazu, a konczac na podanym przez użytkownika
  // wyrazie) szeregu geometrycznego o pierwszym wyrazie rownym 1 i
  // ilorazie rownym 0.2
  cout<<"-----  kolejne wyrazy szeregu geometrycznego -----\n"; // tej linii nie wolno zmieniać

  // TODO: wypisanie podanej przez uzytkownika na poczatku programu
  // liczby wyrazow ciagu arytmetycznego o roznicy 2, pierwszy wyraz
  // ciagu wynosi 2, z pominieciem wyrazow podzielnych przez 3
  cout<<"-----  kolejne wyrazy ciagu arytmetycznego z pomienieciem podzielnych przez 3 -----\n"; // tej linii nie wolno zmieniać
    

  // TODO: zapytanie uzytkownika czy rozpzoczac program od nowa,
  // powtarzac pytanie dopoki uzytkownik, nie wprowadzi liczby 1 lub 2
  // (zalozyc, ze uzytkownik moze wpisac tylko liczby calkowite)
  cout <<"Czy zaczac od nowa:\n1-tak\n2-nie\n"; // tej linii nie wolno zmieniać
  
  // TODO: rozpoczac program od nowa, jezeli uzytkownik wprowadzil 1,
  // zakonczyc program jezeli uzytkownik wprowadzil 2
}

/* Przykladowy wynik dzialania programu
Poczatek programu
Ile kolejnych wyrazow ciagu arytmetycznego wypisac?
7
----- ciag arytmetyczny o roznicy 0.1 -----
1 6.5 12 17.5 *23* *28.5* 34 
----- ciag arytmetyczny o roznicy 1 i pierwszym wyrazie rownym 9  -----
9 10 11 12 13 14 15 
- to samo w systemie szesnastkowym -
9 A B C D E F 
----- ciag geometyczny o ilorazie 2 i pierwszym wyrazie rownym 1  -----
1 2 4 8 16 32 64 
- to samo w systemie binarnym -
1 01 001 0001 00001 000001 0000001 
Ktory wyraz ciagu geometrycznego wypisac jako pierwszy
3
----- 5 kolejnych wyrazów ciągu geometycznego -----
wyrazy ciagu geometrycznego od 3 do 8
0.01 0.001 0.0001 1e-05 1e-06
- to samo od tylu -
1e-061e-050.00010.0010.010.1
-----  szereg geometryczny -----
1 1.2 1.24 1.248 1.2496 1.24992 1.24998 
Ktory wyraz szeregu geometrycznego wypisac jako pierwszy?
3
Na ktorym  wyrazie szeregu geometrycznego skonczyc?
6
-----  kolejne wyrazy szeregu geometrycznego -----
1.24 1.248 1.2496 1.24992 
-----  kolejne wyrazy ciagu arytmetycznego z pomienieciem podzielnych przez 3 -----
2 4 8 10 14 16 20 
Czy zaczac od nowa:
1-tak
2-nie
0
Czy zaczac od nowa:
1-tak
2-nie
2
*/
