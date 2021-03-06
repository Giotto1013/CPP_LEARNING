﻿// Lesson_06.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>



using namespace std;


//后置返回类型函数声明
//auto func123(int a, int b) -> void;
//
////后置返回类型函数定义
////auto : 自动类型推断
//auto func123(int a, int b) -> void
//{
//    return;
//}


//inline int myFunc(int testv)   //函数定义前加关键字 “inline”,普通函数就变成了内联函数
//{
//    return 1;
//}

//void funca() {
//
//}
//
//void funcb() {
//
//    //return;   //可以
//    return funca(); //也可以
//
//    //return void;  //不可以
//}


//int* myfunc()
//{
//    int tmpValue = 9;
//    return &tmpValue;   //局部变量，地址会被回收
//}

int& myfunc2()
{
    int tmpValue = 9;
    cout << &tmpValue << endl;
    return tmpValue;    //返回局部变量，地址会被回收
}

int main()
{
    
    //一.函数回顾与后置返回类型
    //函数定义中，形参如果在函数体内中用不到的话，则可以不给形参变量名字，只给其类型
    //函数声明时，可以只有形参类型，不给形参名字
    //把函数返回类型放到函数名字之前 ：前置返回类型
    //C++11中 ：后置返回类型
            //在函数声明和定义中，把返回类型写在参数列表之后
            //前面放auto, 表示函数返回类型放到参数列表之后，而放在参数列表之后的返回类型时通过 -> 开始的


    //内联函数 : 函数定义前加关键字 “inline”,这个函数就变成了内联函数
        //为了解决 ： 函数体很小，但是调用很频繁，引入内联函数
    //1.inline影响编译器，在编译阶段对inline进行处理，系统尝试将 **调用该函数的动作替换为函数本体** 。
        //  通过这种方式来提升性能
    //2.inline 只是开发者对编译器的一个建议，编译器可以尝试去做，也可以不做，这取决于编译器的诊断功能
        //是否替换的决定权在编译器，开发者控制不了
    //3.内联函数头文件需要放在头文件中。
        //这样需要用到内联函数的.cpp文件都能够通过#include把内联函数的源代码包含进来
        //以便找到这个函数的本体源代码，并尝试将该函数的调用行为替换为函数体内的语句

    //优缺点：
    //代码膨胀，所以内联函数的函数体尽量要小

    //注意事项
    //各种编译器对inline的处理各不相同
    //inline函数尽量简单，代码尽可能少。循环，递归，分支尽量不要出现在inline函数中
        //否则编译器很可能拒绝让该函数成为内联函数
    //constexpr函数，可以看成是更严格的内联函数
    //#define宏展开也类似于inline


    //三.函数杂合用法总结
    //1.函数返回类型为void, 表示函数不返回任何类型。
        //但是我们可以调用一个 返回类型是void的函数，让它作为另一个返回类型是void的函数的返回值
    //2.函数返回指针和返回引用的情况
        //指针
        //int* p = myfunc();
        //*p = 7;     //往一个不能操作的地址写内容 ****隐患超级大！！！****
        //引用
        //int& k = myfunc2();
        //cout << &k << endl;
        //k = 10; //往一个不能操作的地址写内容 ****隐患超级大！！！****

        //int k = myfunc2();
        //cout << &k << endl;
        //k = 10; //安全的。k有自己的内存地址

    //3.没有形参可以保持形参列表为空(),或者 int myFunc(void)
    //4.如果一个函数不被调用，则该函数可以只有声明部分，没有定义部分
    //5.普通函数定义只能定义一次（定义放在.cpp中），但是可以声明多次。
        //一般函数定义.cpp文件会include自己的函数声明文件(.h)
    //6.形参使用引用。在C++中更习惯用引用类型的形参来取代指针类型的形参
        //提倡在C++中多使用引用类型的形参
    //7.C++中允许函数同名，但是形参列表的参数列表或者数量应该有明显区别


    //四.const char *, char const *, char * const的区别
    const int abc = 12; //常量abc, 不能被修改

    //char* p; 与const混用
    //4.1 const char* p;
    char str[] = "I Love China";
    const char* p;  //p指向的东西不能通过p来修改（p所指向的目标，那个目标中的内容不能通过p来改变）
    p = str;
    //*p = 'Y'; //语法错误
    p++;
    str[0] = 'Y';   //可以通过str来改变

    //4.2 char const * p  等价于 const char* p


    //4.3 char* const
    char str1[] = "I Love China";
    char* const p1 = str1;  //必须初始化
                            //p一旦指向一个东西后，就不可以再指向其他东西。
    //p1++;   //语法错误
    *p1 = 'Y';      //但是可以修改p指向的目标中的内容


    //4.4
    char str2[] = "I Love China";
    const char* const p2 = str2;    //p2的指向不能改变，指向的内容也不能通过p2来改变

    //4.5
    int i = 100;
    const int& a = i;   //代表i的内容不能通过a来修改
    i = 200;
    //a = 500;    //不可以，语法错误。a的内容不能通过a本身来修改

    //4.6
    //int& b = 31;  //错误的
    const int& b = 31;
    //b = 45;     //错误的


    //五.函数形参中带const
    //把形参写成const的好处
    //1.防止无意中修改形参导致实参被修改
    //2.实参类型可以更灵活
        //既可以接受普通类型的实参，也可以接受const类型的实参，也可以接受常量值


    
    
    return 0;
}