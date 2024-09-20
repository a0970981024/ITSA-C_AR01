// ITSA-C_AR01.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
#include "ITSA-C_AR01.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
void input(vector<int>& array,int& value) {
    while (array.size() < 100) {
        cin >> value; // 讀取整數

        array.push_back(value); // 將數字加入陣列
        if (cin.get() == '\n')  break;

    }
}

void output(vector<int>& array) {
    for (int i = array.size() - 1; i >= 0; i--) {
        cout << array[i]; // 輸出反轉的元素
        if (i != 0) {
            cout << " "; // 元素之間用空格分隔
        }
    }
}
int main()
{
    vector<int> array; // 使用 vector 儲存陣列
    int value=0;

    input(array,value);
    output(array);
    cout << endl; // 最後換行

    return 0;

}
