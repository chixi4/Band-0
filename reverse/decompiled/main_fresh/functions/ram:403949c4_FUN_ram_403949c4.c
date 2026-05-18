
void FUN_ram_403949c4(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (0x19 < param_1) {
    param_1 = FUN_ram_420b4706();
  }
  FUN_ram_4039691e();
  FUN_ram_40396966();
  puVar1 = (uint *)FUN_ram_420b4690(param_1);
  uVar3 = *puVar1;
  uVar2 = FUN_ram_420b471a(param_1);
  *puVar1 = uVar3 | uVar2;
  *puVar1 = ~uVar2 & *puVar1;
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

