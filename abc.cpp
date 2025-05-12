#include <bits/stdc++.h>
using namespace std;

class Image
{
	public:
		virtual void display() = 0;
};

class RealImage : public Image
{
	private:
		string filename;

	public:
		RealImage(const string& filename) : filename(filename)
	{
		cout << "Loading image: " << filename << std::endl;
	}

		void display() override {
			cout << "Displaying image: " << filename << std::endl;
		}
};

class ImageProxy : public Image {
	private:
		RealImage* realImage;
		std::string filename;

	public:
		ImageProxy(const string& filename) : filename(filename), realImage(nullptr)
	{

	}
		void display() override
		{
			if (realImage == nullptr)
			{
				realImage = new RealImage(filename);
			}
			realImage->display();
		}
};

int main()
{
	Image* image = new ImageProxy("11.cpp");

	image->display();

	image->display();

	delete image;

	return 0;
}
