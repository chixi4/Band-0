
uint FUN_ram_42058e58(int param_1,undefined4 param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 extraout_a2;
  int extraout_a3;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (0x45 < (uint)(param_4 + 2 + param_1)) {
    uVar3 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
    param_4 = extraout_a3;
  }
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  iVar1 = (int)uVar3;
  *(undefined1 *)(iVar2 + iVar1) = param_3;
  *(char *)(iVar2 + (iVar1 + 1U & 0xffff)) = (char)param_4;
  return iVar1 + 2U & 0xffff;
}

