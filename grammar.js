/**
 * @file parser for y86 assembly language
 * @author Macsen Casaus <macsencasaus@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: "y86",

    extras: ($) => [" ", "\r", "\t", $.comment],

    rules: {
        program: ($) =>
            sep(
                repeat1("\n"),
                choice(
                    $.instruction,
                    $.label,
                    $.directive,
                ),
            ),

        comment: (_) => token(/#.*/),

        label: ($) => seq($.labelLiteral, ":"),

        labelLiteral: (_) => /\.?[a-zA-Z_][a-zA-Z0-9_]*/,

        directive: ($) => seq($.directiveLiteral, $.num),

        directiveLiteral: (_) =>
            choice(".pos", ".align", ".byte", ".word", ".long", ".quad"),

        instruction: ($) =>
            seq(
                $.instructionLiteral,
                optional(choice(seq($.operand, ",", $.operand), $.labelLiteral, $.register)),
            ),

        operand: ($) => choice($.immediate, $.register, $.memoryReference, $.labelLiteral),

        instructionLiteral: (_) =>
            choice(
                "halt",
                "nop",
                "rrmovq",
                "cmovle",
                "cmovl",
                "cmove",
                "cmovne",
                "cmovg",
                "cmovge",
                "irmovq",
                "rmmovq",
                "mrmovq",
                "addq",
                "subq",
                "andq",
                "xorq",
                "jmp",
                "jle",
                "jl",
                "je",
                "jne",
                "jg",
                "jge",
                "call",
                "ret",
                "pushq",
                "popq",

                // y86-32
                "rrmovl",
                "irmovl",
                "rmmovl",
                "mrmovl",
                "addl",
                "subl",
                "andl",
                "xorl",
                "pushl",
                "popl",
            ),

        register: (_) =>
            choice(
                "%rax",
                "%rcx",
                "%rdx",
                "%rbx",
                "%rsp",
                "%rbp",
                "%rsi",
                "%rdi",
                "%r8",
                "%r9",
                "%r10",
                "%r11",
                "%r12",
                "%r13",
                "%r14",

                // y86-32
                "%eax",
                "%ecx",
                "%edx",
                "%ebx",
                "%esp",
                "%ebp",
                "%esi",
                "%edi",
            ),

        memoryReference: ($) => seq(optional($.num), "(", $.register, ")"),

        immediate: ($) => seq(optional("$"), $.num),

        num: (_) => /-?(0x[0-9a-fA-F]+|\d+)/,
    },
});

function sep(separator, rule) {
    return optional(
        seq(rule, repeat(seq(separator, rule)), optional(separator)),
    );
}
