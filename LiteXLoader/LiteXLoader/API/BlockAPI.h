#pragma once
#include <ScriptX/ScriptX.h>
using namespace script;

#include <Global.hpp>
#include <string>


//////////////////// Classes ////////////////////
class Block;
class BlockClass : public ScriptClass
{
private:
    Block *block;

    // Pre data
    std::string name,type;
    int id;
    IntVec4 pos;

public:
	explicit BlockClass(Block *p);
    BlockClass(Block *p, BlockPos bp, int dim);

    void preloadData(BlockPos bp, int dim);
    Block *get()
    {
        return block;
    }


    static Local<Object> newBlock(Block *p, BlockPos *pos, int dim);
    static Local<Object> newBlock(BlockPos* pos, int dim);
    static Local<Object> newBlock(const BlockPos& pos, int dim);
    static Local<Object> newBlock(Block *p, BlockPos *pos, BlockSource *bs);
    static Local<Object> newBlock(IntVec4 pos);
    static Block* extract(Local<Value> v);
    Local<Value> getRawPtr(const Arguments& args);

    Local<Value> getName();
    Local<Value> getType();
    Local<Value> getId();
    Local<Value> getPos();
    Local<Value> getTileData();

    Local<Value> getNbt(const Arguments& args);
    Local<Value> setNbt(const Arguments& args);
    Local<Value> getBlockState(const Arguments& args);
    Local<Value> hasContainer(const Arguments& args);
    Local<Value> getContainer(const Arguments& args);
    Local<Value> hasBlockEntity(const Arguments& args);
    Local<Value> getBlockEntity(const Arguments& args);
    Local<Value> removeBlockEntity(const Arguments& args);
};
extern ClassDefine<BlockClass> BlockClassBuilder;