#pragma once

#define LOWEST_OPCODE 0
#define HIGHEST_OPCODE 10

enum OPCODES {
	VERSION_CHECK = 0,
	INTEGRITY_CHECK = 1,
	LOGIN = 10,
	LOGOUT = 11
};