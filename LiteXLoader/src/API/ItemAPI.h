#pragma once
#include <string>
#include <ScriptX/ScriptX.h>
using namespace script;

//////////////////// Classes ////////////////////
class ItemStack;
class ItemClass : public ScriptClass
{
private:
    ItemStack *item;

    // Pre data
    std::string name,type;
    int count,aux;

public:
	explicit ItemClass(ItemStack *p);

    ItemStack *get()
    {
        return item;
    }

    static Local<Object> newItem(ItemStack *p);
    static ItemStack* extractItem(Local<Value> v);

    Local<Value> getName();
    Local<Value> getType();
    Local<Value> getCount();
    Local<Value> getAux();

    Local<Value> isNull(const Arguments& args);
    Local<Value> setLore(const Arguments& args);
};

//////////////////// APIs ////////////////////

Local<Value> SetLore(const Arguments& args);