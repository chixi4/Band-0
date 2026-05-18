
undefined4 FUN_ram_420a2f2a(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_420a5902();
  if (uVar1 == 0) {
    if ((*(int *)(param_1 + 0x794) == 0) || (iVar2 = FUN_ram_420a69e2(param_1), iVar2 == 0)) {
      *(undefined4 *)(param_1 + 0x774) = 4;
      return 1;
    }
  }
  else {
    if ((uVar1 & 0xffffff7f) == 0xffff9700) {
      return 0;
    }
    FUN_ram_420a2c28(*(undefined4 *)(param_1 + 0x790),2,-uVar1);
    FUN_ram_420a2c28(*(undefined4 *)(param_1 + 0x790),4,0x801a);
    if ((((*(int *)(param_2 + 0x44) != 0) || (*(int *)(param_2 + 4) != 0)) ||
        (*(char *)(param_2 + 0x34) != '\0')) && (iVar2 = FUN_ram_420a587a(param_1), iVar2 != 0)) {
      FUN_ram_420a2f02(param_1);
    }
    *(undefined4 *)(param_1 + 0x774) = 3;
  }
  return 0xffffffff;
}

