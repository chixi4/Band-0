
void FUN_ram_4209744c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 4) != 0x12121212) {
    (*(code *)&SUB_ram_40010488)(param_1,0,0x14);
    *(undefined4 *)(param_1 + 4) = 0x12121212;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    uStack_2c = 0;
    uStack_24 = 0;
    puStack_28 = &DAT_ram_3c0c4a84;
    uStack_34 = param_2;
    uStack_30 = param_3;
    iVar1 = FUN_ram_4204bbc4(&uStack_34,param_1 + 0x10);
    if (iVar1 != 0) {
      FUN_ram_4039bf1e();
    }
  }
  return;
}

