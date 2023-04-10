#pragma once

#include "Core.h"

namespace GE
{
	class GE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

// Path: GE\src\GE\EntryPoint.h
