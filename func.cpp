#include "func.h"
#include <sstream>

bool hasFractionalPart(long double num) {
    return num != std::floor(num);
}

inline long double add(long double a, long double b)
{
    return a + b;
}

inline long double subtr(long double a, long double b)
{
    return a - b;
}

inline long double mult(long double a, long double b)
{
    return a * b;
}

inline long double devide(long double a, long double b)
{
    return a / b;
}

inline long double exponentiation(long double a, long double b)
{
    long double j = a;
    while (b != 1)
    {
        a *= j;
        --b;
    }
    return a;
}

inline long double convert_to(const std::string& str)
{
    std::istringstream ss(str);

    long double num;

    ss >> num;

    return num;
}

long double Environment::result()
{
    long double res = 0;
    int i = 0;
    int j = 0;

    while (j < arr_oper.size())
    {
        if (arr_oper[j] == 'x')
        {
            arr_num[i + 1] = mult(arr_num[i], arr_num[i + 1]);
            arr_num.erase(arr_num.begin() + i);
            arr_oper.erase(arr_oper.begin() + j);
            continue;
        }
        if (arr_oper[j] == '/')
        {
            arr_num[i + 1] = devide(arr_num[i], arr_num[i + 1]);
            arr_num.erase(arr_num.begin() + i);
            arr_oper.erase(arr_oper.begin() + j);
            continue;
        }
        if (arr_oper[j] == '^')
        {
            arr_num[i + 1] = exponentiation(arr_num[i], arr_num[i + 1]);
            arr_num.erase(arr_num.begin() + i);
            arr_oper.erase(arr_oper.begin() + j);
            continue;
        }
        ++i;
        ++j;
    }

    i = 0;
    j = 0;

    while (j < arr_oper.size())
    {
        if (arr_oper[j] == '+')
        {
            arr_num[i + 1] = add(arr_num[i], arr_num[i + 1]);
        }
        if (arr_oper[j] == '-')
        {
            arr_num[i + 1] = subtr(arr_num[i], arr_num[i + 1]);
        }
        if (arr_oper[j] == '=')
        {
            res = res + arr_num[i];
            return res;
        }
        ++i;
        ++j;
    }
    res = arr_num[arr_num.size() - 1];
    return res;
}

long double Environment::result(std::vector<long double>& Arr_num
                           , std::vector<char>& Arr_oper)
{
    long double res = 0;
    int i = 0;
    int j = 0;

    while (j < Arr_oper.size())
    {
        if (Arr_oper[j] == 'x')
        {
            Arr_num[i + 1] = mult(Arr_num[i], Arr_num[i + 1]);
            Arr_num.erase(Arr_num.begin() + i);
            Arr_oper.erase(Arr_oper.begin() + j);
            continue;
        }
        if (Arr_oper[j] == '/')
        {
            Arr_num[i + 1] = devide(Arr_num[i], Arr_num[i + 1]);
            Arr_num.erase(Arr_num.begin() + i);
            Arr_oper.erase(Arr_oper.begin() + j);
            continue;
        }
        if (Arr_oper[j] == '^')
        {
            Arr_num[i + 1] = exponentiation(Arr_num[i], Arr_num[i + 1]);
            Arr_num.erase(Arr_num.begin() + i);
            Arr_oper.erase(Arr_oper.begin() + j);
            continue;
        }
        ++i;
        ++j;
    }

    i = 0;
    j = 0;

    while (j < Arr_oper.size())
    {
        if (Arr_oper[j] == '+')
        {
            Arr_num[i + 1] = add(Arr_num[i], Arr_num[i + 1]);
        }
        if (Arr_oper[j] == '-')
        {
            Arr_num[i + 1] = subtr(Arr_num[i], Arr_num[i + 1]);
        }
        if (Arr_oper[j] == '=')
        {
            res = res + Arr_num[i];
            return res;
        }
        ++i;
        ++j;
    }
    res = Arr_num[Arr_num.size() - 1];
    return res;
}

