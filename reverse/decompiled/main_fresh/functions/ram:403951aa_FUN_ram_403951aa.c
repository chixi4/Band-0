
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403951aa(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *extraout_a5;
  
  if (*param_1 == 0) {
    FUN_ram_40390fa0(param_1[3],param_1[2]);
    return;
  }
  if (*param_1 != 1) {
LAB_ram_403951d0:
    FUN_ram_40394fd0();
    return;
  }
  if (param_1[1] != _DAT_ram_3fcc4e34) goto LAB_ram_403951d0;
  iVar1 = param_1[3];
  puVar3 = (uint *)&DAT_ram_600c0008;
  if (iVar1 != 0x50) {
    if (iVar1 == 0x78) {
      uVar2 = _DAT_ram_600c0008 & 0xfffffffc | 1;
      goto LAB_ram_40394f8c;
    }
    FUN_ram_4039bf1e();
    puVar3 = extraout_a5;
  }
  uVar2 = *puVar3 & 0xfffffffc;
LAB_ram_40394f8c:
  *puVar3 = uVar2;
  _DAT_ram_600c0058 = _DAT_ram_600c0058 & 0xfffff000 | 0x400;
  FUN_ram_40390f8a(40000000);
  (*(code *)&SUB_ram_40010774)(iVar1);
  return;
}

