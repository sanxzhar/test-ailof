require_extension(EXT_ZFHMIN);
require_fp;
MMU.store<uint16_t>(RS1 + insn.s_imm(), FRS2.v[0]);
