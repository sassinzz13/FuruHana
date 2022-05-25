#pragma once

#include "Core.h"

	namespace FuruHana {
		class FURUHANA_API Application
		{
		public:
			Application();
			virtual ~Application();

			void Run();
		};

		//to be defined
		Application* CreateApplication();
}

