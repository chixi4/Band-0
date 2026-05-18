
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42049be4(uint param_1,int param_2,undefined4 param_3,undefined1 param_4,
                     undefined1 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 2) {
    *(undefined1 *)(param_1 * 10 + 0x3fcb559a) = param_4;
    *(undefined1 *)(param_1 * 10 + 0x3fcb559b) = param_5;
    return;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      FUN_ram_42033fd8(6,1,1,0x3c07dde0,param_1);
      return;
    }
    if ((DAT_ram_3fcb0941 >> (param_1 & 0x1f) & 1) != 0) {
      DAT_ram_3fcb0941 = DAT_ram_3fcb0941 & ~(byte)(1 << (param_1 & 0x1f));
      FUN_ram_4204c0c8();
    }
    if (DAT_ram_3fcb0941 == 0) {
      _DAT_ram_60047064 = _DAT_ram_60047064 & 0x7fffffff;
      FUN_ram_42049948();
    }
    if (param_1 == 0) {
      FUN_ram_42033fd8(1,0xc,4,0x3c07cf30,2);
      uVar1 = 2;
    }
    else {
      if (param_1 != 1) {
        if (param_1 != 2) {
          return;
        }
        FUN_ram_42049bde();
        return;
      }
      FUN_ram_42033fd8(1,0xc,4,0x3c07cf4c,10);
      uVar1 = 10;
    }
    FUN_ram_420392fa(uVar1);
    return;
  }
  if (param_1 == 0) {
    FUN_ram_42033fd8(1,0xc,4,0x3c07cef8);
    uVar1 = 1;
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 2) {
        FUN_ram_42049bd8();
      }
      goto LAB_ram_42049c48;
    }
    FUN_ram_42033fd8(1,0xc,4,0x3c07cf14,9);
    uVar1 = 9;
  }
  FUN_ram_420392fa(uVar1);
LAB_ram_42049c48:
  iVar2 = FUN_ram_40399daa(param_1 * 10 + 0x3fcb5594,param_3,6);
  uVar3 = 1 << (param_1 & 0x1f);
  *(undefined1 *)(iVar2 + 6) = param_4;
  *(undefined1 *)(iVar2 + 7) = param_5;
  if (DAT_ram_3fcb0941 != 0 || (uVar3 & 0xff) != 0) {
    _DAT_ram_60047064 = _DAT_ram_60047064 | 0x80000000;
  }
  DAT_ram_3fcb0941 = DAT_ram_3fcb0941 | (byte)uVar3;
  FUN_ram_42049a16(param_1,param_6);
  return;
}

