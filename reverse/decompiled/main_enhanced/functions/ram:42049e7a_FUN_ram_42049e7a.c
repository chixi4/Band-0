
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42049e7a(uint param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  iVar1 = _DAT_ram_3fcc1d20;
  if ((param_3 != (uint *)0x0) && (((param_1 & 1) == 0 || ((param_1 & 0x14) == 0)))) {
    puVar4 = &DAT_ram_3fcc1d20;
    *param_3 = 0;
    uVar3 = 0;
    for (iVar2 = 0; iVar1 != iVar2; iVar2 = iVar2 + 1) {
      if (((param_1 == (param_1 & *(uint *)(puVar4 + 0x1c))) &&
          (param_2 == (param_2 & *(uint *)(puVar4 + 0x20)))) && (uVar3 < *(uint *)(puVar4 + 0x18)))
      {
        uVar3 = *(uint *)(puVar4 + 0x18);
      }
      puVar4 = puVar4 + 0x28;
    }
    *param_3 = uVar3;
    return 0;
  }
  return 0x102;
}

