
int FUN_ram_4206195c(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                    int param_6)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_60 [72];
  
  iVar2 = *(int *)(param_6 + 0x40);
  if (((iVar2 + 2U <= param_3) && (*(int *)(param_1 + 0x68) != 0)) &&
     (*(int *)(param_6 + 0x44) != 0)) {
    if (*(int *)(param_6 + 100) == 0) {
      if (*(int *)(param_6 + 0x50) == 0) {
        return -1;
      }
      if (*(int *)(param_6 + 0x48) == 0) {
        return -1;
      }
      iVar1 = FUN_ram_4205ffd0();
    }
    else {
      if (*(int *)(param_6 + 0x54) == 0) {
        return -1;
      }
      if (*(int *)(param_6 + 0x4c) == 0) {
        return -1;
      }
      iVar1 = FUN_ram_42060068();
    }
    if ((iVar1 == 0) && (iVar1 = FUN_ram_40399d6c(auStack_60,param_2 + 2,iVar2), iVar1 == 0)) {
      iVar2 = FUN_ram_42065e42(param_1,param_2 + iVar2 + 2U,(param_3 - 2) - iVar2);
      return -(uint)(iVar2 != 0);
    }
  }
  return -1;
}

