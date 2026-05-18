
uint FUN_ram_42058e1e(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 extraout_a2;
  uint uVar2;
  uint extraout_a4;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  uVar2 = param_1 + 2;
  if (0x45 < uVar2) {
    uVar3 = FUN_ram_4039bf1e();
    uVar2 = extraout_a4;
    param_3 = extraout_a2;
  }
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  *(char *)(iVar1 + (int)uVar3) = (char)((ushort)param_3 >> 8);
  *(char *)(iVar1 + ((int)uVar3 + 1U & 0xffff)) = (char)param_3;
  return uVar2 & 0xffff;
}

