
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207565e(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [20];
  undefined1 auStack_164 [340];
  
  FUN_ram_40399daa(auStack_178,0x3fcb1254,0x12);
  FUN_ram_40399daa(auStack_198,0x3fcb1268,0xf);
  FUN_ram_40399daa(auStack_188,0x3fcb1278,0xf);
  if ((_DAT_ram_3fcb0b54 & 0x200) != 0) goto LAB_ram_42075750;
  uVar1 = (*(code *)&SUB_ram_4001251c)
                    (auStack_164,0x28,auStack_178,auStack_198,auStack_188,9,
                     _DAT_ram_3fcb0aae >> 8 & 1);
  if (uVar1 < 0x50) {
    DAT_ram_3fcb0c2a = (byte)uVar1;
  }
  else {
    DAT_ram_3fcb0c2a = 0x4f;
  }
  DAT_ram_3fcb0c29 = DAT_ram_3fcb0c2a;
  if (param_4 == 0) {
    if (param_3 != 0) goto LAB_ram_42075810;
  }
  else {
    FUN_ram_42076166(1,0x3fcb0c9a);
    if (param_3 == 0) {
LAB_ram_4207570e:
      FUN_ram_4207547e(1,DAT_ram_3fcb0c29 + 1,auStack_164,0x3fcb0c9a);
      if (param_3 == 0) goto LAB_ram_42075744;
    }
    else {
LAB_ram_42075810:
      FUN_ram_42076166(0,0x3fcb0c60);
      if (param_4 != 0) goto LAB_ram_4207570e;
    }
    FUN_ram_4207547e(0,DAT_ram_3fcb0c2a + 1,auStack_164,0x3fcb0c60);
  }
LAB_ram_42075744:
  _DAT_ram_3fcb0b54 = _DAT_ram_3fcb0b54 | 0x200;
LAB_ram_42075750:
  _DAT_ram_6004a02c = (DAT_ram_3fcb0c2a & 0x7f) << 8 | _DAT_ram_6004a02c & 0xffff80ff;
  uVar1 = (uint)DAT_ram_3fcb0c2a;
  if (0x4c < uVar1) {
    uVar1 = 0x4c;
  }
  _DAT_ram_6004a13c = uVar1 << 0x12 | _DAT_ram_6004a13c & 0xfe03ffff;
  _DAT_ram_6004a0a4 = (DAT_ram_3fcb0c29 & 0x7f) << 0xf | _DAT_ram_6004a0a4 & 0xffc07fff;
  (**(code **)(_DAT_ram_3fcb640c + 0x110))(0x50);
  (*(code *)&SUB_ram_40012448)();
  if (DAT_ram_3fcb0cdb != '\0') {
    uVar1 = DAT_ram_3fcb0c2a - 5;
    _DAT_ram_3fcb0ae4 = uVar1 * 0x100 | uVar1 * 0x1000000 | uVar1 * 0x10000 | uVar1;
  }
  return;
}

