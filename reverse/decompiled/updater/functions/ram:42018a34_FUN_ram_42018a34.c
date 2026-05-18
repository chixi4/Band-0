
void FUN_ram_42018a34(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(param_1 + param_3 * 0x20);
  *puVar1 = param_2;
  uVar2 = FUN_ram_420197ea(puVar1);
  iVar3 = *(int *)(param_4 + 0x14);
  puVar1[7] = uVar2;
  iVar3 = FUN_ram_420195a0(param_4,param_3 * iVar3);
  if (iVar3 == 0) {
    FUN_ram_420194e0(param_4,param_3 * *(int *)(param_4 + 0x14),puVar1,0x20);
    return;
  }
  return;
}

