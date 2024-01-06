#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_sort = 3,
  anon_sym_init = 4,
  anon_sym_next = 5,
  anon_sym_bad = 6,
  anon_sym_constraint = 7,
  anon_sym_fair = 8,
  anon_sym_output = 9,
  anon_sym_justice = 10,
  anon_sym_sext = 11,
  anon_sym_uext = 12,
  anon_sym_slice = 13,
  anon_sym_not = 14,
  anon_sym_inc = 15,
  anon_sym_dec = 16,
  anon_sym_neg = 17,
  anon_sym_redand = 18,
  anon_sym_redor = 19,
  anon_sym_redxor = 20,
  anon_sym_iff = 21,
  anon_sym_implies = 22,
  anon_sym_eq = 23,
  anon_sym_neq = 24,
  anon_sym_sgt = 25,
  anon_sym_ugt = 26,
  anon_sym_sgte = 27,
  anon_sym_ugte = 28,
  anon_sym_slt = 29,
  anon_sym_ult = 30,
  anon_sym_slte = 31,
  anon_sym_ulte = 32,
  anon_sym_and = 33,
  anon_sym_nand = 34,
  anon_sym_nor = 35,
  anon_sym_or = 36,
  anon_sym_xnor = 37,
  anon_sym_xor = 38,
  anon_sym_rol = 39,
  anon_sym_ror = 40,
  anon_sym_sll = 41,
  anon_sym_sra = 42,
  anon_sym_srl = 43,
  anon_sym_add = 44,
  anon_sym_mul = 45,
  anon_sym_sdiv = 46,
  anon_sym_udiv = 47,
  anon_sym_smod = 48,
  anon_sym_srem = 49,
  anon_sym_urem = 50,
  anon_sym_sub = 51,
  anon_sym_saddo = 52,
  anon_sym_uaddo = 53,
  anon_sym_sdivo = 54,
  anon_sym_smulo = 55,
  anon_sym_umulo = 56,
  anon_sym_ssubo = 57,
  anon_sym_usubo = 58,
  anon_sym_concat = 59,
  anon_sym_read = 60,
  anon_sym_ite = 61,
  anon_sym_write = 62,
  anon_sym_state = 63,
  anon_sym_input = 64,
  anon_sym_one = 65,
  anon_sym_ones = 66,
  anon_sym_zero = 67,
  anon_sym_const = 68,
  aux_sym_const_token1 = 69,
  anon_sym_constd = 70,
  anon_sym_DASH = 71,
  anon_sym_consth = 72,
  aux_sym_consth_token1 = 73,
  anon_sym_array = 74,
  anon_sym_bitvec = 75,
  sym_symbol = 76,
  sym_uint = 77,
  sym_num = 78,
  sym_source_file = 79,
  sym_line = 80,
  sym_comment = 81,
  sym_node = 82,
  sym_opidx = 83,
  sym_op = 84,
  sym_state = 85,
  sym_input = 86,
  sym_const = 87,
  sym_constd = 88,
  sym_consth = 89,
  sym_array = 90,
  sym_bitvec = 91,
  sym_nid = 92,
  sym_sid = 93,
  aux_sym_source_file_repeat1 = 94,
  aux_sym_node_repeat1 = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_sort] = "sort",
  [anon_sym_init] = "init",
  [anon_sym_next] = "next",
  [anon_sym_bad] = "bad",
  [anon_sym_constraint] = "constraint",
  [anon_sym_fair] = "fair",
  [anon_sym_output] = "output",
  [anon_sym_justice] = "justice",
  [anon_sym_sext] = "sext",
  [anon_sym_uext] = "uext",
  [anon_sym_slice] = "slice",
  [anon_sym_not] = "not",
  [anon_sym_inc] = "inc",
  [anon_sym_dec] = "dec",
  [anon_sym_neg] = "neg",
  [anon_sym_redand] = "redand",
  [anon_sym_redor] = "redor",
  [anon_sym_redxor] = "redxor",
  [anon_sym_iff] = "iff",
  [anon_sym_implies] = "implies",
  [anon_sym_eq] = "eq",
  [anon_sym_neq] = "neq",
  [anon_sym_sgt] = "sgt",
  [anon_sym_ugt] = "ugt",
  [anon_sym_sgte] = "sgte",
  [anon_sym_ugte] = "ugte",
  [anon_sym_slt] = "slt",
  [anon_sym_ult] = "ult",
  [anon_sym_slte] = "slte",
  [anon_sym_ulte] = "ulte",
  [anon_sym_and] = "and",
  [anon_sym_nand] = "nand",
  [anon_sym_nor] = "nor",
  [anon_sym_or] = "or",
  [anon_sym_xnor] = "xnor",
  [anon_sym_xor] = "xor",
  [anon_sym_rol] = "rol",
  [anon_sym_ror] = "ror",
  [anon_sym_sll] = "sll",
  [anon_sym_sra] = "sra",
  [anon_sym_srl] = "srl",
  [anon_sym_add] = "add",
  [anon_sym_mul] = "mul",
  [anon_sym_sdiv] = "sdiv",
  [anon_sym_udiv] = "udiv",
  [anon_sym_smod] = "smod",
  [anon_sym_srem] = "srem",
  [anon_sym_urem] = "urem",
  [anon_sym_sub] = "sub",
  [anon_sym_saddo] = "saddo",
  [anon_sym_uaddo] = "uaddo",
  [anon_sym_sdivo] = "sdivo",
  [anon_sym_smulo] = "smulo",
  [anon_sym_umulo] = "umulo",
  [anon_sym_ssubo] = "ssubo",
  [anon_sym_usubo] = "usubo",
  [anon_sym_concat] = "concat",
  [anon_sym_read] = "read",
  [anon_sym_ite] = "ite",
  [anon_sym_write] = "write",
  [anon_sym_state] = "state",
  [anon_sym_input] = "input",
  [anon_sym_one] = "one",
  [anon_sym_ones] = "ones",
  [anon_sym_zero] = "zero",
  [anon_sym_const] = "const",
  [aux_sym_const_token1] = "const_token1",
  [anon_sym_constd] = "constd",
  [anon_sym_DASH] = "-",
  [anon_sym_consth] = "consth",
  [aux_sym_consth_token1] = "consth_token1",
  [anon_sym_array] = "array",
  [anon_sym_bitvec] = "bitvec",
  [sym_symbol] = "symbol",
  [sym_uint] = "uint",
  [sym_num] = "num",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_comment] = "comment",
  [sym_node] = "node",
  [sym_opidx] = "opidx",
  [sym_op] = "op",
  [sym_state] = "state",
  [sym_input] = "input",
  [sym_const] = "const",
  [sym_constd] = "constd",
  [sym_consth] = "consth",
  [sym_array] = "array",
  [sym_bitvec] = "bitvec",
  [sym_nid] = "nid",
  [sym_sid] = "sid",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_node_repeat1] = "node_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_init] = anon_sym_init,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_bad] = anon_sym_bad,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_fair] = anon_sym_fair,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_justice] = anon_sym_justice,
  [anon_sym_sext] = anon_sym_sext,
  [anon_sym_uext] = anon_sym_uext,
  [anon_sym_slice] = anon_sym_slice,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_inc] = anon_sym_inc,
  [anon_sym_dec] = anon_sym_dec,
  [anon_sym_neg] = anon_sym_neg,
  [anon_sym_redand] = anon_sym_redand,
  [anon_sym_redor] = anon_sym_redor,
  [anon_sym_redxor] = anon_sym_redxor,
  [anon_sym_iff] = anon_sym_iff,
  [anon_sym_implies] = anon_sym_implies,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_neq] = anon_sym_neq,
  [anon_sym_sgt] = anon_sym_sgt,
  [anon_sym_ugt] = anon_sym_ugt,
  [anon_sym_sgte] = anon_sym_sgte,
  [anon_sym_ugte] = anon_sym_ugte,
  [anon_sym_slt] = anon_sym_slt,
  [anon_sym_ult] = anon_sym_ult,
  [anon_sym_slte] = anon_sym_slte,
  [anon_sym_ulte] = anon_sym_ulte,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_nand] = anon_sym_nand,
  [anon_sym_nor] = anon_sym_nor,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_xnor] = anon_sym_xnor,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_rol] = anon_sym_rol,
  [anon_sym_ror] = anon_sym_ror,
  [anon_sym_sll] = anon_sym_sll,
  [anon_sym_sra] = anon_sym_sra,
  [anon_sym_srl] = anon_sym_srl,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_sdiv] = anon_sym_sdiv,
  [anon_sym_udiv] = anon_sym_udiv,
  [anon_sym_smod] = anon_sym_smod,
  [anon_sym_srem] = anon_sym_srem,
  [anon_sym_urem] = anon_sym_urem,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_saddo] = anon_sym_saddo,
  [anon_sym_uaddo] = anon_sym_uaddo,
  [anon_sym_sdivo] = anon_sym_sdivo,
  [anon_sym_smulo] = anon_sym_smulo,
  [anon_sym_umulo] = anon_sym_umulo,
  [anon_sym_ssubo] = anon_sym_ssubo,
  [anon_sym_usubo] = anon_sym_usubo,
  [anon_sym_concat] = anon_sym_concat,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_ite] = anon_sym_ite,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_state] = anon_sym_state,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_one] = anon_sym_one,
  [anon_sym_ones] = anon_sym_ones,
  [anon_sym_zero] = anon_sym_zero,
  [anon_sym_const] = anon_sym_const,
  [aux_sym_const_token1] = aux_sym_const_token1,
  [anon_sym_constd] = anon_sym_constd,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_consth] = anon_sym_consth,
  [aux_sym_consth_token1] = aux_sym_consth_token1,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_bitvec] = anon_sym_bitvec,
  [sym_symbol] = sym_symbol,
  [sym_uint] = sym_uint,
  [sym_num] = sym_num,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_comment] = sym_comment,
  [sym_node] = sym_node,
  [sym_opidx] = sym_opidx,
  [sym_op] = sym_op,
  [sym_state] = sym_state,
  [sym_input] = sym_input,
  [sym_const] = sym_const,
  [sym_constd] = sym_constd,
  [sym_consth] = sym_consth,
  [sym_array] = sym_array,
  [sym_bitvec] = sym_bitvec,
  [sym_nid] = sym_nid,
  [sym_sid] = sym_sid,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_init] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fair] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_justice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_redand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_redor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_redxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implies] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ugt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ugte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ult] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ulte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xnor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_srl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sdiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_srem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_saddo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uaddo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sdivo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smulo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_umulo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssubo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usubo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_one] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ones] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zero] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_const_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_constd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_consth] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_consth_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitvec] = {
    .visible = true,
    .named = false,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_uint] = {
    .visible = true,
    .named = true,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_opidx] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_state] = {
    .visible = true,
    .named = true,
  },
  [sym_input] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_constd] = {
    .visible = true,
    .named = true,
  },
  [sym_consth] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_bitvec] = {
    .visible = true,
    .named = true,
  },
  [sym_nid] = {
    .visible = true,
    .named = true,
  },
  [sym_sid] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
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
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 30,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 30,
  [64] = 29,
  [65] = 65,
  [66] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(131);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == ';') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'j') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(93);
      if (lookahead == 'x') ADVANCE(66);
      if (lookahead == 'z') ADVANCE(46);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(81);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'g') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(183);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(149);
      if (lookahead == 'q') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(102);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 84:
      if (lookahead == 'q') ADVANCE(155);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 122:
      if (lookahead == 'v') ADVANCE(178);
      END_STATE();
    case 123:
      if (lookahead == 'v') ADVANCE(179);
      END_STATE();
    case 124:
      if (lookahead == 'v') ADVANCE(45);
      END_STATE();
    case 125:
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 126:
      if (lookahead == 'x') ADVANCE(105);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 128:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(128)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 129:
      if (eof) ADVANCE(131);
      if (lookahead == '0') ADVANCE(210);
      if (lookahead == ';') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(129)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 130:
      if (eof) ADVANCE(131);
      if (lookahead == ';') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(130)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_init);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_bad);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_fair);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_justice);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_sext);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_uext);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_slice);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_dec);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_redand);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_redor);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_redxor);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_iff);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_implies);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_neq);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_sgt);
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_ugt);
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_sgte);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_ugte);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_slt);
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_ult);
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_slte);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_ulte);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_nand);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_nor);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_xnor);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_rol);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_ror);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_sll);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_sra);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_srl);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_sdiv);
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_udiv);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_smod);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_srem);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_urem);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_saddo);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_uaddo);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_sdivo);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_smulo);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_umulo);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ssubo);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_usubo);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_concat);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ite);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_state);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_one);
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ones);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_zero);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'd') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_const_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_constd);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_consth);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_consth_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_bitvec);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_uint);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 130},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 130},
  [5] = {.lex_state = 130},
  [6] = {.lex_state = 130},
  [7] = {.lex_state = 130},
  [8] = {.lex_state = 130},
  [9] = {.lex_state = 130},
  [10] = {.lex_state = 129},
  [11] = {.lex_state = 130},
  [12] = {.lex_state = 130},
  [13] = {.lex_state = 130},
  [14] = {.lex_state = 130},
  [15] = {.lex_state = 130},
  [16] = {.lex_state = 130},
  [17] = {.lex_state = 130},
  [18] = {.lex_state = 130},
  [19] = {.lex_state = 130},
  [20] = {.lex_state = 130},
  [21] = {.lex_state = 130},
  [22] = {.lex_state = 130},
  [23] = {.lex_state = 130},
  [24] = {.lex_state = 130},
  [25] = {.lex_state = 130},
  [26] = {.lex_state = 130},
  [27] = {.lex_state = 130},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 130},
  [30] = {.lex_state = 130},
  [31] = {.lex_state = 130},
  [32] = {.lex_state = 130},
  [33] = {.lex_state = 130},
  [34] = {.lex_state = 130},
  [35] = {.lex_state = 130},
  [36] = {.lex_state = 130},
  [37] = {.lex_state = 130},
  [38] = {.lex_state = 130},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 130},
  [41] = {.lex_state = 130},
  [42] = {.lex_state = 130},
  [43] = {.lex_state = 130},
  [44] = {.lex_state = 130},
  [45] = {.lex_state = 130},
  [46] = {.lex_state = 130},
  [47] = {.lex_state = 130},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 130},
  [50] = {.lex_state = 130},
  [51] = {.lex_state = 130},
  [52] = {.lex_state = 130},
  [53] = {.lex_state = 129},
  [54] = {.lex_state = 129},
  [55] = {.lex_state = 128},
  [56] = {.lex_state = 130},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 133},
  [59] = {.lex_state = 130},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 130},
  [62] = {.lex_state = 130},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 129},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 128},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_init] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_bad] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_fair] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_justice] = ACTIONS(1),
    [anon_sym_sext] = ACTIONS(1),
    [anon_sym_uext] = ACTIONS(1),
    [anon_sym_slice] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_inc] = ACTIONS(1),
    [anon_sym_dec] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [anon_sym_redand] = ACTIONS(1),
    [anon_sym_redor] = ACTIONS(1),
    [anon_sym_redxor] = ACTIONS(1),
    [anon_sym_iff] = ACTIONS(1),
    [anon_sym_implies] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_neq] = ACTIONS(1),
    [anon_sym_sgt] = ACTIONS(1),
    [anon_sym_ugt] = ACTIONS(1),
    [anon_sym_sgte] = ACTIONS(1),
    [anon_sym_ugte] = ACTIONS(1),
    [anon_sym_slt] = ACTIONS(1),
    [anon_sym_ult] = ACTIONS(1),
    [anon_sym_slte] = ACTIONS(1),
    [anon_sym_ulte] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_nand] = ACTIONS(1),
    [anon_sym_nor] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xnor] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_rol] = ACTIONS(1),
    [anon_sym_ror] = ACTIONS(1),
    [anon_sym_sll] = ACTIONS(1),
    [anon_sym_sra] = ACTIONS(1),
    [anon_sym_srl] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_sdiv] = ACTIONS(1),
    [anon_sym_udiv] = ACTIONS(1),
    [anon_sym_smod] = ACTIONS(1),
    [anon_sym_srem] = ACTIONS(1),
    [anon_sym_urem] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_saddo] = ACTIONS(1),
    [anon_sym_uaddo] = ACTIONS(1),
    [anon_sym_sdivo] = ACTIONS(1),
    [anon_sym_smulo] = ACTIONS(1),
    [anon_sym_umulo] = ACTIONS(1),
    [anon_sym_ssubo] = ACTIONS(1),
    [anon_sym_usubo] = ACTIONS(1),
    [anon_sym_concat] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_ite] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_state] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_one] = ACTIONS(1),
    [anon_sym_ones] = ACTIONS(1),
    [anon_sym_zero] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [aux_sym_const_token1] = ACTIONS(1),
    [anon_sym_constd] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_consth] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_bitvec] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym_line] = STATE(5),
    [sym_comment] = STATE(31),
    [sym_node] = STATE(11),
    [sym_nid] = STATE(2),
    [sym_sid] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_num] = ACTIONS(7),
  },
  [2] = {
    [sym_opidx] = STATE(36),
    [sym_op] = STATE(45),
    [sym_state] = STATE(26),
    [sym_input] = STATE(26),
    [sym_const] = STATE(27),
    [sym_constd] = STATE(27),
    [sym_consth] = STATE(27),
    [anon_sym_init] = ACTIONS(9),
    [anon_sym_next] = ACTIONS(9),
    [anon_sym_bad] = ACTIONS(11),
    [anon_sym_constraint] = ACTIONS(11),
    [anon_sym_fair] = ACTIONS(11),
    [anon_sym_output] = ACTIONS(11),
    [anon_sym_justice] = ACTIONS(13),
    [anon_sym_sext] = ACTIONS(15),
    [anon_sym_uext] = ACTIONS(15),
    [anon_sym_slice] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_inc] = ACTIONS(17),
    [anon_sym_dec] = ACTIONS(17),
    [anon_sym_neg] = ACTIONS(17),
    [anon_sym_redand] = ACTIONS(17),
    [anon_sym_redor] = ACTIONS(17),
    [anon_sym_redxor] = ACTIONS(17),
    [anon_sym_iff] = ACTIONS(17),
    [anon_sym_implies] = ACTIONS(17),
    [anon_sym_eq] = ACTIONS(17),
    [anon_sym_neq] = ACTIONS(17),
    [anon_sym_sgt] = ACTIONS(19),
    [anon_sym_ugt] = ACTIONS(19),
    [anon_sym_sgte] = ACTIONS(17),
    [anon_sym_ugte] = ACTIONS(17),
    [anon_sym_slt] = ACTIONS(19),
    [anon_sym_ult] = ACTIONS(19),
    [anon_sym_slte] = ACTIONS(17),
    [anon_sym_ulte] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(17),
    [anon_sym_nand] = ACTIONS(17),
    [anon_sym_nor] = ACTIONS(17),
    [anon_sym_or] = ACTIONS(17),
    [anon_sym_xnor] = ACTIONS(17),
    [anon_sym_xor] = ACTIONS(17),
    [anon_sym_rol] = ACTIONS(17),
    [anon_sym_ror] = ACTIONS(17),
    [anon_sym_sll] = ACTIONS(17),
    [anon_sym_sra] = ACTIONS(17),
    [anon_sym_srl] = ACTIONS(17),
    [anon_sym_add] = ACTIONS(17),
    [anon_sym_mul] = ACTIONS(17),
    [anon_sym_sdiv] = ACTIONS(19),
    [anon_sym_udiv] = ACTIONS(17),
    [anon_sym_smod] = ACTIONS(17),
    [anon_sym_srem] = ACTIONS(17),
    [anon_sym_urem] = ACTIONS(17),
    [anon_sym_sub] = ACTIONS(17),
    [anon_sym_saddo] = ACTIONS(17),
    [anon_sym_uaddo] = ACTIONS(17),
    [anon_sym_sdivo] = ACTIONS(17),
    [anon_sym_smulo] = ACTIONS(17),
    [anon_sym_umulo] = ACTIONS(17),
    [anon_sym_ssubo] = ACTIONS(17),
    [anon_sym_usubo] = ACTIONS(17),
    [anon_sym_concat] = ACTIONS(17),
    [anon_sym_read] = ACTIONS(17),
    [anon_sym_ite] = ACTIONS(17),
    [anon_sym_write] = ACTIONS(17),
    [anon_sym_state] = ACTIONS(21),
    [anon_sym_input] = ACTIONS(23),
    [anon_sym_one] = ACTIONS(25),
    [anon_sym_ones] = ACTIONS(23),
    [anon_sym_zero] = ACTIONS(23),
    [anon_sym_const] = ACTIONS(27),
    [anon_sym_constd] = ACTIONS(29),
    [anon_sym_consth] = ACTIONS(31),
  },
  [3] = {
    [anon_sym_sort] = ACTIONS(33),
    [anon_sym_init] = ACTIONS(35),
    [anon_sym_next] = ACTIONS(35),
    [anon_sym_bad] = ACTIONS(35),
    [anon_sym_constraint] = ACTIONS(35),
    [anon_sym_fair] = ACTIONS(35),
    [anon_sym_output] = ACTIONS(35),
    [anon_sym_justice] = ACTIONS(35),
    [anon_sym_sext] = ACTIONS(35),
    [anon_sym_uext] = ACTIONS(35),
    [anon_sym_slice] = ACTIONS(35),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_inc] = ACTIONS(35),
    [anon_sym_dec] = ACTIONS(35),
    [anon_sym_neg] = ACTIONS(35),
    [anon_sym_redand] = ACTIONS(35),
    [anon_sym_redor] = ACTIONS(35),
    [anon_sym_redxor] = ACTIONS(35),
    [anon_sym_iff] = ACTIONS(35),
    [anon_sym_implies] = ACTIONS(35),
    [anon_sym_eq] = ACTIONS(35),
    [anon_sym_neq] = ACTIONS(35),
    [anon_sym_sgt] = ACTIONS(37),
    [anon_sym_ugt] = ACTIONS(37),
    [anon_sym_sgte] = ACTIONS(35),
    [anon_sym_ugte] = ACTIONS(35),
    [anon_sym_slt] = ACTIONS(37),
    [anon_sym_ult] = ACTIONS(37),
    [anon_sym_slte] = ACTIONS(35),
    [anon_sym_ulte] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(35),
    [anon_sym_nand] = ACTIONS(35),
    [anon_sym_nor] = ACTIONS(35),
    [anon_sym_or] = ACTIONS(35),
    [anon_sym_xnor] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(35),
    [anon_sym_rol] = ACTIONS(35),
    [anon_sym_ror] = ACTIONS(35),
    [anon_sym_sll] = ACTIONS(35),
    [anon_sym_sra] = ACTIONS(35),
    [anon_sym_srl] = ACTIONS(35),
    [anon_sym_add] = ACTIONS(35),
    [anon_sym_mul] = ACTIONS(35),
    [anon_sym_sdiv] = ACTIONS(37),
    [anon_sym_udiv] = ACTIONS(35),
    [anon_sym_smod] = ACTIONS(35),
    [anon_sym_srem] = ACTIONS(35),
    [anon_sym_urem] = ACTIONS(35),
    [anon_sym_sub] = ACTIONS(35),
    [anon_sym_saddo] = ACTIONS(35),
    [anon_sym_uaddo] = ACTIONS(35),
    [anon_sym_sdivo] = ACTIONS(35),
    [anon_sym_smulo] = ACTIONS(35),
    [anon_sym_umulo] = ACTIONS(35),
    [anon_sym_ssubo] = ACTIONS(35),
    [anon_sym_usubo] = ACTIONS(35),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_read] = ACTIONS(35),
    [anon_sym_ite] = ACTIONS(35),
    [anon_sym_write] = ACTIONS(35),
    [anon_sym_state] = ACTIONS(35),
    [anon_sym_input] = ACTIONS(35),
    [anon_sym_one] = ACTIONS(37),
    [anon_sym_ones] = ACTIONS(35),
    [anon_sym_zero] = ACTIONS(35),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_constd] = ACTIONS(35),
    [anon_sym_consth] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(44), 1,
      sym_num,
    STATE(2), 1,
      sym_nid,
    STATE(11), 1,
      sym_node,
    STATE(31), 1,
      sym_comment,
    STATE(57), 1,
      sym_sid,
    STATE(4), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [26] = 8,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_num,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_nid,
    STATE(11), 1,
      sym_node,
    STATE(31), 1,
      sym_comment,
    STATE(57), 1,
      sym_sid,
    STATE(4), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [52] = 3,
    ACTIONS(51), 1,
      sym_num,
    STATE(6), 2,
      sym_nid,
      aux_sym_node_repeat1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
  [65] = 3,
    ACTIONS(56), 1,
      sym_num,
    STATE(6), 2,
      sym_nid,
      aux_sym_node_repeat1,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
  [78] = 3,
    ACTIONS(56), 1,
      sym_num,
    STATE(7), 2,
      sym_nid,
      aux_sym_node_repeat1,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
  [91] = 3,
    ACTIONS(56), 1,
      sym_num,
    STATE(15), 1,
      sym_nid,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
  [103] = 3,
    ACTIONS(60), 1,
      sym_uint,
    ACTIONS(62), 1,
      sym_num,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
  [115] = 3,
    ACTIONS(66), 1,
      sym_symbol,
    STATE(32), 1,
      sym_comment,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_num,
  [127] = 3,
    ACTIONS(56), 1,
      sym_num,
    STATE(9), 1,
      sym_nid,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
  [139] = 1,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [146] = 1,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [153] = 1,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [160] = 1,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [167] = 1,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [174] = 1,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [181] = 1,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [188] = 2,
    STATE(33), 1,
      sym_comment,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_num,
  [197] = 1,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [204] = 1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [211] = 1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [218] = 1,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [225] = 1,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [232] = 1,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [239] = 1,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [246] = 3,
    ACTIONS(94), 1,
      anon_sym_array,
    ACTIONS(96), 1,
      anon_sym_bitvec,
    STATE(25), 2,
      sym_array,
      sym_bitvec,
  [257] = 1,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [264] = 1,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_symbol,
      sym_num,
  [271] = 1,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_num,
  [277] = 1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_num,
  [283] = 1,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_num,
  [289] = 1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_num,
  [295] = 2,
    ACTIONS(102), 1,
      sym_num,
    STATE(52), 1,
      sym_sid,
  [302] = 2,
    ACTIONS(102), 1,
      sym_num,
    STATE(40), 1,
      sym_sid,
  [309] = 2,
    ACTIONS(104), 1,
      sym_num,
    STATE(55), 1,
      sym_sid,
  [316] = 2,
    ACTIONS(56), 1,
      sym_num,
    STATE(25), 1,
      sym_nid,
  [323] = 2,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_uint,
  [330] = 2,
    ACTIONS(110), 1,
      sym_num,
    STATE(53), 1,
      sym_nid,
  [337] = 2,
    ACTIONS(56), 1,
      sym_num,
    STATE(12), 1,
      sym_nid,
  [344] = 2,
    ACTIONS(102), 1,
      sym_num,
    STATE(24), 1,
      sym_sid,
  [351] = 2,
    ACTIONS(56), 1,
      sym_num,
    STATE(44), 1,
      sym_nid,
  [358] = 2,
    ACTIONS(56), 1,
      sym_num,
    STATE(14), 1,
      sym_nid,
  [365] = 2,
    ACTIONS(102), 1,
      sym_num,
    STATE(41), 1,
      sym_sid,
  [372] = 2,
    ACTIONS(112), 1,
      sym_num,
    STATE(39), 1,
      sym_sid,
  [379] = 2,
    ACTIONS(56), 1,
      sym_num,
    STATE(8), 1,
      sym_nid,
  [386] = 1,
    ACTIONS(33), 2,
      anon_sym_DASH,
      sym_uint,
  [391] = 2,
    ACTIONS(102), 1,
      sym_num,
    STATE(43), 1,
      sym_sid,
  [398] = 2,
    ACTIONS(114), 1,
      sym_num,
    STATE(65), 1,
      sym_sid,
  [405] = 2,
    ACTIONS(102), 1,
      sym_num,
    STATE(23), 1,
      sym_sid,
  [412] = 2,
    ACTIONS(102), 1,
      sym_num,
    STATE(17), 1,
      sym_sid,
  [419] = 1,
    ACTIONS(116), 1,
      sym_uint,
  [423] = 1,
    ACTIONS(118), 1,
      sym_uint,
  [427] = 1,
    ACTIONS(120), 1,
      aux_sym_consth_token1,
  [431] = 1,
    ACTIONS(122), 1,
      sym_num,
  [435] = 1,
    ACTIONS(124), 1,
      anon_sym_sort,
  [439] = 1,
    ACTIONS(126), 1,
      aux_sym_comment_token1,
  [443] = 1,
    ACTIONS(128), 1,
      sym_num,
  [447] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [451] = 1,
    ACTIONS(132), 1,
      sym_num,
  [455] = 1,
    ACTIONS(134), 1,
      sym_num,
  [459] = 1,
    ACTIONS(33), 1,
      aux_sym_const_token1,
  [463] = 1,
    ACTIONS(35), 1,
      sym_uint,
  [467] = 1,
    ACTIONS(136), 1,
      aux_sym_const_token1,
  [471] = 1,
    ACTIONS(33), 1,
      aux_sym_consth_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 26,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 65,
  [SMALL_STATE(8)] = 78,
  [SMALL_STATE(9)] = 91,
  [SMALL_STATE(10)] = 103,
  [SMALL_STATE(11)] = 115,
  [SMALL_STATE(12)] = 127,
  [SMALL_STATE(13)] = 139,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 153,
  [SMALL_STATE(16)] = 160,
  [SMALL_STATE(17)] = 167,
  [SMALL_STATE(18)] = 174,
  [SMALL_STATE(19)] = 181,
  [SMALL_STATE(20)] = 188,
  [SMALL_STATE(21)] = 197,
  [SMALL_STATE(22)] = 204,
  [SMALL_STATE(23)] = 211,
  [SMALL_STATE(24)] = 218,
  [SMALL_STATE(25)] = 225,
  [SMALL_STATE(26)] = 232,
  [SMALL_STATE(27)] = 239,
  [SMALL_STATE(28)] = 246,
  [SMALL_STATE(29)] = 257,
  [SMALL_STATE(30)] = 264,
  [SMALL_STATE(31)] = 271,
  [SMALL_STATE(32)] = 277,
  [SMALL_STATE(33)] = 283,
  [SMALL_STATE(34)] = 289,
  [SMALL_STATE(35)] = 295,
  [SMALL_STATE(36)] = 302,
  [SMALL_STATE(37)] = 309,
  [SMALL_STATE(38)] = 316,
  [SMALL_STATE(39)] = 323,
  [SMALL_STATE(40)] = 330,
  [SMALL_STATE(41)] = 337,
  [SMALL_STATE(42)] = 344,
  [SMALL_STATE(43)] = 351,
  [SMALL_STATE(44)] = 358,
  [SMALL_STATE(45)] = 365,
  [SMALL_STATE(46)] = 372,
  [SMALL_STATE(47)] = 379,
  [SMALL_STATE(48)] = 386,
  [SMALL_STATE(49)] = 391,
  [SMALL_STATE(50)] = 398,
  [SMALL_STATE(51)] = 405,
  [SMALL_STATE(52)] = 412,
  [SMALL_STATE(53)] = 419,
  [SMALL_STATE(54)] = 423,
  [SMALL_STATE(55)] = 427,
  [SMALL_STATE(56)] = 431,
  [SMALL_STATE(57)] = 435,
  [SMALL_STATE(58)] = 439,
  [SMALL_STATE(59)] = 443,
  [SMALL_STATE(60)] = 447,
  [SMALL_STATE(61)] = 451,
  [SMALL_STATE(62)] = 455,
  [SMALL_STATE(63)] = 459,
  [SMALL_STATE(64)] = 463,
  [SMALL_STATE(65)] = 467,
  [SMALL_STATE(66)] = 471,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sid, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nid, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nid, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(29),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_consth, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constd, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitvec, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constd, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opidx, 1),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_btor2(void) {
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
