#include "register_types.h"

#include "TestSprite.h"
#include "core/object/class_db.h"

void initialize_seed_hearth_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	GDREGISTER_CLASS(TestSprite);
}

void uninitialize_seed_hearth_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}
