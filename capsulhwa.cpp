#include <iostream>

class File
{
public:
	void load()
	{
		std::cout << "mp3 파일을 메모리에 올립니다." << std::endl;
	}
};

class PowerDevice
{
public:
	void powerUp()
	{
		std::cout << "mp3 play를 위한 파워를 넣습니다" << std::endl;
	}
};

class Memory
{
public:
	void expand()
	{
		std::cout << "MP3 play 를 위한 메모리를 증가 시킵니다" << std::endl;
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
		std::cout << "mp3를 play 합니다" << std::endl;
	}
};

int main()
{
	Mp3 mp3;
	mp3.play();


}