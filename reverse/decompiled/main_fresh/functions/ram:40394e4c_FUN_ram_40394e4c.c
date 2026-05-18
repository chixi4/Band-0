
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394e4c(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *extraout_a5;
  
  puVar2 = (uint *)&DAT_ram_60008068;
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar1 = _DAT_ram_60008068 | 0x20000000;
      goto LAB_ram_40394e6e;
    }
    FUN_ram_4039bf1e();
    puVar2 = extraout_a5;
  }
  uVar1 = *puVar2 & 0xdfffffff;
LAB_ram_40394e6e:
  *puVar2 = uVar1;
  (*(code *)&SUB_ram_40010044)(3);
  return;
}

