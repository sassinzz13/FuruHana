
#include <FuruHana.h>


class Sandbox : public FuruHana::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

FuruHana::Application* FuruHana::CreateApplication()
{
	return new Sandbox();
}