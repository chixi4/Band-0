
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420adcc6(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [20];
  undefined1 auStack_164 [340];
  
  FUN_ram_4039c11e(auStack_178,0x3fcb86e4,0x12);
  FUN_ram_4039c11e(auStack_198,0x3fcb86f8,0xf);
  FUN_ram_4039c11e(auStack_188,0x3fcb8708,0xf);
  if ((_DAT_ram_3fcb7fb0 & 0x200) != 0) goto LAB_ram_420addb8;
  uVar1 = (*(code *)&SUB_ram_4001251c)
                    (auStack_164,0x28,auStack_178,auStack_198,auStack_188,9,
                     _DAT_ram_3fcb7f0a >> 8 & 1);
  if (uVar1 < 0x50) {
    DAT_ram_3fcb8086 = (byte)uVar1;
  }
  else {
    DAT_ram_3fcb8086 = 0x4f;
  }
  DAT_ram_3fcb8085 = DAT_ram_3fcb8086;
  if (param_4 == 0) {
    if (param_3 != 0) goto LAB_ram_420ade78;
  }
  else {
    FUN_ram_420ae7ce(1,0x3fcb80f6);
    if (param_3 == 0) {
LAB_ram_420add76:
      FUN_ram_420adae6(1,DAT_ram_3fcb8085 + 1,auStack_164,0x3fcb80f6);
      if (param_3 == 0) goto LAB_ram_420addac;
    }
    else {
LAB_ram_420ade78:
      FUN_ram_420ae7ce(0,0x3fcb80bc);
      if (param_4 != 0) goto LAB_ram_420add76;
    }
    FUN_ram_420adae6(0,DAT_ram_3fcb8086 + 1,auStack_164,0x3fcb80bc);
  }
LAB_ram_420addac:
  _DAT_ram_3fcb7fb0 = _DAT_ram_3fcb7fb0 | 0x200;
LAB_ram_420addb8:
  _DAT_ram_6004a02c = (DAT_ram_3fcb8086 & 0x7f) << 8 | _DAT_ram_6004a02c & 0xffff80ff;
  uVar1 = (uint)DAT_ram_3fcb8086;
  if (0x4c < uVar1) {
    uVar1 = 0x4c;
  }
  _DAT_ram_6004a13c = uVar1 << 0x12 | _DAT_ram_6004a13c & 0xfe03ffff;
  _DAT_ram_6004a0a4 = (DAT_ram_3fcb8085 & 0x7f) << 0xf | _DAT_ram_6004a0a4 & 0xffc07fff;
  (**(code **)(_DAT_ram_3fcc4c78 + 0x110))(0x50);
  (*(code *)&SUB_ram_40012448)();
  if (DAT_ram_3fcb8137 != '\0') {
    uVar1 = DAT_ram_3fcb8086 - 5;
    _DAT_ram_3fcb7f40 = uVar1 * 0x100 | uVar1 * 0x1000000 | uVar1 * 0x10000 | uVar1;
  }
  return;
}

