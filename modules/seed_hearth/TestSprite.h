#ifndef TEST_SPRITE_H
#define TEST_SPRITE_H

#include "scene/2d/sprite_2d.h"

class TestSprite : public Sprite2D {
	GDCLASS(TestSprite, Sprite2D);

public:
	void do_something_cool();

protected:
	void ready();

	void _notification(int p_what);

	static void _bind_methods();

	TestSprite();
	~TestSprite();
};
#endif
