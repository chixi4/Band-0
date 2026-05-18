
void FUN_ram_420b4810(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)FUN_ram_420b4638();
  uVar3 = *puVar1;
  uVar2 = FUN_ram_420b456c(param_1);
  *puVar1 = uVar3 | uVar2;
  puVar1 = (uint *)FUN_ram_420b4690(param_1);
  uVar3 = *puVar1;
  uVar2 = FUN_ram_420b471a(param_1);
  *puVar1 = ~uVar2 & uVar3;
  return;
}

