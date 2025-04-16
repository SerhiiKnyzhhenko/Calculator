#ifndef FUNC_H
#define FUNC_H

#include <vector>
#include <string>
#include <sstream>
#include <QDebug>
#include <QCoreApplication>

bool hasFractionalPart(long double);

long double add(long double, long double);

long double subtr(long double, long double );

long double mult(long double, long double);

long double devide(long double, long double);

long double exponentiation(long double , long double );

long double convert_to(const std::string&);


class Environment
{
private:
    int bracket;
    long double res;
    std::string str;
    std::vector<long double> arr_num;
    std::vector<char> arr_oper;


public:

    Environment() : bracket(0), res(0.0), str(""), arr_num{0}, arr_oper{}
    {

    }

    long double result();
    long double result(std::vector<long double>&, std::vector<char>&);
    void str_parsing();
    void str_parsing(std::vector<long double>&, std::vector<char>&, const std::string&);
    void strModify(char);
    long double& get_res();
    std::string& get_str();
    std::vector<long double>& get_arr_num();
    std::vector<char>& get_arr_oper();
    int& get_bracket();

};





#endif // FUNC_H
