#include <GE.h>

class Sandbox : public GE::Application {
public:
	Sandbox() {
	}
	~Sandbox() {
	}
};

GE::Application* GE::CreateApplication() {
	return new Sandbox();
}