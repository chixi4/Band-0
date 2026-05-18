
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40396b42(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_40394d60();
  if (*(int *)(_DAT_ram_3fcb65fc + (param_1 + 0x50) * 4 + 8) == 0) {
    *(undefined1 *)(_DAT_ram_3fcb65fc + param_1 + 0x14c) = 1;
    if (param_3 != 0) {
      FUN_ram_40395db0();
      FUN_ram_40394dce();
    }
  }
  FUN_ram_40394d8e();
  FUN_ram_40394d60();
  iVar2 = (param_1 + 0x50) * 4;
  iVar1 = *(int *)(_DAT_ram_3fcb65fc + iVar2 + 8);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      *(int *)(iVar2 + _DAT_ram_3fcb65fc + 8) = iVar1 + -1;
    }
    else {
      *(undefined4 *)(iVar2 + _DAT_ram_3fcb65fc + 8) = 0;
    }
  }
  *(undefined1 *)(_DAT_ram_3fcb65fc + param_1 + 0x14c) = 0;
  FUN_ram_40394d8e();
  return iVar1;
}

