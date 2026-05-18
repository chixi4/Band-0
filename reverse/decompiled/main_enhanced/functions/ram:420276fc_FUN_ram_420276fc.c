
void FUN_ram_420276fc(undefined4 param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
                     undefined4 param_5,byte param_6)

{
  byte bVar1;
  int iVar2;
  
  *(byte *)(param_3 + 5) = param_6 | 2;
  iVar2 = FUN_ram_4202d598(param_2,1);
  *param_3 = iVar2;
  if (iVar2 == 0) {
    bVar1 = **(byte **)*param_2;
    iVar2 = 0;
    if (bVar1 != 0) {
      iVar2 = bVar1 + 0x500;
    }
    *param_3 = iVar2;
    *(byte *)(param_3 + 1) = bVar1;
  }
  return;
}

