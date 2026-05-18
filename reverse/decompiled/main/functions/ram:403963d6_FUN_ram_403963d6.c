
void FUN_ram_403963d6(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = (*(code *)param_1[2])(param_3,param_4);
  puVar1 = (uint *)*param_1;
  uVar3 = 1 << (0x18U - param_2 & 0x1f);
  *puVar1 = ~uVar3 & *puVar1;
  iVar2 = param_2 + 2;
  puVar1[iVar2 * 2 + 3] =
       puVar1[iVar2 * 2 + 3] & 0xfff00000 | (uint)((ulonglong)uVar4 >> 0x20) & 0xfffff;
  puVar1[iVar2 * 2 + 4] = (uint)uVar4;
  puVar1[param_2 + 0x14] = 1;
  *puVar1 = uVar3 | *puVar1;
  return;
}

