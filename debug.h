//
// Created by zhanzhi on 2024/2/21.
//

#ifndef CVM_DEBUG_H
#define CVM_DEBUG_H
#include "chunk.h"
void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);


#endif //CVM_DEBUG_H
