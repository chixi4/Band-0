
void FUN_ram_420b6250(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_a2;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (param_1 == 0) {
    uVar2 = FUN_ram_4039fd38();
    param_3 = extraout_a2;
  }
  iVar1 = (int)uVar2 * 8;
  *(int *)(iVar1 + 0x3fcc1bd0) = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(iVar1 + 0x3fcc1bd4) = param_3;
  return;
}

