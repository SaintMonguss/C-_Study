#include <iostream>

class File
{
public:
	void load()
	{
		std::cout << "mp3 ������ �޸𸮿� �ø��ϴ�." << std::endl;
	}
};

class PowerDevice
{
public:
	void powerUp()
	{
		std::cout << "mp3 play�� ���� �Ŀ��� �ֽ��ϴ�" << std::endl;
	}
};

class Memory
{
public:
	void expand()
	{
		std::cout << "MP3 play �� ���� �޸𸮸� ���� ��ŵ�ϴ�" << std::endl;
	}
};

class Mp3
{
private :
	File file;
	PowerDevice powerDevice;
	Memory memory;
public:
	void play()
	{
		powerDevice.powerUp();
		memory.expand();
		file.load();
		std::cout << "mp3�� play �մϴ�" << std::endl;
	}
};

int main()
{
	Mp3 mp3;
	mp3.play();


}