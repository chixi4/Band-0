
void FUN_ram_420585b0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_a2;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (0x3fffffff < param_1) {
    uVar2 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
  }
  iVar1 = FUN_ram_4205c954();
  FUN_ram_4205850a(iVar1 + (int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_3);
  return;
}

