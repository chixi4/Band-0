
undefined4 FUN_ram_42058bf0(uint *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != 0)) && (param_3 != 0)) && (param_5 != 0)) {
    uVar2 = *param_1;
    if (((uVar2 != 0) && ((uVar2 & 0xf0) != 0xe0)) && (uVar2 != *(uint *)(param_5 + 4))) {
      return 0xfffffffc;
    }
    uVar1 = FUN_ram_42058a7e();
    return uVar1;
  }
  return 0xfffffff0;
}

