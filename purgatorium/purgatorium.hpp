#ifndef PURGATORIUM_INCLUDED
#define PURGATORIUM_INCLUDED

#endif // PURGATORIUM_INCLUDED

#include <godot_cpp/godot.hpp>
#include <godot_cpp/classes/control.hpp>

using namespace godot;


class Examplex : public Control {
	GDCLASS(Examplex, Control);

 protected:
	static void _bind_methods(){};

public:
	static void _register_methods();
	String simple_func();
};

int main() {
	return 0;
}