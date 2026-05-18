
undefined4 FUN_ram_42047d6c(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 < 0) {
    return 0x102;
  }
  uVar2 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0x102;
  }
  else {
    iVar3 = FUN_ram_42048b72(param_1);
    if (iVar3 != 0) {
      FUN_ram_4039bf1e();
      return 0x102;
    }
    FUN_ram_40396966();
    puVar1 = (uint *)((param_1 + 0x18002401) * 4);
    *puVar1 = *puVar1 & 0xffffff7f;
    FUN_ram_40396994();
    uVar4 = 0;
  }
  return uVar4;
}

