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
//	/*     该语句不能通过编译，因为在编译期间，当编译器看到该实例化时，需要推演其实参类型     
//	通过实参a1将T推演为int，通过实参d1将T推演为double类型，但模板参数列表中只有一个T，   
//	编译器无法确定此处到底该将T确定为int 或者 double类型而报错   
//	注意：在模板中，编译器一般不会进行类型转换操作，因为一旦转化出问题，编译器就需要背黑锅 */   
//	// 此时有两种处理方式：
//	//1. 用户自己来强制转化 
//	//2. 使用显式实例化  
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
//	// 显式实例化   
//	Add<int>(a, b);  
//	return 0;
//}
//
//
//// 专门处理int的加法函数 
//int Add(int left, int right)
//{    
//	return left + right;
//}
//
//// 通用加法函数 
//template<class T> 
//T Add(T left, T right) 
//{    
//	return left + right; 
//}
//
//void Test() 
//{
//	Add(1, 2);       // 与非模板函数匹配，编译器不需要特化    
//	Add<int>(1, 2);  // 调用编译器特化的Add版本 
//}


//// 专门处理int的加法函数
//int Add(int left, int right)
//{    
//	return left + right;
//}
//
//// 通用加法函数 
//template<class T1, class T2> 
//T1 Add(T1 left, T2 right)
//{    
//	return left + right;
//}
//
//void Test()
//{
//	Add(1, 2);     // 与非函数模板类型完全匹配，不需要函数模板实例化    
//	Add(1, 2.0);   // 模板函数可以生成更加匹配的版本，编译器根据实参生成更加匹配的Add函 数
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
//	Stack st1; // int //当只创造一个的时候，你会发现没有问题，你只需要修改类型就ok了
//	Stack st2;// double //我希望一个栈是int，另一个栈的类型是double在C语言中是不能的
//	//你需要在创造一个double的栈，那么代码就会冗长，复用性就会变得很差
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


//但是你在外部声明的时候，他是不认识你的T的，所以要加
template<class T>  //相当于起到一个类声明
//但是你的Push是属于Stack这个类的成员函数
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
