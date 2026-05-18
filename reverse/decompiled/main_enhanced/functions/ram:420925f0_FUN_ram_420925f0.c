
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420925f0(uint param_1,int param_2,undefined4 param_3,undefined1 param_4,
                     undefined1 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 2) {
    *(undefined1 *)(param_1 * 10 + 0x3fcc462a) = param_4;
    *(undefined1 *)(param_1 * 10 + 0x3fcc462b) = param_5;
    return;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      FUN_ram_4207a038(6,1,1,&DAT_ram_3c0ff5f8,param_1);
      return;
    }
    if ((DAT_ram_3fcb7dd5 >> (param_1 & 0x1f) & 1) != 0) {
      DAT_ram_3fcb7dd5 = DAT_ram_3fcb7dd5 & ~(byte)(1 << (param_1 & 0x1f));
      FUN_ram_42094af0();
    }
    if (DAT_ram_3fcb7dd5 == 0) {
      _DAT_ram_60047064 = _DAT_ram_60047064 & 0x7fffffff;
      FUN_ram_42092350();
    }
    if (param_1 == 0) {
      FUN_ram_4207a038(1,0xc,4,&DAT_ram_3c0fe3e0,2);
      uVar1 = 2;
    }
    else {
      if (param_1 != 1) {
        if (param_1 != 2) {
          return;
        }
        FUN_ram_420925ea();
        return;
      }
      FUN_ram_4207a038(1,0xc,4,&DAT_ram_3c0fe3fc,10);
      uVar1 = 10;
    }
    FUN_ram_4207f554(uVar1);
    return;
  }
  if (param_1 == 0) {
    FUN_ram_4207a038(1,0xc,4,&DAT_ram_3c0fe3a8);
    uVar1 = 1;
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 2) {
        FUN_ram_420925e4();
      }
      goto LAB_ram_42092654;
    }
    FUN_ram_4207a038(1,0xc,4,&DAT_ram_3c0fe3c4,9);
    uVar1 = 9;
  }
  FUN_ram_4207f554(uVar1);
LAB_ram_42092654:
  iVar2 = FUN_ram_4039c11e(param_1 * 10 + 0x3fcc4624,param_3,6);
  uVar3 = 1 << (param_1 & 0x1f);
  *(undefined1 *)(iVar2 + 6) = param_4;
  *(undefined1 *)(iVar2 + 7) = param_5;
  if (DAT_ram_3fcb7dd5 != 0 || (uVar3 & 0xff) != 0) {
    _DAT_ram_60047064 = _DAT_ram_60047064 | 0x80000000;
  }
  DAT_ram_3fcb7dd5 = DAT_ram_3fcb7dd5 | (byte)uVar3;
  FUN_ram_4209241e(param_1,param_6);
  return;
}

