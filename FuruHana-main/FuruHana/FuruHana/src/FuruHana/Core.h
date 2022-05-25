#pragma once

#ifdef HZ_PLATFORM_WINDOWS
#ifdef HZ_BUILD_DLL
#define FURUHANA_API __declspec(dllexport)
#else
#define FURUHANA_API __declspec(dllimport)
#endif
#else Furuhana Only Runs on Windows :(
#endif
