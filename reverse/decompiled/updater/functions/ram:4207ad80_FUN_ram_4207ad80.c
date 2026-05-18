
void FUN_ram_4207ad80(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)FUN_ram_4207ac08();
  uVar3 = *puVar1;
  uVar2 = FUN_ram_4207ab3c(param_1);
  *puVar1 = ~uVar2 & uVar3;
  puVar1 = (uint *)FUN_ram_4207ac60(param_1);
  uVar3 = *puVar1;
  uVar2 = FUN_ram_4207acd6(param_1);
  *puVar1 = uVar3 | uVar2;
  return;
}

