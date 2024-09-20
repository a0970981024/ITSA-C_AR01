// ITSA-C_AR01.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> array; // 使用 vector 儲存陣列
    int value;

    //cout << "請輸入一維陣列的元素（最多100個，按 Enter 鍵結束輸入）:" << endl;

    // 讀取最多100個元素
    while (array.size() < 100) {
        cin >> value; // 讀取整數
                
        array.push_back(value); // 將數字加入陣列
        if (cin.get() == '\n')  break;

    }

    

    // 反轉陣列
    //cout << "反轉後的陣列: ";
    for (int i = array.size() - 1; i >= 0; i--) {
        cout << array[i]; // 輸出反轉的元素
        if (i != 0) {
            cout << " "; // 元素之間用空格分隔
        }
    }
    cout << endl; // 最後換行

    return 0;

}
