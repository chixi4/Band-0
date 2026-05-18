
bool FUN_ram_4204ede6(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar1 = FUN_ram_4204ed62();
  if (iVar4 == iVar1) {
    uVar2 = (uint)*(byte *)(param_1 + 1);
    if (uVar2 < 0x43) {
      if (0x40 < uVar2) {
        if ((uVar2 == 0x42) && (*(char *)(param_1 + 3) == -1)) {
          return false;
        }
LAB_ram_4204ee34:
        if ((0x7dU - param_2 & 0x7ff) << 5 < (uint)*(ushort *)(param_1 + 0x18)) {
          return false;
        }
        if ((0x7eU - param_2 & 0xff) < (uint)*(byte *)(param_1 + 2)) {
          return false;
        }
        return ((*(ushort *)(param_1 + 0x18) + 0x1f >> 5) + 1 & 0xff) ==
               (uint)*(byte *)(param_1 + 2);
      }
      if (uVar2 < 3) {
        if (uVar2 != 0) {
LAB_ram_4204eeba:
          return *(char *)(param_1 + 2) == '\x01';
        }
      }
      else {
        uVar3 = uVar2 - 4 & 0xff;
        if (0x1d < uVar3) {
          return false;
        }
        if ((1 << (uVar2 - 4 & 0x1f) & 0x116011U) != 0) goto LAB_ram_4204eeba;
        if (uVar3 == 0x1d) goto LAB_ram_4204ee34;
      }
    }
    else if (uVar2 == 0x48) {
      if (*(char *)(param_1 + 2) != '\x01') {
        return false;
      }
      if (*(char *)(param_1 + 3) != -1) {
        return false;
      }
      return *(uint *)(param_1 + 0x18) < 0x7c061;
    }
  }
  return false;
}