void Environment::str_parsing()
{
    arr_oper.clear();
    arr_num.clear();
    bool open_bracket = false;
    int j = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == 'x' || str[i] == '/' || str[i] == '^')
        {
            if (str[i] == '-')
            {
                if (str[i + 1] == '(')
                {
                    open_bracket = true;
                    if(i != 0)
                        arr_oper.push_back('+');
                    if (i > 0)
                    {
                        long double num = convert_to(str.substr(j, i - j));
                        arr_num.push_back(num);
                    }
                    j = i + 1;
                    continue;
                }
                if (i > 0)
                {
                    arr_oper.push_back('-');
                    long double num = convert_to(str.substr(j, i - j));
                    arr_num.push_back(num);
                    j = i + 1;
                    continue;
                }
            }
            if (str[i] == '-' && arr_num.size() == 0)
            {
                continue;
            }

            arr_oper.push_back(str[i]);
            if (str[i - 1] != ')')
            {
                long double num = convert_to(str.substr(j, i - j));
                arr_num.push_back(num);
            }

            j = i + 1;
            continue;
        }
        if (str[i] == '=')
        {
            arr_oper.push_back(str[i]);
            long double num = convert_to(str.substr(j, i - j));
            arr_num.push_back(num);
            j = i;
            continue;
        }
        if (i == str.length() - 1)
        {
            long double num = convert_to(str.substr(j, i - j + 1));
            arr_num.push_back(num);
            continue;
        }
        if (str[i] == '(')
        {
            int a = i + 1;
            long double res = 0;
            std::string str1 = "";
            std::vector<long double> arr_num1;
            std::vector<char> arr_oper1;
            int bracket_count = 1;

            while (bracket_count != 0)
            {
                ++i;
                if (str[i] == '(')
                    ++bracket_count;

                if (str[i] == ')')
                    --bracket_count;
            }


            str1 = str.substr(a, i - a);

            str_parsing(arr_num1, arr_oper1, str1);

            res = result(arr_num1, arr_oper1);
            if (open_bracket == true)
            {
                res = res * -1;
                open_bracket = false;
            }

            arr_num.push_back(res);
        }
    }
}

void Environment::str_parsing(std::vector<long double>& Arr_num
                              , std::vector<char>& Arr_oper
                              , const std::string& Str)
{
    bool open_bracket = false;
    int j = 0;
    for (int i = 0; i < Str.length(); ++i)
    {
        if (Str[i] == '+' || Str[i] == '-' || Str[i] == 'x' || Str[i] == '/' || Str[i] == '^')
        {
            if (Str[i] == '-')
            {
                if (Str[i + 1] == '(')
                {
                    open_bracket = true;
                    if(i != 0)
                        Arr_oper.push_back('+');
                    if (i > 0)
                    {
                        long double num = convert_to(Str.substr(j, i - j));
                        Arr_num.push_back(num);
                    }
                    j = i + 1;
                    continue;
                }
                if (i > 0)
                {
                    Arr_oper.push_back('-');
                    long double num = convert_to(Str.substr(j, i - j));
                    Arr_num.push_back(num);
                    j = i + 1;
                    continue;
                }
            }
            if (Str[i] == '-' && Arr_num.size() == 0)
            {
                continue;
            }

            Arr_oper.push_back(Str[i]);
            if (Str[i - 1] != ')')
            {
                long double num = convert_to(Str.substr(j, i - j));
                Arr_num.push_back(num);
            }

            j = i + 1;
            continue;
        }
        if (Str[i] == '=')
        {
            Arr_oper.push_back(Str[i]);
            long double num = convert_to(Str.substr(j, i - j));
            Arr_num.push_back(num);
            j = i;
            continue;
        }
        if (i == Str.length() - 1)
        {
            long double num = convert_to(Str.substr(j, i - j + 1));
            Arr_num.push_back(num);
            continue;
        }
        if (Str[i] == '(')
        {
            int a = i + 1;
            long double Res = 0;
            std::string Str1 = "";
            std::vector<long double> Arr_num1;
            std::vector<char> Arr_oper1;
            int bracket_count = 1;

            while (bracket_count != 0)
            {
                ++i;
                if (Str[i] == '(')
                    ++bracket_count;

                if (Str[i] == ')')
                    --bracket_count;
            }

            Str1 = Str.substr(a, i - a);

            str_parsing(Arr_num1, Arr_oper1, Str1);

            Res = result(Arr_num1, Arr_oper1);
            if (open_bracket == true)
            {
                Res = Res * -1;
                open_bracket = false;
            }

            Arr_num.push_back(Res);
        }
    }
}


void Environment::strModify(char c)
{
    if (c == 'b')
        str.pop_back();
    else
        str += c;
}

long double& Environment::get_res()
{
    return res;
}

std::string& Environment::get_str()
{
    return str;
}

std::vector<long double>& Environment::get_arr_num()
{
    return arr_num;
}
std::vector<char>& Environment::get_arr_oper()
{
    return arr_oper;
}

int& Environment::get_bracket()
{
    return bracket;
}

