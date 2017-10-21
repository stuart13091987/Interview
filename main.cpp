#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

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

countUniqueNumbers1(std::vector<Items> v)
{
    std::sort(v.begin(), v.end());
    return uniqueCount = std::unique(v.begin(), v.end()) - v.begin();
}

//Jaka jest złożoność czasowa Twojej funkcji? Jaka jest jej złożoność pamięciowa?
//Załóżmy, że przekazywana w parametrze kolekcja zawiera tylko liczby z zakresu [-1000,
//1000]. Zaproponuj jak najbardziej optymalną czasowo funkcję countUniqueNumbers2 ,
//wykorzystującą ten fakt i zliczającą unikalne liczby w kolekcji.

//złożoność czasowa   O(n log n )

int countUniqueNumbers2(const std::vector<int>& v)
{
    std::sort(v.begin(), v.end());
    return uniqueCount = std::unique(v.begin(), v.end()) - v.begin();
// put your code here
}

//Jaka jest złożoność czasowa Twojej funkcji? Jaka jest jej złożoność pamięciowa?

//Zadanie 3
//Napisz funkcję, która przyjmuje 3 liczby całkowite z zakresu 0..232

//-1 i sprawdza czy
//można zbudować trójkąt z boków o takich długościach. Jakie testy można wykonać?
//Podaj przypadki testowe.


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

//Co trzeba zmienić, jeśli chcemy otrzymać liczbę pracowników zarabiających minimum
//podaną kwotę oraz będących na pełnym etacie. Jakie testy trzeba wykonać? Jakie
//przypadki testowe rozważyć?

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
