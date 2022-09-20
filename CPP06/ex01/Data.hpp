#ifndef DATA_HPP
#define DATA_HPP

class Data{
	int data;
	public:
		Data();
		Data(const Data& d);
		Data& operator=(const Data& d);
		~Data();

		Data(int num);
		int getData(void);
};

#endif
