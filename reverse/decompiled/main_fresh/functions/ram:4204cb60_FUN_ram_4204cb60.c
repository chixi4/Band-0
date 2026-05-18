
int FUN_ram_4204cb60(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [2];
  byte bStack_3e;
  
  FUN_ram_4204c54e(param_1,auStack_48);
  iVar1 = FUN_ram_4204c62a(param_1 + 0x18,param_2,&iStack_44);
  if (iVar1 != 0) {
    return -1;
  }
  if (iStack_44 == 2) {
    iVar1 = FUN_ram_4204c52c(param_1,param_2,auStack_40);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_4204ede6(auStack_40,param_2 & 0xff);
    if (iVar1 != 0) {
      FUN_ram_4204f07a(param_1 + 0x44,param_2);
      uVar3 = (uint)bStack_3e;
      iVar1 = param_2 + uVar3;
      while (iVar1 = iVar1 + -1, (int)param_2 <= iVar1) {
        iVar2 = FUN_ram_4204c62a(param_1 + 0x18,iVar1,&iStack_44);
        if (iVar2 != 0) {
          return -1;
        }
        if (iStack_44 == 2) {
          *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
        }
        *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
      }
      if (uVar3 == 1) {
        iVar1 = FUN_ram_4204c6ea(param_1,param_2,0);
      }
      else {
        iVar1 = FUN_ram_4204c880(param_1,param_2,param_2 + uVar3,0);
      }
      if (iVar1 != 0) {
        return iVar1;
      }
      goto LAB_ram_4204cbde;
    }
    FUN_ram_4204f07a(param_1 + 0x44,param_2);
    iVar1 = FUN_ram_4204c6ea(param_1,param_2,0);
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
  }
  else {
    iVar1 = FUN_ram_4204c6ea(param_1,param_2,0);
  }
  if (iVar1 != 0) {
    return iVar1;
  }
  uVar3 = 1;
LAB_ram_4204cbde:
  if ((*(uint *)(param_1 + 0x3c) == param_2) &&
     (iVar1 = FUN_ram_4204c650(param_1,param_2,uVar3), iVar1 != 0)) {
    return -1;
  }
  if (*(uint *)(param_1 + 0x38) < uVar3 + param_2) {
    *(uint *)(param_1 + 0x38) = uVar3 + param_2;
  }
  return 0;
}

