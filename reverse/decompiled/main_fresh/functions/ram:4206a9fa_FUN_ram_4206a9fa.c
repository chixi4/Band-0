
undefined4 FUN_ram_4206a9fa(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0xffff9f00;
  }
  (*(code *)&SUB_ram_40010488)(param_1,0,0x44);
  if (*(code **)(*(int *)(&DAT_ram_3c0f9944 + (*(byte *)(param_2 + 7) & 0x7c)) + 0x24) !=
      (code *)0x0) {
    iVar1 = (**(code **)(*(int *)(&DAT_ram_3c0f9944 + (*(byte *)(param_2 + 7) & 0x7c)) + 0x24))();
    param_1[0xf] = iVar1;
    if (iVar1 == 0) {
      return 0xffff9e80;
    }
  }
  *param_1 = param_2;
  return 0;
}

