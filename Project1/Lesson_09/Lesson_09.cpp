// Lesson_09.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //一.迭代器简介
    //迭代器是一种遍历容器内元素的数据类型，这种数据类型感觉有点像指针
    //可理解为迭代器用来指向容器中的某个元素

    //二.容器的迭代器类型
    //vector<int> iv = { 100, 200, 300 };
    //vector<int>::iterator iter;     //定义迭代器

    ////三.迭代器begin(), end()操作，反向迭代器rbegin()/rend()操作
    //    //begin()/end() : 返回迭代类型
    ////a).begin()返回一个迭代器类型
    //iter = iv.begin();  //如果容器中有元素，则begin返回的迭代器指向的是容器中的第一个元素

    ////b). end()返回一个迭代器
    //iter = iv.end();    //end()返回的迭代器指向的并不是末端元素，而是末端元素的后边，即指向一个不存在的元素
    //
    ////c).如果一个容器为空，那么begin()和end()返回的迭代器相同
    //vector<int> iv2;
    //vector<int>::iterator iterBegin = iv2.begin();
    //vector<int>::iterator iterEnd = iv2.end();
    //if (iterBegin == iterEnd)
    //{
    //    cout << "容器iv2为空" << endl;
    //}

    //d) 
    vector<int> iv = { 100, 200, 300 };
    for (vector<int>::iterator iter = iv.begin(); iter != iv.end(); iter++)
    {
        cout << *iter << endl;
    }

    //反向迭代器：从后往前遍历容器
    //rbegin()/rend()
    for (vector<int>::reverse_iterator riter = iv.rbegin(); riter != iv.rend(); riter++)
    {
        cout << *riter << endl;
    }

    //四.迭代器运算符
    //a).*iter : 返回迭代器iter所指向的元素的引用

    return 0;
}
