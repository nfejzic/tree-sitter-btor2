module.exports = grammar({
  name: "btor2",

  rules: {
    source_file: ($) => repeat(seq($.line)),

    line: ($) =>
      choice(
        $.comment,
        prec.left(seq($.node, optional($.symbol), optional($.comment))),
      ),

    comment: (_) => seq(";", /.*/),

    node: ($) =>
      choice(
        seq($.sid, "sort", choice($.array, $.bitvec)),
        seq($.nid, choice($.input, $.state)),
        seq($.nid, $.opidx, $.sid, $.nid, $.uint, optional($.uint)),
        prec.right(
          seq($.nid, $.op, $.sid, $.nid, optional(seq($.nid, optional($.nid)))),
        ),
        seq($.nid, choice("init", "next"), $.sid, $.nid, $.nid),
        seq($.nid, choice("bad", "constraint", "fair", "output"), $.nid),
        prec.right(seq($.nid, "justice", $.num, $.nid, repeat($.nid))),
      ),

    opidx: (_) => choice("sext", "uext", "slice"),

    op: (_) =>
      choice(
        "not",
        "inc",
        "dec",
        "neg",
        "redand",
        "redor",
        "redxor",
        "iff",
        "implies",
        "eq",
        "neq",
        "sgt",
        "ugt",
        "sgte",
        "ugte",
        "slt",
        "ult",
        "slte",
        "ulte",
        "and",
        "nand",
        "nor",
        "or",
        "xnor",
        "xor",
        "rol",
        "ror",
        "sll",
        "sra",
        "srl",
        "add",
        "mul",
        "sdiv",
        "udiv",
        "smod",
        "srem",
        "urem",
        "sub",
        "saddo",
        "uaddo",
        "sdivo",
        "smulo",
        "umulo",
        "ssubo",
        "usubo",
        "concat",
        "read",
        "ite",
        "write",
      ),

    state: ($) => seq("state", $.sid),

    input: ($) =>
      choice(
        seq(choice("input", "one", "ones", "zero"), $.sid),
        $.const,
        $.constd,
        $.consth,
      ),

    const: ($) => seq("const", $.sid, /[0-1]+/),

    constd: ($) => seq("constd", $.sid, seq(optional("-"), $.uint)),

    consth: ($) => seq("consth", $.sid, /[0-9a-fA-F]+/),

    array: ($) => seq("array", $.sid, $.sid),

    bitvec: ($) => seq("bitvec", $.num),

    symbol: (_) => /[a-zA-Z-_]+[a-zA-Z-_0-9]*/,

    comment: (_) => seq(";", /.*/),

    nid: ($) => $.num,

    sid: ($) => $.num,

    uint: (_) => /\d+/,

    num: (_) => /[1-9]\d*/,
  },
});
