#include <iostream>
using namespace std;

int main()
{
	//һ.��Χfor��� �����ڱ���һ������
	//int v[]{ 12,13,14,16,18 };
	////for (auto x : v)		//����v��ÿ��Ԫ�����η���x�У�����ӡx��ֵ����v��ÿ��Ԫ�ؿ�����x�У���ӡxֵ
	//for(auto &x : v)		//xΪv��ÿ��Ԫ�ص����ã�ʡȥ�������������ϵͳЧ��
	//{
	//	cout << x << endl;
	//}

	/*cout << "--------------------------------------------------------------" << endl;

	for (auto x : { 20,45,58,36 })
	{
		cout << x << endl;
	}*/

	//��.��̬�ڴ�������� ��c�����й�����ʹ�õĴ洢�ռ䣬�г���������̬�洢����ȫ�ֱ���������̬�洢�����ֲ�������
	//c++�У����ڴ��Ϊ5����
	//1.ջ ��һ�㺯���ڵľֲ����������������ɱ������Զ�������ͷ�
	//2.�� ������Աmalloc/new���䣬��free/delete���ͷš������ͷź����������������ϵͳ�����
	//3.ȫ��/��̬�洢�� ��ȫ�ֱ����;�̬�������������ʱϵͳ�ͷ�
	//4.�����洢�� ��"I love China"֮���
	//5.���������

	//�Ѻ�ջ��ͬ����;������
	//1.ջ���ռ������޵ģ�����ϵͳ�涨�ģ������ٶȿ죬����Ա�޷�����
	//2.�ѣ�ֻҪ������ʵ��ӵ�е������ڴ棬Ҳ�ڲ���ϵͳ��������������ڴ��С֮�ڣ������Խ��з���
			//�����ٶȱ�ջ��������ʱ��new/malloc�����䣬�������delete/free���ͷ�����ڴ档�ǳ����

	//malloc��free : c�����У�ʹ��malloc��free�Ӷ�����������ͷ��ڴ��á�
		//malloc��free�Ǻ���
	//malloc (memory allocation) : ��̬�ڴ����
	//һ����ʽ��
	//void* malloc(int NumBytes); //NumBytes : Ҫ������ֽ���������ɹ��򷵻�ָ�򱻷����ڴ��ָ�룬����ʧ���򷵻�NULL
	//��������ڴ治ʹ��ʱ��Ҫ��free()�������ڴ��ͷŵ����������ط�ʹ��
	//free :
	//void free(void* FirstByte);	//��֮ǰ��malloc������ڴ�ռ仹������ϵͳ�����ͷ�����ڴ�
	//��������ڴ�ͱ�ϵͳ���գ�������Ҫ��ʱ������ϵͳ�����ȥ�������ط�ʹ��

	//int* p = NULL;	//c����д�����ȼ�������0
	//p = (int *)malloc(sizeof(int));	//�ڶ��з���4���ֽ�
	//if (p != NULL)
	//{
	//	//����ɹ�
	//	*p = 5;
	//	cout << *p << endl;

	//	//�ͷ�ָ��
	//	free(p);
	//}

	//char* point = NULL;
	//point = (char *)malloc(100 * sizeof(char));
	//if (point != NULL)
	//{
	//	//strcpy(point, "hello world !");
	//	strcpy_s(point, 13, "hello world!");

	//	cout << point << endl;

	//	//�ͷ�
	//	free(point);
	//}

	//int* p = (int*)malloc(sizeof(int) * 100);	//������Էŵ���100���������ڴ�ռ�
	//if (p != NULL)
	//{
	//	int* q = p;
	//	*q++ = 1;	//�ȼ��� *(q++)  ==> *q = 1; q++;
	//	*q++ = 5;
	//	cout << *p << endl;	//1
	//	cout << *(p + 1) << endl;	//5


	//	free(p);
	//}


	//new��delete : ���������ʶ������c++�о�ʹ��new/delete��������ͷ��ڴ棬����ʹ��malloc��free
	//new/delete��malloc/free����һ�����¾��Ƿ�����ͷ��ڴ棬��ͬʱnew/delete�����˸�����£�
		//Ʃ�������ռ�ʱ���Զ�������Ĺ��캯��
	//newһ��ʹ�ø�ʽ
	//��ʽһ ��ָ������� = new ���ͱ�ʶ��;
	//��ʽ�� ��ָ������� = new ���ͱ�ʶ��(��ʼֵ); ����ʼֵ��Բ��������������ʾ��ʼֵ
	//��ʽ�� ��ָ������� = new ���ͱ�ʶ��[�ڴ浥Ԫ����];	//[]��ʾ����

	//int* myint = new int;
	//if (myint != NULL)
	//{
	//	*myint = 8;	//*myintָ��ָ��ı���
	//	cout << *myint << endl;

	//	delete myint;
	//}

	//int* myint = new int(18);	//����int�ռ�ʱ����ʼֵ��Ϊ18
	//if (myint != NULL)
	//{
	//	cout << *myint << endl;

	//	delete myint;
	//}

int* pa = new int[100];	//����һ����СΪ100����������ռ�
if (pa != NULL)
{
	int* q = pa;

	*q++ = 1;	//pa[0] = 1
	*q++ = 18;	//pa[1] = 18.ִ�������У�q�Ѿ�ָ��pa[2]

	cout << *pa << endl;
	cout << *(pa + 1) << endl;

	//�ͷ��ڴ�
	delete[] pa;		//�ͷ�int pa����ռ�
					//newʱ����[], deleteʱҲ������[],[]�в�д�����С

}

//����ǿ��
//1.���ʹ�� ��malloc������free; new������delete
//free/delete ��Ҫ�ظ�����


//malloc/free �� new/delete����
//new/delete��malloc/free����һ�����¾��Ƿ�����ͷ��ڴ棬��ͬʱnew/delete�����˸�����£�
		//Ʃ�������ռ�ʱ���Զ�������Ĺ��캯����deleteʱ���Զ�������������
	

	//nullptr : c++11��������¹ؼ���
	//Ҳ�����ָ��
char* p = NULL;	//ʵ����һ��0ֵ
char* q = nullptr;	//����NULL������ֵ�Ļ���
int* a = nullptr;
//int b = nullptr;	//�﷨����
//if (p == nullptr)
//{
//	cout << "good" << endl;
//}
//
//if (q == NULL)
//{
//	cout << "q == NULL" << endl;
//}

//ʹ��nullptr�ܹ�������������ָ��֮�䷢������
//NULL��nullptrʵ�����ǲ�ͬ������
//���ۣ�����ָ��ĳ�ʼ�����ʹ�������õ��ĺ�ָ���йص�NULL�ĳ��ϣ�����nullptr��ȫ����nullptr���

cout << typeid(NULL).name() << endl;
cout << typeid(nullptr).name() << endl;
	
	return 0;
}