#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

//Uwaga do zadań 1-3:
//Rozwiązania muszą być dostarczone w zwykłych plikach tekstowych (plain text, utf8).
//Wszelkie treści nie będące kodem muszą być wykomentowane.
//Kompilator: g++ 4.9.0, wymagane opcje std=c++11

//gcc 4.9.2 compiler online
//http://rextester.com/YAVLW26827
//http://rextester.com/OZME60022

using namespace std;

//Zadanie 1
//Bazując na poniższym fragmencie kodu, uzupełnij funkcję countFullTimeEmployees,
//zliczającą pracowników zatrudnionych na pełen etat.

enum class EmploymentType { FullTime, PartTime };

struct Employee
{
    std::string firstName;
    std::string lastName;
    EmploymentType employmentType;
    unsigned int salary;
};

int countFullTimeEmployees(const std::vector <Employee> &employees)
{
    int fulltimeCount = 0;
    for( auto it = employees.begin(); it < employees.end(); it++)
    {
        if(it->employmentType == EmploymentType::FullTime)
            fulltimeCount++;
    }

    return fulltimeCount;
}


//Zadanie 2
//Uzupełnij funkcję countUniqueNumbers1 , zliczającą ilość unikalnych (takich, które
//występują dokładnie raz) liczb w przekazanej kolekcji.
int countUniqueNumbers1(const std::vector<int>& v)
{
// put your code here
}

int countUniqueNumbers1(std::vector<Items> v)
{
    std::sort(v.begin(), v.end()); // sort items
    std::unique unique;
    int uniqueCount = std::unique(v.begin(), v.end()) - v.begin(); // return number of unique
    return uniqueCount;
}

//Jaka jest złożoność czasowa Twojej funkcji?
//   O(n log n )

//Jaka jest jej złożoność pamięciowa?
// rozmiar wektora v

//Załóżmy, że przekazywana w parametrze kolekcja zawiera tylko liczby z zakresu [-1000,
//1000]. Zaproponuj jak najbardziej optymalną czasowo funkcję countUniqueNumbers2 ,
//wykorzystującą ten fakt i zliczającą unikalne liczby w kolekcji.


int countUniqueNumbers2(const std::vector<int>& v)
{
    std::sort(v.begin(), v.end());
    return uniqueCount = std::unique(v.begin(), v.end()) - v.begin();
// put your code here
}

//Jaka jest złożoność czasowa Twojej funkcji?
//   O(n log n )

//Jaka jest jej złożoność pamięciowa?
// rozmiar wektora v

//Zadanie 3
//Napisz funkcję, która przyjmuje 3 liczby całkowite z zakresu 0..2^32-1
//sprawdza czy można zbudować trójkąt z boków o takich długościach. Jakie testy można wykonać?
//Podaj przypadki testowe.

bool checkTriangle(int a, int b int c)
{
    if((a!=0) && (b!=0)&& (c!=0))
    {
        if((a + b > c) && (a + c > b) && (c + b > a))
            return 1;
        else
            return 0;
    }
    return 0;
}

//Przypadki testowe
//1 a lub b lub c równe 0 sprawdz ze wynik assert FALSE

//2 a+b <c wynik assert FALSE
//3 a + b > c) && (a + c > b) && (c + b > a))&& (a!=0) && (b!=0)&& (c!=0) wynik assert TRUE

//Zadanie 4
//Proszę wykonać Code Review poniższego kodu.

unsigned int getNumberOfEmployeesEarningAtLeast(const unsigned int& minimumSalary)
{
std::string query = "SELECT COUNT(*) FROM 'Employee' WHERE `salary` >= " + std::to_string(minimumSalary);
mysql_real_query(g_database, query.c_str(), query.length());

auto res = mysql_store_result(g_database);
auto row = mysql_fetch_row(res);
return boost::lexical_cast<unsigned int>(res[0]);
}

//Code review

unsigned int getNumberOfEmployeesEarningAtLeast(const unsigned int& minimumSalary)
{
std::string query = "SELECT COUNT(*) FROM 'Employee' WHERE `salary` >= " + std::to_string(minimumSalary);
mysql_real_query(g_database, query.c_str(), query.length());  // mysql_real_query return 1 if success 0 if failure

auto res = mysql_store_result(g_database); // condition checking if my_sql_real_query was 1 then proceed
auto row = mysql_fetch_row(res);    // unused variable row
return boost::lexical_cast<unsigned int>(res[0]);
}

//Co trzeba zmienić, jeśli chcemy otrzymać liczbę pracowników zarabiających minimum
//podaną kwotę oraz będących na pełnym etacie.

//dodac AND WHERE EMPLYMENTTYPE = PERMANENT

//Jakie testy trzeba wykonać? Jakie przypadki testowe rozważyć?
//
