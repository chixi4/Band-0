
int FUN_ram_420a4ebe(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_420a4c64(param_1,1);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x74) == 0x14) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x34);
      (*(code *)&SUB_ram_40010488)(*(undefined4 *)(param_1 + 0x5c),0,8);
      FUN_ram_420a4acc(param_1);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
    else {
      FUN_ram_420a4a96(param_1,2,10);
      iVar1 = -0x7700;
    }
  }
  return iVar1;
}

