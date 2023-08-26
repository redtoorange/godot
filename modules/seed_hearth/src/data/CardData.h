#pragma once
#include "core/io/resource.h"
#include "scene/resources/texture.h"

class CardData : public Resource {
	GDCLASS(CardData, Resource)

protected:
	void _notification(int p_what);

	static void _bind_methods();

	CardData();

	~CardData();

public:
	String get_card_name() const;
	void set_card_name(const String &card_name);
	Ref<Texture2D> get_card_image() const;
	void set_card_image(const Ref<Texture2D> &card_image);
	String get_card_description() const;
	void set_card_description(const String &card_description);
	int get_stamina_cost() const;
	void set_stamina_cost(int stamina_cost);
	Color get_background_color() const;
	void set_background_color(const Color &background_color);

private:
	String cardName;
	Ref<Texture2D> cardImage;
	String cardDescription;
	int staminaCost;
	Color backgroundColor;
};
