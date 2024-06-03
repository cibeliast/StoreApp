#pragma once

using namespace System;

public ref class Item {
public:
	String^ name;
	int qty;
	int price;
	Item(String^ name, int qty, int price) {
		this->name = name;
		this->qty = qty;
		this->price = price;
	}
};