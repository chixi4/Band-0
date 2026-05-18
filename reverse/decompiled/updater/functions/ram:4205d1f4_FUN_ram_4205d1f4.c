
void FUN_ram_4205d1f4(undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  pbVar3 = (byte *)*param_1;
  pbVar1 = pbVar3;
  if (pbVar3 != (byte *)0x0) {
    while ((*(byte *)(*pbVar1 + 0x3c07a941) & 8) != 0) {
      pbVar1 = pbVar1 + 1;
    }
    if (*pbVar1 != 0) {
      iVar2 = (*(code *)&SUB_ram_400104a8)(pbVar1);
      pbVar3 = pbVar1 + iVar2 + -1;
      while ((pbVar1 < pbVar3 && ((*(byte *)(*pbVar3 + 0x3c07a941) & 8) != 0))) {
        pbVar3 = pbVar3 + -1;
      }
      pbVar3[1] = 0;
      iVar2 = (*(code *)&SUB_ram_400104a8)(pbVar1);
      FUN_ram_40399e7e(*param_1,pbVar1,iVar2 + 1);
      return;
    }
    *pbVar3 = 0;
  }
  return;
}

