#include "register_types.h"

#include "core/object/class_db.h"
#include "src/TestSprite.h"
#include "src/data/CardData.h"
#include "src/data/DeckData.h"

void initialize_seed_hearth_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	GDREGISTER_CLASS(TestSprite)
	GDREGISTER_CLASS(CardData)
	GDREGISTER_CLASS(DeckData)
}

void uninitialize_seed_hearth_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}
