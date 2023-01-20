#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <Windows.h>

using namespace std;

void main()
{
    //setlocale(LC_ALL, "rus");

    // --------------------------------------------------------------------------------------------------------------- \\

    /*
    Дан одномерный массив, проинициализирован целыми значениями.
    Переписать в другой массив только положительные значения.
    исходный массив: 25, -125, 35 , 0, -36, -5, 3, -28, -1, 3
    результ. массив: 25, 35, 3, 3
    */

    /*
    Дан одномерный массив, проинициализирован целыми значениями.
    Переписать в другой массив только положительные значения.
    Переписать в отдельный массив только отрицательные значения.

    исходный массив: 25, -125, 35 , 0, -36, -5, 3, -28, -1, 3
    массив положительных значений: 25, 35, 0, 3, 3
    массив отрицательных значений: -125, -36,  -5,  -28,  -1
    */

    //const int S = 10;
    //int m[S]{ 25, -125, 35 , 0, -36, -5, 3, -28, -1, 3 };
    //int copy[S], k = 0, copy_neg[S], n = 0; // Массив для копии

    //cout << "\nИсходный массив: \n";

    //for (int i = 0; i < S; i++)
    //{
    //    cout << m[i] << " ";
    //    if (m[i] > 0)
    //    {
    //        copy[k++] = m[i];
    //    }
    //    if (m[i] < 0)
    //    {
    //        copy_neg[n++] = m[i];
    //    }
    //}

    //if (k)
    //{
    //    cout << "\nМассив положительных значений: \n";
    //    for (int i = 0; i < k; i++)
    //    {
    //        cout << copy[i] << " ";
    //    }
    //}
    //if (n)
    //{
    //    cout << "\nМассив отрицательных значений: \n";
    //    for (int i = 0; i < n; i++)
    //    {
    //        cout << copy_neg[i] << " ";
    //    }
    //}
    //else {
    //    cout << "\nВ исходном массиве положительных значений нетy! \n";
    //}


    // -------------------------------------------------------------------------------------------------------------------------- \\

    /*
    Посчитать количество четных элементов(значений).
    Вывести на экран индексы четных элементов(значений)
    */

    //const int S = 10;
    //int m[S]{ 25, -125, 35 , 0, -36, -5, 3, -28, -1, 3 }, even = 0;

    //for (int i = 0; i < S; i++)
    //{
    //    if (m[i] % 2 == 0)
    //    {
    //        even++;
    //        cout << i << " ";
    //    }
    //}

    //if (even)
    //{
    //    cout << "\nКоличество четных знгачений в массиве: " << even;
    //}
    //else {
    //    cout << "\nЧетных значений в массиве нет";
    //}



    // -------------------------------------------------------------------------------------------------------------------------- \\

    /*
    В массив  записано N целых чисел.
    Из этого массива получить новый массив, переписав в него
    порядковые номера положительных элементов исходного массива .
    Полученный массив  вывести на экран.

    //26, -125, 35 , 0, -36, 5, 3, -28, -1, 3
    //0    1     2   3   4   5  6   7   8   9
    // Индексы положительных значений: 0  2  3  5  6  9
    // Порядковые номера положительных значений: 1  3  4  6  7  10
    */

    //const int S = 10;
    //int m[S]{ 2, -125, 35 , 0, -36, 5, 3, -28, -1, 3 }, p = 0, copy[S];

    //cout << "\nПорядковый номер положительных значений: ";

    //for (int i = 0; i < S; i++)
    //{
    //    if (m[i] >= 0)
    //    {
    //        cout << i + 1 << " ";
    //        copy[p++] = i + 1;
    //    }
    //}

    //cout << endl;

    //cout << "\nПорядковый номер положительных значений из массива: ";
    //for (int i = 0; i < p; i++)
    //{
    //    cout << " " << copy[i];
    //}


    // -------------------------------------------------------------------------------------------------------------------------- \\

    /*
    Написать программу, которая определяет,
    является ли одномерный массив палиндромом.

    Размер массива может может быть разным(N).
    */
    
    //const int S = 7;
    //int mas[S]{ -245, 69, 782 , 54, 782, 69, -245 };
    //bool p = true; // Пусть массив палиндром

    //// Вариант 1 - Двух счетчиков.
    //for (int i = 0, j = S - 1; i < j; i++, j--)
    //{
    //    if (mas[i] != mas[j])
    //    {
    //        p = false;
    //        break;
    //    }
    //}

    //if (p)
    //{
    //    cout << "\nМассив является палиндромом";
    //}
    //else {
    //    cout << "\nМассив не является палиндромом";
    //}


    //// Вариант 1 - Использование 1 счетчика.
    //for (int i = 0; i < S / 2; i++)
    //{
    //    if (mas[i] != mas[S - i - 1])
    //    {
    //        p = false;
    //        break;
    //    }
    //}

    //if (p)
    //{
    //    cout << "\nМассив является палиндромом";
    //}
    //else {
    //    cout << "\nМассив не является палиндромом";
    //}



     // -------------------------------------------------------------------------------------------------------------------------- \\

    /*Объявить массив целого типа размером N элементов и сразу проинициализировать
    (положительными, отрицательными, нулевыми значениями).
    Написать программу, которая определяет:
    + максимальный элемент массива
    + минимальный элемент массива
    + индексы максимального и минимального элементов
    + количество повторений минимального элемента
    + обменивает максимальное и минимальное значения местами
    */

    const int S = 10;
    int m[S]{ 2, -125, 35 , 0, -125, 5, 300, -28, -1, 3 }, max, min, index_max, index_min, min_count;

    max = m[0];
    index_max = 0;
    min = m[0];
    min_count = 0;


    for (int i = 0; i < S; i++)
    {
        max < m[i] ? max = m[i], index_max = i : max;
        min > m[i] ? min = m[i], index_min = i : min;
    }

    for (int i = 0; i < S; i++)
    {
        min == m[i] ? min_count++ : min_count;  
    }

    //arr[i] % 2 == 0 ? even = true : even = false;
    //i % 2 == 0 ? index_even = true : index_even = false;

    //even&& index_even ? count_even_and_even_index++ : count_even_and_even_index;

    cout << "\nМаксимальное значение массива: " << max;
    cout << "\nИндекс максимального значения: " << index_max;
    cout << endl << endl;
    cout << "\nМинимальное значение массива: " << min;
    cout << "\nИндекс минимального значения: " << index_min;
    cout << "\nКоличество повторений минимального значения: " << min_count;

    cout << "\nВывод массива до обмена max и  min местами: \n";
    for (int i = 0; i < S; i++)
    {
        cout << m[i] << " ";
    }

    //int t;
    //t = m[index_max];
    //m[index_max] = m[index_min];
    //m[index_min] = t;

    m[index_max] = min;
    m[index_min] = max;

    cout << "\nВывод массива после обмена max и  min местами: \n";
    for (int i = 0; i < S; i++)
    {
        cout << m[i] << " ";
    }

    _getch();
}