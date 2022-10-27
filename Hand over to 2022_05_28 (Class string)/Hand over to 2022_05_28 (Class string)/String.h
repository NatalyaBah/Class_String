#pragma once
using namespace std;
class String
{
private:
	int sizeStr;
	char* str = new char[sizeStr];
	int checkIndex(int index, int size)
	{
		if (index > size) return size;
		else return index;
	}

	int checkQuant(int index, int quant, int size)
	{
		if (index + quant > size) return size - index;
		else return quant;
	}
public:
	String() :str(nullptr)
	{

	}
	String(int sizeStr) :sizeStr(NULL)
	{
		this->sizeStr = sizeStr;
	}
	String(char* str)
	{
		this->str = str;
	}
	~String()
	{
		delete[] this->str;
	}

	int size()
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			sizeStr++;
		}
		return sizeStr;
	}

	void reSize(int n)
	{
		char* buf = new char[n + 1];
		for (int i = 0; i < n; i++)
		{
			buf[i] = str[i];
		}
		buf[n] = '\0';
		delete[]str;
		str = buf;
	}

	void reSize(int n, char c)
	{
		char* buf = new char[n + 1];
		for (int i = 0; i < n; i++)
		{
			buf[i] = str[i];
		}
		for (int i = 0; i < n; i++)
		{
			buf[i] = c;
		}
		buf[n] = '\0';
		delete[]str;
		str = buf;
	}

	void print()
	{
		cout << str;
	}

	void clear()
	{
		char* buf = new char[1]{ "" };
		buf[0] = '\0';
		delete[]str;
		str = buf;
	}

	bool empty()
	{

		if (sizeStr == 0) return true;
		else return false;
	}

	void push_back(char st)
	{
		int len = size();
		char* buf = new char[sizeStr + 1];
		for (int i = 0; i < sizeStr; i++)
		{
			buf[i] = str[i];
		}
		buf[sizeStr] = st;
		delete[]str;
		str = buf;
	}

	void append(int w, char s)
	{
		char* buf = new char[sizeStr + 1 + w];
		for (int i = 0; i < sizeStr; i++)
		{
			buf[i] = str[i];
		}
		for (int i = sizeStr; i < sizeStr + w; i++)
		{
			buf[i] = s;
		}
		buf[sizeStr + w] = '\0';
		delete[]str;
		str = buf;
	}

	void append(String& str2)
	{
		int sizeStr2 = 0;
		char* buf = new char[sizeStr + sizeStr2 + 1];
		for (int i = 0; i < sizeStr; i++)
		{
			buf[i] = str[i];
		}
		for (int i = sizeStr, k = 0; i < sizeStr + sizeStr2; i++)
		{
			buf[i] = str2.str[k++];
		}
		buf[sizeStr + sizeStr2] = '\0';
		delete[]str;
		str = buf;
	}

	void append(String& str2, int index, int quant)
	{
		int sizeStr2 = 0;
		index = str2.checkIndex(index, sizeStr);
		quant = str2.checkQuant(index, quant, sizeStr2);

		char* buf = new char[sizeStr + quant + 1];
		for (int i = 0; i < sizeStr; i++)
		{
			buf[i] = str[i];
		}
		for (int i = sizeStr, k = index; i < sizeStr + quant; i++)
		{
			buf[i] = str2.str[k++];
		}
		buf[sizeStr + quant] = '\0';
		delete[]str;
		str = buf;
	}

	void erase(int index)
	{
		int sizeStr = size();
		index = checkIndex(index, sizeStr);

		char* buf = new char[index + 1];
		for (int i = 0; i < index; i++)
		{
			buf[i] = str[i];
		}
		delete[]str;
		str = buf;
		str[index] = '\0';
		sizeStr = index;
	}

	void erase(int index, int quant)
	{

		int sizeStr = size();
		index = checkIndex(index, sizeStr);
		quant = checkQuant(index, quant, sizeStr);
		char* buf = new char[sizeStr - quant + 1];

		for (int i = 0; i < index; i++)
		{
			buf[i] = str[i];
		}
		for (int i = index + quant, k = index; i < sizeStr; i++)
		{
			buf[k++] = str[i];
		}
		buf[sizeStr - quant] = '\0';
		delete[]str;
		str = buf;
	}

	void insert(int index, int quant, char symbol)
	{
		int sizeStr = size();
		index = checkIndex(index, sizeStr);
		char* buf = new char[sizeStr + quant + 1];
		for (int i = 0; i < index; i++)
		{
			buf[i] = str[i];
		}
		for (int i = 0, k = index; i < quant; i++)
		{
			buf[k++] = symbol;
		}
		for (int i = index + quant, k = index; i < sizeStr + quant; i++)
		{
			buf[i] = str[k++];
		}
		buf[sizeStr + quant] = '\0';
		delete[]str;
		str = buf;
	}

	void insert(String& str2, int index)
	{
		int sizeStr = size();
		int sizeStr2 = str2.size();
		index = checkIndex(index, sizeStr);

		char* buf = new char[sizeStr + sizeStr2 + 1];
		for (int i = 0; i < index; i++)
		{
			buf[i] = str[i];
		}
		for (int i = index, k = 0; i < index + sizeStr2; i++)
		{
			buf[i] = str2.str[k++];
		}
		for (int i = index + sizeStr2, l = index; i < sizeStr + sizeStr2; i++)
		{
			buf[i] = str[l++];
		}
		buf[sizeStr + sizeStr2] = '\0';
		delete[]str;
		str = buf;
	}

	void insert(String& str2, int index, int index2, int quant)
	{
		int sizeStr = size();
		int sizeStr2 = str2.size();
		index = checkIndex(index, sizeStr);
		index2 = checkIndex(index2, sizeStr2);
		quant = checkQuant(index2, quant, sizeStr2);

		char* buf = new char[sizeStr + quant + 1];

		for (int i = 0; i < index; i++)
		{
			buf[i] = str[i];
		}
		for (int i = index2, k = index; i < index2 + quant; i++)
		{
			buf[k++] = str2.str[i];
		}
		for (int i = index, l = index + quant; i < sizeStr; i++)
		{
			buf[l++] = str[i];
		}
		buf[sizeStr + quant] = '\0';
		delete[]str;
		str = buf;
	}

	String substr(String& str1, int index)
	{
		int sizeStr = str1.size();
		index = checkIndex(index, sizeStr);
		char* buf = new char[sizeStr - index + 1];
		for (int i = index, k = 0; i < sizeStr; i++)
		{
			buf[k++] = str1.str[i];
		}
		buf[sizeStr - index] = '\0';
		str = buf;
		return str;
	}

	String substr(String& str1, int index, int quant)
	{
		int sizeStr = str1.size();
		index = checkIndex(index, sizeStr);
		quant = checkQuant(index, quant, sizeStr);
		char* buf = new char[quant + 1];

		for (int i = 0, k = index; i < quant; i++)
		{
			buf[i] = str1.str[k++];
		}
		buf[quant] = '\0';
		str = buf;
		return str;
	}

	void replace(int index, int quant1, int quant2, int symbol)
	{
		int sizeStr = size();
		index = checkIndex(index, sizeStr);
		quant1 = checkQuant(index, quant1, sizeStr);

		char* buf = new char[sizeStr - quant1 + quant2 + 1];
		for (int i = 0; i < index; i++)
		{
			buf[i] = str[i];
		}
		for (int i = 0, k = index; i < quant2; i++)
		{
			buf[k++] = symbol;
		}
		for (int i = index + quant1, k = index + quant2; i < sizeStr; i++)
		{
			buf[k++] = str[i];
		}
		buf[sizeStr - quant1 + quant2] = '\0';
		delete[]str;
		str = buf;
	}

	void replace(int index, int quant, String& str2)
	{
		int sizeStr = size();
		int sizeStr2 = str2.size();
		index = checkIndex(index, sizeStr);
		quant = checkQuant(index, quant, sizeStr);

		char* buf = new char[sizeStr - quant + sizeStr2 + 1];

		for (int i = 0; i < index; i++)
		{
			buf[i] = str[i];
		}
		for (int i = 0, k = index; i < sizeStr2; i++)
		{
			buf[k++] = str2.str[i];
		}
		for (int i = index + quant, k = index + sizeStr2; i < sizeStr; i++)
		{
			buf[k++] = str[i];
		}
		buf[sizeStr - quant + sizeStr2] = '\0';
		delete[]str;
		str = buf;
	}

	void replace(int index, int quant1, String& str2, int index2, int quant3)
	{
		int sizeStr = size();
		int sizeStr2 = str2.size();
		index = checkIndex(index, sizeStr);
		quant1 = checkQuant(index, quant1, sizeStr);
		index2 = checkIndex(index2, sizeStr2);
		quant3 = checkQuant(index2, quant3, sizeStr2);

		char* buf = new char[sizeStr - quant1 + quant3 + 1];

		for (int i = 0; i < index; i++)
		{
			buf[i] = str[i];
		}
		for (int i = 0, k = index, l = index2; i < quant3; i++)
		{
			buf[k++] = str2.str[l++];
		}
		for (int i = index + quant1, k = index2 + quant3; i < sizeStr; i++)
		{
			buf[k++] = str[i];
		}
		buf[sizeStr - quant1 + quant3] = '\0';
		delete[]str;
		str = buf;
	}

	int find(String& str4, int index = 0)
	{
		int sizeStr = size();
		int sizeStr2 = str4.size();
		bool flag;

		index = checkIndex(index, sizeStr);

		for (int i = 0; i < sizeStr; i++)
		{
			if (str[i] == str4.str[0])
			{
				flag = true;
				for (int j = 1; j < sizeStr2; j++)
				{
					if (str[i + j] != str4.str[j])
					{
						flag = false;
						break;
					}
				}
				if (flag == true) return i;
			}
		}
		return -1;
	}

	int find(String& str4, int index, int quant)
	{
		int sizeStr = size();
		int sizeStr2 = str4.size();
		bool flag;

		index = checkIndex(index, sizeStr);

		if (quant > sizeStr2) quant = sizeStr2;
		if (quant < 0) quant = 0;

		for (int i = index; i < sizeStr; i++)
		{
			if (str[i] == str4.str[0])
			{
				flag = true;
				for (int j = 1; j < sizeStr2; j++)
				{
					if (str[i + j] != str4.str[j])
					{
						flag = false;
						break;
					}
				}
				if (flag == true) return i;
			}
		}
		return -1;
	}

	int rfind(String& str5, int index = 0)
	{
		int sizeStr = size();
		int sizeStr2 = str5.size();
		bool flag;
		index = sizeStr - index; //×òîáû ïîéòè ñ êîíöà ñòðîêè

		for (int i = index; i >= 0; i--)
		{
			if (str[i] == str5.str[0])
			{
				flag = true;
				for (int j = 1; j < sizeStr2; j++)
				{
					if (str[i + j] != str5.str[j])
					{
						flag = false;
						break;
					}
				}
				if (flag == true) return i;
			}
		}
		return -1;
	}

	int rfind(String& str5, int index, int quant)
	{
		int sizeStr = size();
		int sizeStr2 = str5.size();
		bool flag;

		index = sizeStr - index;

		if (index == sizeStr) index--;

		if (quant > sizeStr2) quant = sizeStr2;
		if (quant < 0) quant = 0;

		for (int i = index; i >= 0; i--)
		{
			if (str[i] == str5.str[0])
			{
				flag = true;
				for (int j = 1; j < quant; j++)
				{
					if (str[i + j] != str5.str[j])
					{
						flag = false;
						break;
					}
				}
				if (flag == true) return i;
			}
		}
		return -1;
	}

	int find_first_of(String& str6, int index = 0)
	{
		int sizeStr = size();
		int sizeStr2 = str6.size();

		index = checkIndex(index, sizeStr);

		for (int i = index; i < sizeStr; i++)
		{
			for (int j = 0; j < sizeStr2; j++)
			{
				if (str[i] == str6.str[j])
				{
					return i;
				}
			}
		}
		return -1;
	}

	int find_last_of(String& str, int index = 0)
	{
		int sizeStr = size();
		int sizeStr2 = str.size();

		if (index < 0) index = 0;

		index = checkIndex(index, sizeStr);

		for (int i = sizeStr - 1; i >= index; i--)
		{
			for (int j = 0; j < sizeStr2; j++)
			{
				if (str.str[i] == str.str[j]) return i;
			}
		}
		return -1;
	}

	int find_first_not_of(String& str, int index = 0)
	{
		int sizeStr = size();
		int sizeStr2 = str.size();
		bool flag;

		index = checkIndex(index, sizeStr);

		for (int i = index; i < sizeStr; i++)
		{
			flag = true;
			for (int j = 0; j < sizeStr2; j++)
			{
				if (str.str[i] == str.str[j])
				{
					flag = false;
					break;
				}
			}
			if (flag) return i;
		}
		return -1;
	}

	int find_last_not_of(String& str, int index = 0)
	{
		int sizeStr = size();
		int sizeSt2 = str.size();
		bool flag;

		if (index < 0) index = 0;

		index = checkIndex(index, sizeStr);

		for (int i = sizeStr - 1; i >= 0; i--)
		{
			flag = true;
			for (int j = 0; j < sizeStr; j++)
			{
				if (str.str[i] == str.str[j])
				{
					flag = false;
					break;
				}
			}
			if (flag) return i;
		}
		return -1;
	}

	char* c_str()
	{
		return str;
	}

};

