#include "TestSprite.h"

void TestSprite::_notification(int p_what) {
	if(Engine::get_singleton()->is_editor_hint()) {
		return;
	}

	if(p_what == NOTIFICATION_READY) {
		ready();
	}
}

void TestSprite::ready() {
	print_line("Hello world from TestSprite!");
	print_line("This is a new line!!");
}

void TestSprite::_bind_methods() {
	ClassDB::bind_method(D_METHOD("do_something_cool"), &TestSprite::do_something_cool);
}

void TestSprite::do_something_cool() {
	set_modulate({0, 1, 0});
}

TestSprite::TestSprite() {
}

TestSprite::~TestSprite() {
}
