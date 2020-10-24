// Project2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "head1.h"
#include "head2.h"
using namespace std;

void func(int& ta, int& tb) //形参为引用
{
    ta = 4; //改变这个值会影响到外界
    tb = 5;

}

constexpr int func1(int abc)
{
    return 5;
}


int main()
{
    /*
    * 一.局部变量及初始化
    * 1.随时用随时定义
    */
    //for (int i = 0; i < 10; i++)    //i的作用域仅在for循环中
    //{
    //    cout << i << endl;
    //}

    //int abc = 5;    //定义变量时并初始化
    //int abc{ 5 };
    //int d = { 5 };  //“=”可有可无
    //cout << abc << endl;

    //定义数组并初始化
    //int a[]{ 11, 12, 34 };  //没用等号，加上也无所谓
    //cout << a[2] << endl;


    //int c = 3.5f;   //会被系统截断成3

    //int b{ 3.5f };  //编译会报错 : warning C4244: “初始化”: 从“float”转换到“int”，可能丢失数据

    //二. auto : 变量的自动类型推断
    //auto可以在声明变量的时候根据变量初始值的类型自动为此变量选择匹配的类型（声明时要赋予初值）
    //auto自动类型推断发生在编译期间，不会造成程序执行效率降低

    //auto bValue = true; //bool
    //auto ch = 'a';  //char
    //auto dv = 1.25f;    //float
    //auto iv = 5;    //int

    //三.头文件防卫式声明 : 避免重复包含头文件
    //#ifdef, #ifndef 条件编译
        //#ifndef 标识符   //当标识符没有定义过，则对程序段进行编译
        //#define 标识符
            //程序段
        //#endif
   /* cout << g_global1 << endl;
    cout << g_global2 << endl;*/

    //四.引用
    //引用理解成 ：为变量起了另外一个名字，一般用&表示。起完别名后，别名和变量本身我们就看成是同一个变量
    int value = 10;
    int& refValue = value;  //变量value的别名就是refValue, &在这里不是求地址运算符，只是起标识作用
                            //定义引用并不额外占用内存，或者理解成，引用和原变量占用同一块内存.内存地址相同
                            //定义引用时必须初始化，不然是给谁在起别名
                            //引用必须绑定到变量或对象上，但是不能绑定到常量上
    /*refValue = 3;
    cout <<  "value = " <<value << endl;
    cout << "refValue = " << refValue << endl;
    cout << &value << endl;
    cout << &refValue << endl;*/

    //引用 ： &在 = 好左边
    //地址 ：& 在 = 号右边

    /*int a = 13;
    int b = 40;
    cout << a << endl;
    cout << b << endl;

    func(a, b);

    cout << a << endl;
    cout << b << endl;*/

    //五.常量
    //常量关键字 ： const
    //const int a = 7;    //表示这个变量的值不会被改变

    //constexpr 关键字 ：c++11引入， 也是常量的概念， 在编译时求值， 可以提升性能
    constexpr int var = 1;
    int b = 5;
    constexpr int var2 = func1(11);

    return 0;
}