{
  Author: Niels A.D
  Project: Lape (http://code.google.com/p/la-pe/)
  License: GNU Lesser GPL (http://www.gnu.org/licenses/lgpl.html)

  This include directs the jump opcodes to the related functions.
}
{%MainUnit lpinterpreter.pas}

ocJmp: DoJmp();
ocJmpR: DoJmpR();

//jump relative if
ocJmpRIf8_Stk: DoJmpRIf8_Stk();
ocJmpRIf16_Stk: DoJmpRIf16_Stk();
ocJmpRIf32_Stk: DoJmpRIf32_Stk();
ocJmpRIf64_Stk: DoJmpRIf64_Stk();
ocJmpRIf8_Var: DoJmpRIf8_Var();
ocJmpRIf16_Var: DoJmpRIf16_Var();
ocJmpRIf32_Var: DoJmpRIf32_Var();
ocJmpRIf64_Var: DoJmpRIf64_Var();
ocJmpRIf8_Ptr: DoJmpRIf8_Ptr();
ocJmpRIf16_Ptr: DoJmpRIf16_Ptr();
ocJmpRIf32_Ptr: DoJmpRIf32_Ptr();
ocJmpRIf64_Ptr: DoJmpRIf64_Ptr();
ocJmpRIf8_PStk: DoJmpRIf8_PStk();
ocJmpRIf16_PStk: DoJmpRIf16_PStk();
ocJmpRIf32_PStk: DoJmpRIf32_PStk();
ocJmpRIf64_PStk: DoJmpRIf64_PStk();
ocJmpRIf8_PVar: DoJmpRIf8_PVar();
ocJmpRIf16_PVar: DoJmpRIf16_PVar();
ocJmpRIf32_PVar: DoJmpRIf32_PVar();
ocJmpRIf64_PVar: DoJmpRIf64_PVar();

//jump relative if not
ocJmpRIfNot8_Stk: DoJmpRIfNot8_Stk();
ocJmpRIfNot16_Stk: DoJmpRIfNot16_Stk();
ocJmpRIfNot32_Stk: DoJmpRIfNot32_Stk();
ocJmpRIfNot64_Stk: DoJmpRIfNot64_Stk();
ocJmpRIfNot8_Var: DoJmpRIfNot8_Var();
ocJmpRIfNot16_Var: DoJmpRIfNot16_Var();
ocJmpRIfNot32_Var: DoJmpRIfNot32_Var();
ocJmpRIfNot64_Var: DoJmpRIfNot64_Var();
ocJmpRIfNot8_Ptr: DoJmpRIfNot8_Ptr();
ocJmpRIfNot16_Ptr: DoJmpRIfNot16_Ptr();
ocJmpRIfNot32_Ptr: DoJmpRIfNot32_Ptr();
ocJmpRIfNot64_Ptr: DoJmpRIfNot64_Ptr();
ocJmpRIfNot8_PStk: DoJmpRIfNot8_PStk();
ocJmpRIfNot16_PStk: DoJmpRIfNot16_PStk();
ocJmpRIfNot32_PStk: DoJmpRIfNot32_PStk();
ocJmpRIfNot64_PStk: DoJmpRIfNot64_PStk();
ocJmpRIfNot8_PVar: DoJmpRIfNot8_PVar();
ocJmpRIfNot16_PVar: DoJmpRIfNot16_PVar();
ocJmpRIfNot32_PVar: DoJmpRIfNot32_PVar();
ocJmpRIfNot64_PVar: DoJmpRIfNot64_PVar();
