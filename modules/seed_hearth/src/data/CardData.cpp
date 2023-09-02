#include "CardData.h"

void CardData::_notification(int p_what) {
	if(Engine::get_singleton()->is_editor_hint()) return;

	print_line("Hello, World!");
}

void CardData::_bind_methods() {
	ClassDB::bind_method(D_METHOD("get_card_name"), &CardData::get_card_name);
	ClassDB::bind_method(D_METHOD("set_card_name", "background_color"), &CardData::set_card_name);
	ADD_PROPERTY(PropertyInfo(Variant::STRING, "card_name"), "set_card_name", "get_card_name");

	ClassDB::bind_method(D_METHOD("get_card_description"), &CardData::get_card_description);
	ClassDB::bind_method(D_METHOD("set_card_description", "background_color"), &CardData::set_card_description);
	ADD_PROPERTY(PropertyInfo(Variant::STRING, "card_description", PROPERTY_HINT_MULTILINE_TEXT), "set_card_description", "get_card_description");

	ClassDB::bind_method(D_METHOD("get_card_image"), &CardData::get_card_image);
	ClassDB::bind_method(D_METHOD("set_card_image", "background_color"), &CardData::set_card_image);
	ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "background_image", PROPERTY_HINT_RESOURCE_TYPE, "Texture2D"), "set_card_image", "get_card_image");

	ClassDB::bind_method(D_METHOD("get_background_color"), &CardData::get_background_color);
	ClassDB::bind_method(D_METHOD("set_background_color", "background_color"), &CardData::set_background_color);
	ADD_PROPERTY(PropertyInfo(Variant::COLOR, "background_color"), "set_background_color", "get_background_color");

	ClassDB::bind_method(D_METHOD("get_stamina_cost"), &CardData::get_stamina_cost);
	ClassDB::bind_method(D_METHOD("set_stamina_cost", "background_color"), &CardData::set_stamina_cost);
	ADD_PROPERTY(PropertyInfo(Variant::INT, "stamina_cost"), "set_stamina_cost", "get_stamina_cost");
}

CardData::CardData() {
	staminaCost = 0;
	cardName = "Test Name";
	cardDescription = "Test Description";
	backgroundColor = Color(1, 1, 1, 1);
}

CardData::~CardData() {
}

String CardData::get_card_name() const {
	return cardName;
}

void CardData::set_card_name(const String &card_name) {
	cardName = card_name;
}

Ref<Texture2D> CardData::get_card_image() const {
	return cardImage;
}

void CardData::set_card_image(const Ref<Texture2D> &card_image) {
	cardImage = card_image;
}

String CardData::get_card_description() const {
	return cardDescription;
}

void CardData::set_card_description(const String &card_description) {
	cardDescription = card_description;
}

int CardData::get_stamina_cost() const {
	return staminaCost;
}

void CardData::set_stamina_cost(int stamina_cost) {
	staminaCost = stamina_cost;
}

Color CardData::get_background_color() const {
	return backgroundColor;
}

void CardData::set_background_color(const Color &background_color) {
	backgroundColor = background_color;
}
