OP(LOADK, CONSTANT, 1, 1)
OP(DUP,   NONE,     1, 2)
OP(DUP2,  NONE,     2, 3)
OP(SWAP,  NONE,     2, 2)
OP(POP,   NONE,     1, 0)
OP(LOADV, VARIABLE, 1, 1)
OP(STOREV, VARIABLE, 1, 0)
OP(INDEX, NONE,     2, 1)
OP(YIELD, NONE, 1, 0)
OP(EACH,  NONE,     1, 1)
OP(FORK,  BRANCH,   0, 0)
OP(JUMP,  BRANCH,   0, 0)
OP(JUMP_F,BRANCH,   1, 0)
OP(BACKTRACK, NONE, 0, 0)
OP(APPEND, NONE,    2, 1)
OP(INSERT, NONE,    4, 2)

OP(ASSIGN, VARIABLE, 3, 0)

OP(CALL_BUILTIN, CFUNC, -1, 1)

OP(CALL_JQ, UFUNC, 1, 1)
OP(RET, NONE, 1, 1)

OP(CLOSURE_PARAM, DEFINITION, 0, 0)
OP(CLOSURE_REF, CLOSURE_REF_IMM, 0, 0)
OP(CLOSURE_CREATE, DEFINITION, 0, 0)
OP(CLOSURE_CREATE_C, DEFINITION, 0, 0)
