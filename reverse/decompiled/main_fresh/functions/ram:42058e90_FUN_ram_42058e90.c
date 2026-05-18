
uint FUN_ram_42058e90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_a2;
  uint uVar3;
  uint extraout_a4;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  uVar3 = param_1 + 4;
  if (0x45 < uVar3) {
    uVar4 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
    uVar3 = extraout_a4;
  }
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  *(char *)(iVar2 + iVar1) = (char)((uint)param_3 >> 0x18);
  *(char *)((iVar1 + 1U & 0xffff) + iVar2) = (char)((uint)param_3 >> 0x10);
  *(char *)((iVar1 + 2U & 0xffff) + iVar2) = (char)((uint)param_3 >> 8);
  *(char *)(iVar2 + (iVar1 + 3U & 0xffff)) = (char)param_3;
  return uVar3 & 0xffff;
}

