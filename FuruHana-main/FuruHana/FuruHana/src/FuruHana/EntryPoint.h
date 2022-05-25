#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern FuruHana::Application* FuruHana::CreateApplication();

int main(int argc, char** argv)
{

	printf("Now Using FuruHana Engine By IzumiFuru/Sassinzz13 \n ");
	auto app = FuruHana::CreateApplication();
	app->Run();
	delete app;
}
#endif