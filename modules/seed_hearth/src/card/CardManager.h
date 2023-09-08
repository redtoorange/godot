#pragma once
#include "scene/2d/node_2d.h"

class CardManager : public Node2D{
	GDCLASS(CardManager, Node2D);


public:
	static void _bind_methods();

	void _notification(int p_what);
};
