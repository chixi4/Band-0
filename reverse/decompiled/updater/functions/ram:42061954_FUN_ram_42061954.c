
int FUN_ram_42061954(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_60 [72];
  
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 0) {
    return -1;
  }
  iVar2 = *(int *)(iVar1 + 0x40);
  if (((iVar2 + 2U <= param_3) && (*(int *)(param_1 + 0x68) != 0)) && (*(int *)(iVar1 + 0x44) != 0))
  {
    if (*(int *)(iVar1 + 100) == 0) {
      if (*(int *)(iVar1 + 0x50) == 0) {
        return -1;
      }
      if (*(int *)(iVar1 + 0x48) == 0) {
        return -1;
      }
      iVar1 = FUN_ram_4205ffd0();
    }
    else {
      if (*(int *)(iVar1 + 0x54) == 0) {
        return -1;
      }
      if (*(int *)(iVar1 + 0x4c) == 0) {
        return -1;
      }
      iVar1 = FUN_ram_42060068();
    }
    if ((iVar1 == 0) && (iVar1 = FUN_ram_40399d6c(auStack_60,param_2 + 2,iVar2), iVar1 == 0)) {
      iVar1 = FUN_ram_42065e42(param_1,param_2 + iVar2 + 2U,(param_3 - 2) - iVar2);
      return -(uint)(iVar1 != 0);
    }
  }
  return -1;
}

