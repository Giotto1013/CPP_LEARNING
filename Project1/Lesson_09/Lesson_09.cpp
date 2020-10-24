// Lesson_09.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;

struct student
{
    int num;
};

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
    //vector<int> iv = { 100, 200, 300 };
    //for (vector<int>::iterator iter = iv.begin(); iter != iv.end(); iter++)
    //{
    //    cout << *iter << endl;
    //}

    ////反向迭代器：从后往前遍历容器
    ////rbegin()/rend()
    //for (vector<int>::reverse_iterator riter = iv.rbegin(); riter != iv.rend(); riter++)
    //{
    //    cout << *riter << endl;
    //}

    //四.迭代器运算符
    //a).*iter : 返回迭代器iter所指向的元素的引用
        //必须保证这个迭代器指向的是有效的元素，不能指向end()

    //b).++iter iter++ : 让迭代器指向容器下一个元素
    /*vector<int>::iterator iter = iv.end();
    iter++; */  //不可以，程序会崩溃。end()是一个不存在的元素
    //vector<int>::iterator iter = iv.begin();
    //iter++;
    //cout << *iter << endl;  //200

    //c).--iter iter-- ：让迭代器指向容器的上一个元素
    /*vector<int>::iterator iter = iv.begin();
    iter--;*/       //指向begin()后，不可以再iter--,程序会崩溃
    //vector<int>::iterator iter = iv.end();
    //iter--;
    //cout << *iter << endl;  //300

    //d).iter1 == iter2, iter1 != iter2 : 判断两个迭代器是否相等
    //如果两个迭代器指向的是同一个元素，则相等，否则不相等

    //e).如何引用结构中的成员
    //vector<student> sv;
    //student mystu;
    //mystu.num = 100;
    //sv.push_back(mystu);

    //vector<student>::iterator iter;
    //iter = sv.begin();  //指向第一个元素
    //cout << (*iter).num << endl;
    //cout << iter->num << endl;


    //五.const_iterator迭代器
    //const_iterator表示值不能改变，表示迭代器指向的元素值不能改变，而不是表示迭代器本身不能改变
    //即迭代器本身可以指向其他元素，但是指向的元素本身值不能改变
    //只能从容器中读元素但是无法改变元素的值
    vector<int> iv = { 100, 200, 300 };
    //vector<int>::const_iterator iter;
    //for (iter = iv.begin(); iter != iv.end(); iter++)
    //{
    //    // *iter = 90;  //不可以，语法错误，const_iterator无法修改值
    //    cout << *iter << endl;
    //}

    //5-1. cbegin()/cend() : c++11中新引入的，与begin(), end()类似
    //返回的都是常量迭代器
    for (auto iter = iv.cbegin(); iter != iv.cend(); iter++)
    {
        //*iter = 4;  //语法错误，不能修改。iter是一个常量迭代器
        cout << *iter << endl;
    }


    return 0;
}
