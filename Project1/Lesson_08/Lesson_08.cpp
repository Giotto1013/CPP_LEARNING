// Lesson_08.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;

struct student {
    int num;
};

int main()
{
    //一.vector类型简介 ：标准库，集合或者动态数组
        //也被称为容器
    //vector<int> vjihe;  //表示vjihe里边保存的是int型数据
    ////<int> : 模板， vector本身就是一个类模板，<int>实际上是类模板的实例化的过程
    //

    //vector<student> stuList;

    //vector<vector<string>> strchuan;    //每一个元素都是一个vector集合。集合套集合

    ////不能往vector里装引用
    ////vector<int&> vjihe3;    //引用不是对象，不能存储到集合中

    ////可以装指针
    //vector<int*> vjihe4;


    //二.定义和初始化vector对象
    //1）空vector
    //vector<string> mystr;   //一个名为mystr的空的vector对象，此时不包含任何元素
    ////添加数据到vector中 push_back();
    //mystr.push_back("abcde");
    //mystr.push_back("qwert");

    ////2)元素拷贝的初始化方式
    //vector<string> mystr2(mystr);   //把mystr的元素拷贝给了mystr2
    //vector<string> mystr3 = mystr;

    ////3)c++11标准中，列表初始化 方法来初始化，用{}括起来
    //vector<string> mystr4 = { "aaa", "bbb", "ccc" };

    ////4)创建指定数量的元素。有元素数量概念的东西用圆括号()
    //vector<int> ijihe(15, -200);    //创建15个int类型的元素，每个元素的值为-200
    //vector<string> sjihe(5, "hello");   //创建5个string类型的元素，每个元素的值为hello

    ////5)多种初始化方式
    //vector<int> v1(10); //10个元素，每个元素值为默认值0
    //vector<int> v2{ 10 };   //一个元素，该元素的值为10
    //vector<string> str{ "hello" };  //一个元素，该元素值为hello
    //vector<string> str2{ 10 };  //10个元素，每个元素的值为默认的空串
    //vector<string> str3{ 10, "hello" };     //10个元素，每个元素的值都为“hello”
    //vector<int> v3(10, 1);      //10个元素，每个元素的值为1
    //vector<int> v4{ 10, 1 };    //2个元素，第一个元素值为10， 第二个元素值为1，初始化列表
    ////要想通过{}进行初始化，那么{}里面的值的类型，必须要与<>中的类型相同

    //三.vector对象上的操作
    //最常用的是不知道vector中有多少元素，需要动态增加/减少
    //先创建空的vector对象，
    //1.判断vector是否为空empty(), 返回值是bool值
    vector<int> ivec;
    if (ivec.empty())
    {
        cout << "ivec is empty" << endl;
    }

    //2.push_back : 向vector的末尾增加一个元素
    ivec.push_back(1);
    ivec.push_back(2);
    for (int i = 3; i <= 100; i++)
    {
        ivec.push_back(i);
    }
    if (ivec.empty())
    {
        cout << "ivec is empty" << endl;
    }

    //3.size : 返回元素个数
    cout << ivec.size() << endl;

    //4.clear : 移除所有元素，将容器清空
    /*ivec.clear();
    cout << ivec.size() << endl;*/

    //5.v[n] : 返回vector中第n个元素，n从0开始，小于.size()
        //若下标越界，会产生不可预测的错误
    cout << ivec[0] << endl;
    cout << ivec[1] << endl;

    //6. = : 赋值运算符
    vector<int> ivec2;
    ivec2.push_back(1111);
    ivec2 = ivec;   //ivec2中有100个元素，原来的元素被覆盖

    //7. == ; !=
        //两个vector相等 ： 元素数量相同且对应位置元素值也相等，否则就是不相等

    //8.范围for
    vector<int> vecValue{ 1,2,3,4,5 };
    for (auto& val : vecValue)
    {
        val *= 2;
    }

    for (auto val : vecValue)
    {
        cout << val << endl;
    }
    return 0;
}
