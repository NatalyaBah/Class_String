#include <iostream>
#include "String.h"
using namespace std;

int main()
{    
    char* string1 = new char[]{"Hello! How are you?"};
    char* string2 = new char[] {"Thanks! And you?"};
    String str(string1);
    String str2(string2);
    str.print();
    cout << endl;
    cout << "Line size = " << str.size() << endl;;
    /*int n;
    cout << "From how many elements to output a new line : ";
    cin >> n;
    if(str.size() >=n) str.reSize(n);
    else
    {
        char c;
        cout << "Input symbol you wish to add to your string: ";
        cin >> c;
        str.reSize(n, c);
    }
    cout << endl;   
    str.print();*/

  /*  str.clear();
    cout << endl << "The size of your string is: " << str.size();
    str.print();*/

  /*  cout << "0 - your string is full, 1 - string is empty: " << str.empty();
    str.print();*/

   /* char a;
    cout << "Enter character to add";
    str.push_back(a);
    str.print();*/

   /* cout << "What do you wish to do with your string?" << endl;
    cout << "Input:"
        "\n - \"1\" if you want to add some similiar symbols;"
        "\n - \"2\" if you want to add some string;"
        "\n - \"3\" if you want to add several symbols of some string beginning from index." << endl;
    int q;
    cout << "Choose one of the variants (1-3): ";
    cin >> q;
    switch (q)
    {
    case 1:
        int n;
        char b;
        cout << "Input symbol you wish to add to the string: ";
        cin >> b;
        cout << "Input the amount of symbols: ";
        cin >> n;
        str.append(n, b);
        str.print();
        break;
    case 2:
        str.append(str2);
        str.print();
        break;
    case 3:
        int index;
        int quant;
        cout << "Input index, which you want to copy the second string from (from 0 to " << str2.size() << "): ";
        cin >> index;
        cout << "Input quantity, how many elements you want to copy from the second string (max: " << str2.size() - index << "): ";
        cin >> quant;
        str.append(str2, index, quant);
        str.print();
        break;
    }*/

    /*cout << "What do you wish to do with your string?" << endl;
    cout << "Input:"
        "\n - \"1\" if you want to delete last elements from index;"
        "\n - \"2\" if you want to delete some elements." << endl;
    int q;
    int index;
    cout << "Choose one of the variants (1-2): ";
    cin >> q;
    switch (q)
    {
    case 1:
        cout << "Input index you want to delete your string from (from 0 to " << str.size() << "): ";
        cin >> index;
        str.erase(index);
        cout << endl << "Your new string:";
        str.print();
        break;

    case 2:
        cout << "Input index you want to delete your string from (from 0 to " << str.size() << "): ";
        cin >> index;
        int quant;
        cout << "Input quantity of symbols you wish to delete: ";
        cin >> quant;
        str.erase(index, quant);
        str.print();
        break;
    }*/

    /*int index, index2, quant;
    char symbol;
    cout << "What do you wish to do with your string?" << endl;
    cout << "Input:"
        "\n - \"1\" if you want to input several similiar symbols;"
        "\n - \"2\" if you want to input another string from any symbol of the first string;"
        "\n - \"3\" if you want to input several symbols of another string;" << endl;
    int q;
    cout << "Choose one of the variants (1-3): ";
    cin >> q;
    switch (q)
    {
        case 1:
            cout << "Input index you want to input your symbol from (from 0 to " << str.size() << "): ";
            cin >> index;
            cout << "Input quantity of symbols you wish to add: ";
            cin >> quant;
            cout << "Input symbol you wish to add: ";
            cin >> symbol;
            str.insert(index, quant, symbol);
            str.print();
            break;
        case 2:
            cout << "Input index you want to input your string from (from 0 to " << str.size() << "): ";
            cin >> index;
            str.insert(str2, index);
            str.print();
            break;
        case 3:
            cout << "Input index you want to input your string from (from 0 to " << str.size() << "): ";
            cin >> index;
            cout << "Input index you want to copy another string from (from 0 to " << str2.size() << "): ";
            cin >> index2;
            cout << "Input how many elements you wish to copy from another string: ";
            cin >> quant;
            str.insert(str2, index, index2, quant);
            str.print();
            break;
    }*/
    
     /*   String str3;
        int index, q;

        cout << "What do you wish to do with your string?" << endl;
        cout << "Input:"
        "\n - \"1\" if you want to get substring beginning from index and to the end;"
        "\n - \"2\" if you want to get substring beginning from index to some quantity." << endl;
        cin >> q;
        switch (q)
        {
        case 1:
            cout << "Input index you want to make new string (from 0 to " << str.size() << "): ";
            cin >> index;

            str3.substr(str, index);
            str3.print();
            break;
        case 2:
            int quant;
            cout << "Input index you want to make new string (from 0 to " << str.size() << "): ";
            cin >> index;
            cout << "Input quantity of symbols you wish to make new string: ";
            cin >> quant;
            str3.substr(str, index, quant);
            str3.print();
            break;
        }*/

    /*int q;
    cout << "What do you wish to do with your string?" << endl;
    cout << "Input:"
    "\n - \"1\" if you want to get string with some replaced symbols by entered symbol;"
    "\n - \"2\" if you want to get string with some replaced symbols by another string;"
    "\n - \"3\" if you want to get string with some replaced symbols by another string from some index and quantity of symbols." << endl;
    cin >> q;
    int index, quant1;
    switch (q)
    {
    case 1:
        int quant2;
        char s;
        cout << "Input index you wish to replace symbols (from 0 to " << str.size() << ") : ";
        cin >> index;
        cout << "Input quantity of symbols you wish to replace: ";
        cin >> quant1;
        cout << "Input symbol you wish to be placed: ";
        cin >> s;
        cout << "Input quantity of symbols you wish to be placed: ";
        cin >> quant2;
        str.replace(index, quant1, quant2, s);
        str.print();
        break;
    case 2:
        cout << "Input index you wish to replace symbols (from 0 to " << str.size() << ") : ";
        cin >> index;
        cout << "Input quantity of symbols you wish to replace: ";
        cin >> quant1;
        str.replace(index, quant1, str2);
        str.print();
    case 3:
        int index2, quant3;
        cout << "Input index you wish to replace symbols (from 0 to " << str.size() << ") : ";
        cin >> index;
        cout << "Input quantity of symbols you wish to replace: ";
        cin >> quant1;
        cout << "Input index you wish to replace symbols (from 0 to " << str2.size() << ") : ";
        cin >> index2;
        cout << "Input quantity of symbols you wish to take from the second string: ";
        cin >> quant3;
        str.replace(index, quant1, str2, index2, quant3);
        str.print();
    }*/

    /*char* string4 = new char[] {"you"};
    String str4(string4);

    int q;
    int index = 0;
    cout << "What do you wish to find?" << endl;
    cout << "Input:"
    "\n - \"1\" if you want to get index of the first similiar symbol;"
    "\n - \"2\" if you want to get index of the first several similiar symbols." << endl;
    cin >> q;
    switch (q)
    {
    case 1:
        cout << "Searching for: " << endl;
        str4.print();
        cout << "If you wish to search from some index, please input value (from 0 to " << str.size() << "): ";
        cin >> index;
        cout << "Result of searching is: " << str.find(str4, index);
    case 2:
        int quant;
        cout << "Searching for: " << endl;
        str4.print();
        cout << "Input index you want to search (from 0 to " << str.size() << "): ";
        cin >> index;
        cout << "Input quantity if symbols you wish to search: ";
        cin >> quant;
        cout << "Result of searching is: " << str.find(str4, index, quant);
    }*/

 /*   char* string5 = new char[] {"are"};
    String str5(string5);
    int index, q;
    cout << "What do you wish to find?" << endl;
    cout << "Input:"
    "\n - \"1\" if you want to get index of the first similiar symbol;"
    "\n - \"2\" if you want to get index of the first several similiar symbols." << endl;
    cin >> q;
    switch (q)
    {
    case 1:
        cout << "Searching for: " << endl;
        str5.print();
        cout << "If you wish to search from some index, please input value (from 0 to " << str.size() << "): ";
        cin >> index;
        cout << "Result of searching is: " << str.rfind(str5, index) << endl;
        break;
    case 2:
        cout << "Searching for: " << endl;
        str5.print();
        cout << "If you wish to search from some index, please input value (from 0 to " << str.size() << "): ";
        cin >> index;
        int quant;
        cout << "How many symbols you wish to find: ";
        cin >> quant;
        cout << "Result of searching is: " << str.rfind(str5, index, quant) << endl;
        break;
    }*/

    //char* string6 = new char[] {"you?"};
    //String str6(string6);
    //int index;
    //cout << "Searching for the index of the first symbol from string: ";
    //str6.print();
    //cout << "Please input index (from 0 to " << str.size() - 1 << "), if you wish to search from some index: ";
    //cin >> index;
    //cout << endl << "First index of the same symbol in the original and searching strings: " << str.find_first_of(str6, index);

    /*char* string7 = new char[] {"Why?"};
    String str7(string7);
    int index;
    cout << "Searching for the index of the first symbol from string: ";
    str7.print();
    cout << "Please input index (from 0 to " << str.size() - 1 << "), if you wish to search from some index: ";
    cin >> index;
    cout << endl << "Last index of the same symbol in the original and searching strings: " << str.find_last_of(str7, index);*/

    

   /* char* string8 = new char[] {"Hello! How is Tom?"};
    String str8(string8);
    int index;
    cout << "Searching for the index of the first mismatched symbol from string: ";
    str8.print();
    cout << "Please input index (from 0 to " << str.size() - 1 << "), if you wish to search from some index: ";
    cin >> index;
    cout << endl << "First index of different symbol in the original string from another: " << str.find_first_not_of(str8, index);*/

    /*char* string9 = new char[] {"Are you thinking?"};
    String str9(string9);
    int index;

    cout << "Searching for the index of the first mismatched symbol from string: ";
    str9.print();
    cout << "Please input index (from 0 to " << str.size() - 1 << "), if you wish to search from some index: ";
    cin >> index;
    cout << endl << "Last index of different symbol in the original string from another: " << str.find_last_not_of(str9, index);*/

   /* cout << "Your first string is: " << str.c_str() << endl;
    cout << "Your second string is: " << str2.c_str() << endl;*/
}
