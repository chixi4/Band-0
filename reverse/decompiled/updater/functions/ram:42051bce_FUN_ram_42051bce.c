
undefined4 FUN_ram_42051bce(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (param_2 < 0x10000)) {
    if (param_2 != 0) {
      uVar2 = (uint)*(ushort *)(param_1 + 8) + (param_2 & 0xffff);
      if ((uVar2 & 0xffff) < (param_2 & 0xffff)) {
        return 1;
      }
      if (*(char *)(param_1 + 0xc) < '\0') {
        uVar1 = *(int *)(param_1 + 4) - param_2;
        if (uVar1 < param_1 + 0x10U) {
          return 1;
        }
      }
      else {
        if (param_3 == 0) {
          return 1;
        }
        uVar1 = *(int *)(param_1 + 4) - param_2;
      }
      *(uint *)(param_1 + 4) = uVar1;
      *(short *)(param_1 + 8) = (short)(uVar2 * 0x10000 >> 0x10);
      *(short *)(param_1 + 10) = (short)param_2 + *(short *)(param_1 + 10);
    }
    return 0;
  }
  return 1;
}

