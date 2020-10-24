// Lesson_07.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>   //string类型头文件
using namespace std;

int main()
{
    //一.前言
    //string : 处理可变长字符串

    //二.string类型简介 ：c++标准库中的类型，代表一个可变长字符串
    //看成一个 类 类型
    //char str[100] = "I Love China"; //C语言中的用法

    //三.定义和初始化string对象
    //string s1;  //定义一个s1对象，默认初始化，s1 = "";   //空串，没有字符
    //string s2 = "I Love China";     //把I Love China这个字符串内容拷贝到s2代表的一段内存中。不包括末尾的'\0'
    //string s3("I Love China");  //跟s2的写法效果一样
    //string s4 = s2; //把s2中的内容拷贝到s4所代表的内存中

    //int num = 6;
    //string s5(num, 'a');    //aaaaaa  把s5初始化为连续num个字符'a'组成的字符串。这种方式不太推荐，因为会在系统内部创建临时变量

    //四.string对象上的操作
    //1).判断是否为空empty(); 返回bool值
    /*string s1;
    if (s1.empty())
    {
        cout << "s1为空" << endl;
    }*/

    //2).size() / length()  : 返回字节/字符数量，代表该字符串的长度。unsigned int
    /*string s1;
    cout << s1.size() << endl;
    cout << s1.length() << endl;

    string s2 = "我爱中国";
    cout << s2.size() << endl;
    cout << s2.length() << endl;

    string s3 = "I Love China";
    cout << s3.size() << endl;
    cout << s3.length() << endl;*/

    //3).s[n] : 返回s中第n个字符（n是个整型值），n代表的是一个位置，从0开始到size() - 1
            //下表越界，会发生不可预测的错误
    //string s3 = "I Love China";
    //if (s3.size() > 4)
    //{
    //    cout << s3[4] << endl;  //v

    //    s3[4] = 'w';
    //}

    //cout << s3 << endl;

    //4).s1 + s2    //字符串的连接，返回连接后的结果，其实就是得到一个新的string对象
    /*string s4 = "abcd";
    string s5 = "hijk";
    string s6 = s4 + s5;
    cout << s6 << endl;*/

    //5) s1 = s2; 字符串对象赋值，用s2里面的内容取代原来s3里面的内容
    /*string s7 = "abcd";
    string s8 = "db";
    s7 = s8;
    cout << s7 << endl;*/

    //6) s1 == s2; 判断两个字符串是否相等， 大小写敏感
        //相等 ： 长度相同，字符全相同
    /*string s9 = "abc";
    string s10 = "abc";
    if (s9 == s10)
    {
        cout << "s9 == s10" << endl;
    }*/

    //7) s1 != s2; 判断两个字符串是否不相等
    /*string s9 = "abc";
    string s10 = "abC";
    if (s9 != s10)
    {
        cout << "s9 != s10" << endl;
    }*/

    //8)s.c_str()   返回一个字符串s中的内容指针。返回一个指向正规的C字符串的指针常量，也就是以\0结尾
        //该函数引入，为了与C语言兼容。在C语言中没有string类型。所以需要通过string对象的c_str()方法把
        //string对象转换成C语言中的字符串样式
    //string s10 = "abC";
    //const char* p = s10.c_str();

    //char str[100];
    //strcpy_s(str, sizeof(str), p);
    //cout << str << endl;

    //string s11(str);    //用C语言的字符数组初始化string类型
    
    //9).读写string对象
    //string s1;
    //cin >> s1;  //从键盘输入
    //cout << s1;

    //10). 字面值和string相加
    /*string s1 = "abc";
    string s2 = "defg";
    string s3 = s1 + " and " + s2 + 'e';
    cout << s3 << endl;*/

    //11).范围for对string的使用 C++11中提供范围for ：能够遍历一个序列中的每一个元素
        //string 可以看成一个字符序列
    string s1 = "I Love China";
    /*for (auto c : s1)
    {
        cout << c << endl;
    }*/
    for (auto& c : s1)  //可以修改s1中的值
    {
        c = toupper(c);     //转为大写，c是一个引用
    }
    cout << s1 << endl;

    
    
    std::cout << "Hello World!\n";
}
