#include<iostream>
using namespace std;
//void Swap(int& left, int& right)
//{ 
//	int temp = left;    
//	left = right;   
//	right = temp;
//}
//
//void Swap(double& left, double& right) 
//{ 
//	double temp = left;    
//	left = right;    
//	right = temp; 
//}
//
//void Swap(char& left, char& right) 
//{ 
//	char temp = left;    
//	left = right;   
//	right = temp;
//}
//
//
//template<typename T>
//void Swap(T& left, T& right) 
//{ 
//	T temp = left;    
//	left = right;   
//	right = temp;
//}
//
//
//
//
//template<class T> 
//T Add(const T& left, const T& right) 
//{
//	return left + right; 
//}
//
//int main() 
//{
//	int a1 = 10, a2 = 20;  
//	double d1 = 10.0, d2 = 20.0;   
//	Add(a1, a2);   
//	Add(d1, d2);       
//	/*     ����䲻��ͨ�����룬��Ϊ�ڱ����ڼ䣬��������������ʵ����ʱ����Ҫ������ʵ������     
//	ͨ��ʵ��a1��T����Ϊint��ͨ��ʵ��d1��T����Ϊdouble���ͣ���ģ������б���ֻ��һ��T��   
//	�������޷�ȷ���˴����׸ý�Tȷ��Ϊint ���� double���Ͷ�����   
//	ע�⣺��ģ���У�������һ�㲻���������ת����������Ϊһ��ת�������⣬����������Ҫ���ڹ� */   
//	// ��ʱ�����ִ���ʽ��
//	//1. �û��Լ���ǿ��ת�� 
//	//2. ʹ����ʽʵ����  
//	    
//	Add(a1, d1);       
// 
//		Add(a, (int)d);    
//		return 0;
//}
//
//
//int main(void)
//{
//	int a = 10;    
//	double b = 20.0;        
//	// ��ʽʵ����   
//	Add<int>(a, b);  
//	return 0;
//}
//
//
//// ר�Ŵ���int�ļӷ����� 
//int Add(int left, int right)
//{    
//	return left + right;
//}
//
//// ͨ�üӷ����� 
//template<class T> 
//T Add(T left, T right) 
//{    
//	return left + right; 
//}
//
//void Test() 
//{
//	Add(1, 2);       // ���ģ�庯��ƥ�䣬����������Ҫ�ػ�    
//	Add<int>(1, 2);  // ���ñ������ػ���Add�汾 
//}


//// ר�Ŵ���int�ļӷ�����
//int Add(int left, int right)
//{    
//	return left + right;
//}
//
//// ͨ�üӷ����� 
//template<class T1, class T2> 
//T1 Add(T1 left, T2 right)
//{    
//	return left + right;
//}
//
//void Test()
//{
//	Add(1, 2);     // ��Ǻ���ģ��������ȫƥ�䣬����Ҫ����ģ��ʵ����    
//	Add(1, 2.0);   // ģ�庯���������ɸ���ƥ��İ汾������������ʵ�����ɸ���ƥ���Add�� ��
//}

//typedef int STDateType
//class Stack
//{
//public:
//
//private:
//	STDateType* _a;
//	int _size;
//	int _capacity;
//};
//
//int main()
//{
//	Stack st1; // int //��ֻ����һ����ʱ����ᷢ��û�����⣬��ֻ��Ҫ�޸����;�ok��
//	Stack st2;// double //��ϣ��һ��ջ��int����һ��ջ��������double��C�������ǲ��ܵ�
//	//����Ҫ�ڴ���һ��double��ջ����ô����ͻ��߳��������Ծͻ��úܲ�
//	return 0;
//}


template<class T>
class Stack
{
public:
	Stack(int capacity = 4)
		:_a(new T[4])
		, _size(0)
		, _capacity(4)
	{}

	~Stack()
	{
		delete[] _a;
		_a = nullptr;
		_size = _capacity = 0;
	}

	void Push(const T& x);

private:
	T* _a;
	int _size;
	int _capacity;
};


//���������ⲿ������ʱ�����ǲ���ʶ���T�ģ�����Ҫ��
template<class T>  //�൱����һ��������
//�������Push������Stack�����ĳ�Ա����
void Stack<T>::Push(const T& x)
{
	// ... 
}

int main()
{
	Stack<int>st1;  //int 
	Stack<double>st2; //double 

	st1.Push(1);
}
