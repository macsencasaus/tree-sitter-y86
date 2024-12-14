#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_COLON = 3,
  sym_labelLiteral = 4,
  anon_sym_DOTpos = 5,
  anon_sym_DOTalign = 6,
  anon_sym_DOTbyte = 7,
  anon_sym_DOTword = 8,
  anon_sym_DOTlong = 9,
  anon_sym_DOTquad = 10,
  anon_sym_COMMA = 11,
  anon_sym_halt = 12,
  anon_sym_nop = 13,
  anon_sym_rrmovq = 14,
  anon_sym_cmovle = 15,
  anon_sym_cmovl = 16,
  anon_sym_cmove = 17,
  anon_sym_cmovne = 18,
  anon_sym_cmovg = 19,
  anon_sym_cmovge = 20,
  anon_sym_irmovq = 21,
  anon_sym_rmmovq = 22,
  anon_sym_mrmovq = 23,
  anon_sym_addq = 24,
  anon_sym_subq = 25,
  anon_sym_andq = 26,
  anon_sym_xorq = 27,
  anon_sym_jmp = 28,
  anon_sym_jle = 29,
  anon_sym_jl = 30,
  anon_sym_je = 31,
  anon_sym_jne = 32,
  anon_sym_jg = 33,
  anon_sym_jge = 34,
  anon_sym_call = 35,
  anon_sym_ret = 36,
  anon_sym_pushq = 37,
  anon_sym_popq = 38,
  anon_sym_rrmovl = 39,
  anon_sym_irmovl = 40,
  anon_sym_rmmovl = 41,
  anon_sym_mrmovl = 42,
  anon_sym_addl = 43,
  anon_sym_subl = 44,
  anon_sym_andl = 45,
  anon_sym_xorl = 46,
  anon_sym_pushl = 47,
  anon_sym_popl = 48,
  anon_sym_PERCENTrax = 49,
  anon_sym_PERCENTrcx = 50,
  anon_sym_PERCENTrdx = 51,
  anon_sym_PERCENTrbx = 52,
  anon_sym_PERCENTrsp = 53,
  anon_sym_PERCENTrbp = 54,
  anon_sym_PERCENTrsi = 55,
  anon_sym_PERCENTrdi = 56,
  anon_sym_PERCENTr8 = 57,
  anon_sym_PERCENTr9 = 58,
  anon_sym_PERCENTr10 = 59,
  anon_sym_PERCENTr11 = 60,
  anon_sym_PERCENTr12 = 61,
  anon_sym_PERCENTr13 = 62,
  anon_sym_PERCENTr14 = 63,
  anon_sym_PERCENTeax = 64,
  anon_sym_PERCENTecx = 65,
  anon_sym_PERCENTedx = 66,
  anon_sym_PERCENTebx = 67,
  anon_sym_PERCENTesp = 68,
  anon_sym_PERCENTebp = 69,
  anon_sym_PERCENTesi = 70,
  anon_sym_PERCENTedi = 71,
  anon_sym_LPAREN = 72,
  anon_sym_RPAREN = 73,
  anon_sym_DOLLAR = 74,
  sym_num = 75,
  sym_program = 76,
  sym_label = 77,
  sym_directive = 78,
  sym_directiveLiteral = 79,
  sym_instruction = 80,
  sym_operand = 81,
  sym_instructionLiteral = 82,
  sym_register = 83,
  sym_memoryReference = 84,
  sym_immediate = 85,
  aux_sym_program_repeat1 = 86,
  aux_sym_program_repeat2 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_COLON] = ":",
  [sym_labelLiteral] = "labelLiteral",
  [anon_sym_DOTpos] = ".pos",
  [anon_sym_DOTalign] = ".align",
  [anon_sym_DOTbyte] = ".byte",
  [anon_sym_DOTword] = ".word",
  [anon_sym_DOTlong] = ".long",
  [anon_sym_DOTquad] = ".quad",
  [anon_sym_COMMA] = ",",
  [anon_sym_halt] = "halt",
  [anon_sym_nop] = "nop",
  [anon_sym_rrmovq] = "rrmovq",
  [anon_sym_cmovle] = "cmovle",
  [anon_sym_cmovl] = "cmovl",
  [anon_sym_cmove] = "cmove",
  [anon_sym_cmovne] = "cmovne",
  [anon_sym_cmovg] = "cmovg",
  [anon_sym_cmovge] = "cmovge",
  [anon_sym_irmovq] = "irmovq",
  [anon_sym_rmmovq] = "rmmovq",
  [anon_sym_mrmovq] = "mrmovq",
  [anon_sym_addq] = "addq",
  [anon_sym_subq] = "subq",
  [anon_sym_andq] = "andq",
  [anon_sym_xorq] = "xorq",
  [anon_sym_jmp] = "jmp",
  [anon_sym_jle] = "jle",
  [anon_sym_jl] = "jl",
  [anon_sym_je] = "je",
  [anon_sym_jne] = "jne",
  [anon_sym_jg] = "jg",
  [anon_sym_jge] = "jge",
  [anon_sym_call] = "call",
  [anon_sym_ret] = "ret",
  [anon_sym_pushq] = "pushq",
  [anon_sym_popq] = "popq",
  [anon_sym_rrmovl] = "rrmovl",
  [anon_sym_irmovl] = "irmovl",
  [anon_sym_rmmovl] = "rmmovl",
  [anon_sym_mrmovl] = "mrmovl",
  [anon_sym_addl] = "addl",
  [anon_sym_subl] = "subl",
  [anon_sym_andl] = "andl",
  [anon_sym_xorl] = "xorl",
  [anon_sym_pushl] = "pushl",
  [anon_sym_popl] = "popl",
  [anon_sym_PERCENTrax] = "%rax",
  [anon_sym_PERCENTrcx] = "%rcx",
  [anon_sym_PERCENTrdx] = "%rdx",
  [anon_sym_PERCENTrbx] = "%rbx",
  [anon_sym_PERCENTrsp] = "%rsp",
  [anon_sym_PERCENTrbp] = "%rbp",
  [anon_sym_PERCENTrsi] = "%rsi",
  [anon_sym_PERCENTrdi] = "%rdi",
  [anon_sym_PERCENTr8] = "%r8",
  [anon_sym_PERCENTr9] = "%r9",
  [anon_sym_PERCENTr10] = "%r10",
  [anon_sym_PERCENTr11] = "%r11",
  [anon_sym_PERCENTr12] = "%r12",
  [anon_sym_PERCENTr13] = "%r13",
  [anon_sym_PERCENTr14] = "%r14",
  [anon_sym_PERCENTeax] = "%eax",
  [anon_sym_PERCENTecx] = "%ecx",
  [anon_sym_PERCENTedx] = "%edx",
  [anon_sym_PERCENTebx] = "%ebx",
  [anon_sym_PERCENTesp] = "%esp",
  [anon_sym_PERCENTebp] = "%ebp",
  [anon_sym_PERCENTesi] = "%esi",
  [anon_sym_PERCENTedi] = "%edi",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$",
  [sym_num] = "num",
  [sym_program] = "program",
  [sym_label] = "label",
  [sym_directive] = "directive",
  [sym_directiveLiteral] = "directiveLiteral",
  [sym_instruction] = "instruction",
  [sym_operand] = "operand",
  [sym_instructionLiteral] = "instructionLiteral",
  [sym_register] = "register",
  [sym_memoryReference] = "memoryReference",
  [sym_immediate] = "immediate",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_labelLiteral] = sym_labelLiteral,
  [anon_sym_DOTpos] = anon_sym_DOTpos,
  [anon_sym_DOTalign] = anon_sym_DOTalign,
  [anon_sym_DOTbyte] = anon_sym_DOTbyte,
  [anon_sym_DOTword] = anon_sym_DOTword,
  [anon_sym_DOTlong] = anon_sym_DOTlong,
  [anon_sym_DOTquad] = anon_sym_DOTquad,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_halt] = anon_sym_halt,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_rrmovq] = anon_sym_rrmovq,
  [anon_sym_cmovle] = anon_sym_cmovle,
  [anon_sym_cmovl] = anon_sym_cmovl,
  [anon_sym_cmove] = anon_sym_cmove,
  [anon_sym_cmovne] = anon_sym_cmovne,
  [anon_sym_cmovg] = anon_sym_cmovg,
  [anon_sym_cmovge] = anon_sym_cmovge,
  [anon_sym_irmovq] = anon_sym_irmovq,
  [anon_sym_rmmovq] = anon_sym_rmmovq,
  [anon_sym_mrmovq] = anon_sym_mrmovq,
  [anon_sym_addq] = anon_sym_addq,
  [anon_sym_subq] = anon_sym_subq,
  [anon_sym_andq] = anon_sym_andq,
  [anon_sym_xorq] = anon_sym_xorq,
  [anon_sym_jmp] = anon_sym_jmp,
  [anon_sym_jle] = anon_sym_jle,
  [anon_sym_jl] = anon_sym_jl,
  [anon_sym_je] = anon_sym_je,
  [anon_sym_jne] = anon_sym_jne,
  [anon_sym_jg] = anon_sym_jg,
  [anon_sym_jge] = anon_sym_jge,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_ret] = anon_sym_ret,
  [anon_sym_pushq] = anon_sym_pushq,
  [anon_sym_popq] = anon_sym_popq,
  [anon_sym_rrmovl] = anon_sym_rrmovl,
  [anon_sym_irmovl] = anon_sym_irmovl,
  [anon_sym_rmmovl] = anon_sym_rmmovl,
  [anon_sym_mrmovl] = anon_sym_mrmovl,
  [anon_sym_addl] = anon_sym_addl,
  [anon_sym_subl] = anon_sym_subl,
  [anon_sym_andl] = anon_sym_andl,
  [anon_sym_xorl] = anon_sym_xorl,
  [anon_sym_pushl] = anon_sym_pushl,
  [anon_sym_popl] = anon_sym_popl,
  [anon_sym_PERCENTrax] = anon_sym_PERCENTrax,
  [anon_sym_PERCENTrcx] = anon_sym_PERCENTrcx,
  [anon_sym_PERCENTrdx] = anon_sym_PERCENTrdx,
  [anon_sym_PERCENTrbx] = anon_sym_PERCENTrbx,
  [anon_sym_PERCENTrsp] = anon_sym_PERCENTrsp,
  [anon_sym_PERCENTrbp] = anon_sym_PERCENTrbp,
  [anon_sym_PERCENTrsi] = anon_sym_PERCENTrsi,
  [anon_sym_PERCENTrdi] = anon_sym_PERCENTrdi,
  [anon_sym_PERCENTr8] = anon_sym_PERCENTr8,
  [anon_sym_PERCENTr9] = anon_sym_PERCENTr9,
  [anon_sym_PERCENTr10] = anon_sym_PERCENTr10,
  [anon_sym_PERCENTr11] = anon_sym_PERCENTr11,
  [anon_sym_PERCENTr12] = anon_sym_PERCENTr12,
  [anon_sym_PERCENTr13] = anon_sym_PERCENTr13,
  [anon_sym_PERCENTr14] = anon_sym_PERCENTr14,
  [anon_sym_PERCENTeax] = anon_sym_PERCENTeax,
  [anon_sym_PERCENTecx] = anon_sym_PERCENTecx,
  [anon_sym_PERCENTedx] = anon_sym_PERCENTedx,
  [anon_sym_PERCENTebx] = anon_sym_PERCENTebx,
  [anon_sym_PERCENTesp] = anon_sym_PERCENTesp,
  [anon_sym_PERCENTebp] = anon_sym_PERCENTebp,
  [anon_sym_PERCENTesi] = anon_sym_PERCENTesi,
  [anon_sym_PERCENTedi] = anon_sym_PERCENTedi,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_num] = sym_num,
  [sym_program] = sym_program,
  [sym_label] = sym_label,
  [sym_directive] = sym_directive,
  [sym_directiveLiteral] = sym_directiveLiteral,
  [sym_instruction] = sym_instruction,
  [sym_operand] = sym_operand,
  [sym_instructionLiteral] = sym_instructionLiteral,
  [sym_register] = sym_register,
  [sym_memoryReference] = sym_memoryReference,
  [sym_immediate] = sym_immediate,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_labelLiteral] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTpos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTquad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_halt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rrmovq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_irmovq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rmmovq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mrmovq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xorq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_je] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rrmovl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_irmovl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rmmovl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mrmovl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xorl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrcx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrdx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrbx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrsp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrbp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrsi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrdi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTeax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTecx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTedx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTebx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTesp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTebp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTesi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTedi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directiveLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_instructionLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_memoryReference] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      ADVANCE_MAP(
        '\n', 21,
        '#', 22,
        '$', 164,
        '%', 6,
        '(', 162,
        ')', 163,
        ',', 101,
        '-', 1,
        '.', 4,
        '0', 165,
        ':', 23,
        'a', 28,
        'c', 24,
        'h', 26,
        'i', 77,
        'j', 33,
        'm', 80,
        'n', 66,
        'p', 70,
        'r', 34,
        's', 86,
        'x', 65,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(165);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(149);
      if (lookahead == '1') ADVANCE(150);
      if (lookahead == '2') ADVANCE(151);
      if (lookahead == '3') ADVANCE(152);
      if (lookahead == '4') ADVANCE(153);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '1', 2,
        '8', 147,
        '9', 148,
        'a', 15,
        'b', 12,
        'c', 16,
        'd', 9,
        's', 10,
      );
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'q') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'x') ADVANCE(156);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(141);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(159);
      if (lookahead == 'x') ADVANCE(157);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(142);
      END_STATE();
    case 13:
      if (lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 14:
      if (lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 15:
      if (lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 16:
      if (lookahead == 'x') ADVANCE(140);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 18:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      ADVANCE_MAP(
        '\n', 21,
        '#', 22,
        '$', 164,
        '%', 6,
        '(', 162,
        '-', 1,
        '.', 18,
        '0', 165,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'a') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'a') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'b') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'd') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'd') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'd') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'd') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'g') ADVANCE(109);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'g') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'g') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'h') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'i') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'q') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'q') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'q') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == 'q') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 'q') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'q') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'q') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 'q') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'q') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'q') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'l') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'm') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'm') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'm') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'm') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'n') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'n') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'o') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'o') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'o') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'o') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'o') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'o') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'o') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'p') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'p') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'p') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'r') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'r') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 's') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 's') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 't') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'u') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'u') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'v') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'v') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'v') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'v') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'v') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (lookahead == 'y') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_labelLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOTpos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_halt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_nop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_rrmovq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_cmovle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_cmovl);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_cmove);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_cmovne);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_cmovg);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_cmovge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_irmovq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_rmmovq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_mrmovq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_addq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_subq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_andq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_xorq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_jle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_jl);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_je);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_jne);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_jg);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_jge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_ret);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_pushq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_popq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_rrmovl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_irmovl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_rmmovl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_mrmovl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_addl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_subl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_andl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_xorl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_pushl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_popl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_PERCENTrax);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PERCENTrcx);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PERCENTrdx);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PERCENTrbx);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_PERCENTrsp);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PERCENTrbp);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PERCENTrsi);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_PERCENTrdi);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_PERCENTr8);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_PERCENTr9);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_PERCENTr10);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PERCENTr11);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PERCENTr12);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PERCENTr13);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PERCENTr14);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PERCENTeax);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PERCENTecx);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PERCENTedx);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PERCENTebx);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PERCENTesp);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PERCENTebp);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PERCENTesi);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PERCENTedi);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_labelLiteral] = ACTIONS(1),
    [anon_sym_DOTpos] = ACTIONS(1),
    [anon_sym_DOTalign] = ACTIONS(1),
    [anon_sym_DOTbyte] = ACTIONS(1),
    [anon_sym_DOTword] = ACTIONS(1),
    [anon_sym_DOTlong] = ACTIONS(1),
    [anon_sym_DOTquad] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_halt] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_rrmovq] = ACTIONS(1),
    [anon_sym_cmovle] = ACTIONS(1),
    [anon_sym_cmovl] = ACTIONS(1),
    [anon_sym_cmove] = ACTIONS(1),
    [anon_sym_cmovne] = ACTIONS(1),
    [anon_sym_cmovg] = ACTIONS(1),
    [anon_sym_cmovge] = ACTIONS(1),
    [anon_sym_irmovq] = ACTIONS(1),
    [anon_sym_rmmovq] = ACTIONS(1),
    [anon_sym_mrmovq] = ACTIONS(1),
    [anon_sym_addq] = ACTIONS(1),
    [anon_sym_subq] = ACTIONS(1),
    [anon_sym_andq] = ACTIONS(1),
    [anon_sym_xorq] = ACTIONS(1),
    [anon_sym_jmp] = ACTIONS(1),
    [anon_sym_jle] = ACTIONS(1),
    [anon_sym_jl] = ACTIONS(1),
    [anon_sym_je] = ACTIONS(1),
    [anon_sym_jne] = ACTIONS(1),
    [anon_sym_jg] = ACTIONS(1),
    [anon_sym_jge] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_ret] = ACTIONS(1),
    [anon_sym_pushq] = ACTIONS(1),
    [anon_sym_popq] = ACTIONS(1),
    [anon_sym_rrmovl] = ACTIONS(1),
    [anon_sym_irmovl] = ACTIONS(1),
    [anon_sym_rmmovl] = ACTIONS(1),
    [anon_sym_mrmovl] = ACTIONS(1),
    [anon_sym_addl] = ACTIONS(1),
    [anon_sym_subl] = ACTIONS(1),
    [anon_sym_andl] = ACTIONS(1),
    [anon_sym_xorl] = ACTIONS(1),
    [anon_sym_pushl] = ACTIONS(1),
    [anon_sym_popl] = ACTIONS(1),
    [anon_sym_PERCENTrax] = ACTIONS(1),
    [anon_sym_PERCENTrcx] = ACTIONS(1),
    [anon_sym_PERCENTrdx] = ACTIONS(1),
    [anon_sym_PERCENTrbx] = ACTIONS(1),
    [anon_sym_PERCENTrsp] = ACTIONS(1),
    [anon_sym_PERCENTrbp] = ACTIONS(1),
    [anon_sym_PERCENTrsi] = ACTIONS(1),
    [anon_sym_PERCENTrdi] = ACTIONS(1),
    [anon_sym_PERCENTr8] = ACTIONS(1),
    [anon_sym_PERCENTr9] = ACTIONS(1),
    [anon_sym_PERCENTr10] = ACTIONS(1),
    [anon_sym_PERCENTr11] = ACTIONS(1),
    [anon_sym_PERCENTr12] = ACTIONS(1),
    [anon_sym_PERCENTr13] = ACTIONS(1),
    [anon_sym_PERCENTr14] = ACTIONS(1),
    [anon_sym_PERCENTeax] = ACTIONS(1),
    [anon_sym_PERCENTecx] = ACTIONS(1),
    [anon_sym_PERCENTedx] = ACTIONS(1),
    [anon_sym_PERCENTebx] = ACTIONS(1),
    [anon_sym_PERCENTesp] = ACTIONS(1),
    [anon_sym_PERCENTebp] = ACTIONS(1),
    [anon_sym_PERCENTesi] = ACTIONS(1),
    [anon_sym_PERCENTedi] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(28),
    [sym_label] = STATE(14),
    [sym_directive] = STATE(14),
    [sym_directiveLiteral] = STATE(26),
    [sym_instruction] = STATE(14),
    [sym_instructionLiteral] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_labelLiteral] = ACTIONS(7),
    [anon_sym_DOTpos] = ACTIONS(9),
    [anon_sym_DOTalign] = ACTIONS(9),
    [anon_sym_DOTbyte] = ACTIONS(9),
    [anon_sym_DOTword] = ACTIONS(9),
    [anon_sym_DOTlong] = ACTIONS(9),
    [anon_sym_DOTquad] = ACTIONS(9),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_rrmovq] = ACTIONS(11),
    [anon_sym_cmovle] = ACTIONS(11),
    [anon_sym_cmovl] = ACTIONS(11),
    [anon_sym_cmove] = ACTIONS(11),
    [anon_sym_cmovne] = ACTIONS(11),
    [anon_sym_cmovg] = ACTIONS(11),
    [anon_sym_cmovge] = ACTIONS(11),
    [anon_sym_irmovq] = ACTIONS(11),
    [anon_sym_rmmovq] = ACTIONS(11),
    [anon_sym_mrmovq] = ACTIONS(11),
    [anon_sym_addq] = ACTIONS(11),
    [anon_sym_subq] = ACTIONS(11),
    [anon_sym_andq] = ACTIONS(11),
    [anon_sym_xorq] = ACTIONS(11),
    [anon_sym_jmp] = ACTIONS(11),
    [anon_sym_jle] = ACTIONS(11),
    [anon_sym_jl] = ACTIONS(11),
    [anon_sym_je] = ACTIONS(11),
    [anon_sym_jne] = ACTIONS(11),
    [anon_sym_jg] = ACTIONS(11),
    [anon_sym_jge] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ret] = ACTIONS(11),
    [anon_sym_pushq] = ACTIONS(11),
    [anon_sym_popq] = ACTIONS(11),
    [anon_sym_rrmovl] = ACTIONS(11),
    [anon_sym_irmovl] = ACTIONS(11),
    [anon_sym_rmmovl] = ACTIONS(11),
    [anon_sym_mrmovl] = ACTIONS(11),
    [anon_sym_addl] = ACTIONS(11),
    [anon_sym_subl] = ACTIONS(11),
    [anon_sym_andl] = ACTIONS(11),
    [anon_sym_xorl] = ACTIONS(11),
    [anon_sym_pushl] = ACTIONS(11),
    [anon_sym_popl] = ACTIONS(11),
  },
  [2] = {
    [sym_label] = STATE(23),
    [sym_directive] = STATE(23),
    [sym_directiveLiteral] = STATE(26),
    [sym_instruction] = STATE(23),
    [sym_instructionLiteral] = STATE(6),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_labelLiteral] = ACTIONS(7),
    [anon_sym_DOTpos] = ACTIONS(9),
    [anon_sym_DOTalign] = ACTIONS(9),
    [anon_sym_DOTbyte] = ACTIONS(9),
    [anon_sym_DOTword] = ACTIONS(9),
    [anon_sym_DOTlong] = ACTIONS(9),
    [anon_sym_DOTquad] = ACTIONS(9),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_rrmovq] = ACTIONS(11),
    [anon_sym_cmovle] = ACTIONS(11),
    [anon_sym_cmovl] = ACTIONS(11),
    [anon_sym_cmove] = ACTIONS(11),
    [anon_sym_cmovne] = ACTIONS(11),
    [anon_sym_cmovg] = ACTIONS(11),
    [anon_sym_cmovge] = ACTIONS(11),
    [anon_sym_irmovq] = ACTIONS(11),
    [anon_sym_rmmovq] = ACTIONS(11),
    [anon_sym_mrmovq] = ACTIONS(11),
    [anon_sym_addq] = ACTIONS(11),
    [anon_sym_subq] = ACTIONS(11),
    [anon_sym_andq] = ACTIONS(11),
    [anon_sym_xorq] = ACTIONS(11),
    [anon_sym_jmp] = ACTIONS(11),
    [anon_sym_jle] = ACTIONS(11),
    [anon_sym_jl] = ACTIONS(11),
    [anon_sym_je] = ACTIONS(11),
    [anon_sym_jne] = ACTIONS(11),
    [anon_sym_jg] = ACTIONS(11),
    [anon_sym_jge] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ret] = ACTIONS(11),
    [anon_sym_pushq] = ACTIONS(11),
    [anon_sym_popq] = ACTIONS(11),
    [anon_sym_rrmovl] = ACTIONS(11),
    [anon_sym_irmovl] = ACTIONS(11),
    [anon_sym_rmmovl] = ACTIONS(11),
    [anon_sym_mrmovl] = ACTIONS(11),
    [anon_sym_addl] = ACTIONS(11),
    [anon_sym_subl] = ACTIONS(11),
    [anon_sym_andl] = ACTIONS(11),
    [anon_sym_xorl] = ACTIONS(11),
    [anon_sym_pushl] = ACTIONS(11),
    [anon_sym_popl] = ACTIONS(11),
  },
  [3] = {
    [sym_label] = STATE(23),
    [sym_directive] = STATE(23),
    [sym_directiveLiteral] = STATE(26),
    [sym_instruction] = STATE(23),
    [sym_instructionLiteral] = STATE(6),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_labelLiteral] = ACTIONS(7),
    [anon_sym_DOTpos] = ACTIONS(9),
    [anon_sym_DOTalign] = ACTIONS(9),
    [anon_sym_DOTbyte] = ACTIONS(9),
    [anon_sym_DOTword] = ACTIONS(9),
    [anon_sym_DOTlong] = ACTIONS(9),
    [anon_sym_DOTquad] = ACTIONS(9),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_rrmovq] = ACTIONS(11),
    [anon_sym_cmovle] = ACTIONS(11),
    [anon_sym_cmovl] = ACTIONS(11),
    [anon_sym_cmove] = ACTIONS(11),
    [anon_sym_cmovne] = ACTIONS(11),
    [anon_sym_cmovg] = ACTIONS(11),
    [anon_sym_cmovge] = ACTIONS(11),
    [anon_sym_irmovq] = ACTIONS(11),
    [anon_sym_rmmovq] = ACTIONS(11),
    [anon_sym_mrmovq] = ACTIONS(11),
    [anon_sym_addq] = ACTIONS(11),
    [anon_sym_subq] = ACTIONS(11),
    [anon_sym_andq] = ACTIONS(11),
    [anon_sym_xorq] = ACTIONS(11),
    [anon_sym_jmp] = ACTIONS(11),
    [anon_sym_jle] = ACTIONS(11),
    [anon_sym_jl] = ACTIONS(11),
    [anon_sym_je] = ACTIONS(11),
    [anon_sym_jne] = ACTIONS(11),
    [anon_sym_jg] = ACTIONS(11),
    [anon_sym_jge] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ret] = ACTIONS(11),
    [anon_sym_pushq] = ACTIONS(11),
    [anon_sym_popq] = ACTIONS(11),
    [anon_sym_rrmovl] = ACTIONS(11),
    [anon_sym_irmovl] = ACTIONS(11),
    [anon_sym_rmmovl] = ACTIONS(11),
    [anon_sym_mrmovl] = ACTIONS(11),
    [anon_sym_addl] = ACTIONS(11),
    [anon_sym_subl] = ACTIONS(11),
    [anon_sym_andl] = ACTIONS(11),
    [anon_sym_xorl] = ACTIONS(11),
    [anon_sym_pushl] = ACTIONS(11),
    [anon_sym_popl] = ACTIONS(11),
  },
  [4] = {
    [sym_label] = STATE(23),
    [sym_directive] = STATE(23),
    [sym_directiveLiteral] = STATE(26),
    [sym_instruction] = STATE(23),
    [sym_instructionLiteral] = STATE(6),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_LF] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_labelLiteral] = ACTIONS(7),
    [anon_sym_DOTpos] = ACTIONS(9),
    [anon_sym_DOTalign] = ACTIONS(9),
    [anon_sym_DOTbyte] = ACTIONS(9),
    [anon_sym_DOTword] = ACTIONS(9),
    [anon_sym_DOTlong] = ACTIONS(9),
    [anon_sym_DOTquad] = ACTIONS(9),
    [anon_sym_halt] = ACTIONS(11),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_rrmovq] = ACTIONS(11),
    [anon_sym_cmovle] = ACTIONS(11),
    [anon_sym_cmovl] = ACTIONS(11),
    [anon_sym_cmove] = ACTIONS(11),
    [anon_sym_cmovne] = ACTIONS(11),
    [anon_sym_cmovg] = ACTIONS(11),
    [anon_sym_cmovge] = ACTIONS(11),
    [anon_sym_irmovq] = ACTIONS(11),
    [anon_sym_rmmovq] = ACTIONS(11),
    [anon_sym_mrmovq] = ACTIONS(11),
    [anon_sym_addq] = ACTIONS(11),
    [anon_sym_subq] = ACTIONS(11),
    [anon_sym_andq] = ACTIONS(11),
    [anon_sym_xorq] = ACTIONS(11),
    [anon_sym_jmp] = ACTIONS(11),
    [anon_sym_jle] = ACTIONS(11),
    [anon_sym_jl] = ACTIONS(11),
    [anon_sym_je] = ACTIONS(11),
    [anon_sym_jne] = ACTIONS(11),
    [anon_sym_jg] = ACTIONS(11),
    [anon_sym_jge] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ret] = ACTIONS(11),
    [anon_sym_pushq] = ACTIONS(11),
    [anon_sym_popq] = ACTIONS(11),
    [anon_sym_rrmovl] = ACTIONS(11),
    [anon_sym_irmovl] = ACTIONS(11),
    [anon_sym_rmmovl] = ACTIONS(11),
    [anon_sym_mrmovl] = ACTIONS(11),
    [anon_sym_addl] = ACTIONS(11),
    [anon_sym_subl] = ACTIONS(11),
    [anon_sym_andl] = ACTIONS(11),
    [anon_sym_xorl] = ACTIONS(11),
    [anon_sym_pushl] = ACTIONS(11),
    [anon_sym_popl] = ACTIONS(11),
  },
  [5] = {
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_labelLiteral] = ACTIONS(24),
    [anon_sym_DOTpos] = ACTIONS(24),
    [anon_sym_DOTalign] = ACTIONS(24),
    [anon_sym_DOTbyte] = ACTIONS(24),
    [anon_sym_DOTword] = ACTIONS(24),
    [anon_sym_DOTlong] = ACTIONS(24),
    [anon_sym_DOTquad] = ACTIONS(24),
    [anon_sym_halt] = ACTIONS(24),
    [anon_sym_nop] = ACTIONS(24),
    [anon_sym_rrmovq] = ACTIONS(24),
    [anon_sym_cmovle] = ACTIONS(24),
    [anon_sym_cmovl] = ACTIONS(24),
    [anon_sym_cmove] = ACTIONS(24),
    [anon_sym_cmovne] = ACTIONS(24),
    [anon_sym_cmovg] = ACTIONS(24),
    [anon_sym_cmovge] = ACTIONS(24),
    [anon_sym_irmovq] = ACTIONS(24),
    [anon_sym_rmmovq] = ACTIONS(24),
    [anon_sym_mrmovq] = ACTIONS(24),
    [anon_sym_addq] = ACTIONS(24),
    [anon_sym_subq] = ACTIONS(24),
    [anon_sym_andq] = ACTIONS(24),
    [anon_sym_xorq] = ACTIONS(24),
    [anon_sym_jmp] = ACTIONS(24),
    [anon_sym_jle] = ACTIONS(24),
    [anon_sym_jl] = ACTIONS(24),
    [anon_sym_je] = ACTIONS(24),
    [anon_sym_jne] = ACTIONS(24),
    [anon_sym_jg] = ACTIONS(24),
    [anon_sym_jge] = ACTIONS(24),
    [anon_sym_call] = ACTIONS(24),
    [anon_sym_ret] = ACTIONS(24),
    [anon_sym_pushq] = ACTIONS(24),
    [anon_sym_popq] = ACTIONS(24),
    [anon_sym_rrmovl] = ACTIONS(24),
    [anon_sym_irmovl] = ACTIONS(24),
    [anon_sym_rmmovl] = ACTIONS(24),
    [anon_sym_mrmovl] = ACTIONS(24),
    [anon_sym_addl] = ACTIONS(24),
    [anon_sym_subl] = ACTIONS(24),
    [anon_sym_andl] = ACTIONS(24),
    [anon_sym_xorl] = ACTIONS(24),
    [anon_sym_pushl] = ACTIONS(24),
    [anon_sym_popl] = ACTIONS(24),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_labelLiteral,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      anon_sym_DOLLAR,
    ACTIONS(36), 1,
      sym_num,
    STATE(16), 1,
      sym_register,
    STATE(29), 1,
      sym_operand,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(19), 2,
      sym_memoryReference,
      sym_immediate,
    ACTIONS(30), 23,
      anon_sym_PERCENTrax,
      anon_sym_PERCENTrcx,
      anon_sym_PERCENTrdx,
      anon_sym_PERCENTrbx,
      anon_sym_PERCENTrsp,
      anon_sym_PERCENTrbp,
      anon_sym_PERCENTrsi,
      anon_sym_PERCENTrdi,
      anon_sym_PERCENTr8,
      anon_sym_PERCENTr9,
      anon_sym_PERCENTr10,
      anon_sym_PERCENTr11,
      anon_sym_PERCENTr12,
      anon_sym_PERCENTr13,
      anon_sym_PERCENTr14,
      anon_sym_PERCENTeax,
      anon_sym_PERCENTecx,
      anon_sym_PERCENTedx,
      anon_sym_PERCENTebx,
      anon_sym_PERCENTesp,
      anon_sym_PERCENTebp,
      anon_sym_PERCENTesi,
      anon_sym_PERCENTedi,
  [55] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      anon_sym_DOLLAR,
    ACTIONS(36), 1,
      sym_num,
    ACTIONS(38), 1,
      sym_labelLiteral,
    STATE(24), 1,
      sym_operand,
    STATE(19), 3,
      sym_register,
      sym_memoryReference,
      sym_immediate,
    ACTIONS(30), 23,
      anon_sym_PERCENTrax,
      anon_sym_PERCENTrcx,
      anon_sym_PERCENTrdx,
      anon_sym_PERCENTrbx,
      anon_sym_PERCENTrsp,
      anon_sym_PERCENTrbp,
      anon_sym_PERCENTrsi,
      anon_sym_PERCENTrdi,
      anon_sym_PERCENTr8,
      anon_sym_PERCENTr9,
      anon_sym_PERCENTr10,
      anon_sym_PERCENTr11,
      anon_sym_PERCENTr12,
      anon_sym_PERCENTr13,
      anon_sym_PERCENTr14,
      anon_sym_PERCENTeax,
      anon_sym_PERCENTecx,
      anon_sym_PERCENTedx,
      anon_sym_PERCENTebx,
      anon_sym_PERCENTesp,
      anon_sym_PERCENTebp,
      anon_sym_PERCENTesi,
      anon_sym_PERCENTedi,
  [104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_labelLiteral,
      anon_sym_PERCENTrax,
      anon_sym_PERCENTrcx,
      anon_sym_PERCENTrdx,
      anon_sym_PERCENTrbx,
      anon_sym_PERCENTrsp,
      anon_sym_PERCENTrbp,
      anon_sym_PERCENTrsi,
      anon_sym_PERCENTrdi,
      anon_sym_PERCENTr8,
      anon_sym_PERCENTr9,
      anon_sym_PERCENTr10,
      anon_sym_PERCENTr11,
      anon_sym_PERCENTr12,
      anon_sym_PERCENTr13,
      anon_sym_PERCENTr14,
      anon_sym_PERCENTeax,
      anon_sym_PERCENTecx,
      anon_sym_PERCENTedx,
      anon_sym_PERCENTebx,
      anon_sym_PERCENTesp,
      anon_sym_PERCENTebp,
      anon_sym_PERCENTesi,
      anon_sym_PERCENTedi,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_num,
  [139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(30), 1,
      sym_register,
    ACTIONS(30), 23,
      anon_sym_PERCENTrax,
      anon_sym_PERCENTrcx,
      anon_sym_PERCENTrdx,
      anon_sym_PERCENTrbx,
      anon_sym_PERCENTrsp,
      anon_sym_PERCENTrbp,
      anon_sym_PERCENTrsi,
      anon_sym_PERCENTrdi,
      anon_sym_PERCENTr8,
      anon_sym_PERCENTr9,
      anon_sym_PERCENTr10,
      anon_sym_PERCENTr11,
      anon_sym_PERCENTr12,
      anon_sym_PERCENTr13,
      anon_sym_PERCENTr14,
      anon_sym_PERCENTeax,
      anon_sym_PERCENTecx,
      anon_sym_PERCENTedx,
      anon_sym_PERCENTebx,
      anon_sym_PERCENTesp,
      anon_sym_PERCENTebp,
      anon_sym_PERCENTesi,
      anon_sym_PERCENTedi,
  [171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 1,
      sym_register,
    ACTIONS(30), 23,
      anon_sym_PERCENTrax,
      anon_sym_PERCENTrcx,
      anon_sym_PERCENTrdx,
      anon_sym_PERCENTrbx,
      anon_sym_PERCENTrsp,
      anon_sym_PERCENTrbp,
      anon_sym_PERCENTrsi,
      anon_sym_PERCENTrdi,
      anon_sym_PERCENTr8,
      anon_sym_PERCENTr9,
      anon_sym_PERCENTr10,
      anon_sym_PERCENTr11,
      anon_sym_PERCENTr12,
      anon_sym_PERCENTr13,
      anon_sym_PERCENTr14,
      anon_sym_PERCENTeax,
      anon_sym_PERCENTecx,
      anon_sym_PERCENTedx,
      anon_sym_PERCENTebx,
      anon_sym_PERCENTesp,
      anon_sym_PERCENTebp,
      anon_sym_PERCENTesi,
      anon_sym_PERCENTedi,
  [203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(15), 1,
      aux_sym_program_repeat2,
  [241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(13), 1,
      aux_sym_program_repeat2,
  [257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_program_repeat1,
    STATE(15), 1,
      aux_sym_program_repeat2,
  [273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLON,
  [359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_num,
  [366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_num,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_COMMA,
  [387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
  [394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_num,
  [401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 55,
  [SMALL_STATE(8)] = 104,
  [SMALL_STATE(9)] = 139,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 215,
  [SMALL_STATE(13)] = 225,
  [SMALL_STATE(14)] = 241,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 273,
  [SMALL_STATE(17)] = 284,
  [SMALL_STATE(18)] = 293,
  [SMALL_STATE(19)] = 302,
  [SMALL_STATE(20)] = 311,
  [SMALL_STATE(21)] = 320,
  [SMALL_STATE(22)] = 328,
  [SMALL_STATE(23)] = 336,
  [SMALL_STATE(24)] = 344,
  [SMALL_STATE(25)] = 352,
  [SMALL_STATE(26)] = 359,
  [SMALL_STATE(27)] = 366,
  [SMALL_STATE(28)] = 373,
  [SMALL_STATE(29)] = 380,
  [SMALL_STATE(30)] = 387,
  [SMALL_STATE(31)] = 394,
  [SMALL_STATE(32)] = 401,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instructionLiteral, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryReference, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryReference, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directiveLiteral, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_y86(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
