#pragma once
#include "core/io/resource.h"

class DeckData : public Resource {
	GDCLASS(DeckData, Resource)

protected:
	void _notification(int p_what);

	static void _bind_methods();



	DeckData();

	~DeckData();
};
