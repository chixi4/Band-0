
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403920ac(uint param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x102;
  }
  else {
    puVar5 = &DAT_ram_3fcc1d20;
    iVar4 = 0;
    bVar1 = false;
    for (iVar3 = 0; iVar3 != _DAT_ram_3fcc1d20; iVar3 = iVar3 + 1) {
      for (iVar6 = *(int *)(puVar5 + 0x24); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x24)) {
        if ((((iVar6 != *(int *)(puVar5 + 0x24)) &&
             (**(int **)(*(int *)(puVar5 + 0x28) + 4) != iVar6)) &&
            (*(uint *)(iVar6 + 0x18) <= param_1)) && (param_1 < *(uint *)(iVar6 + 0x1c))) {
          bVar1 = true;
          iVar4 = iVar6;
          break;
        }
      }
      puVar5 = puVar5 + 0x28;
    }
    uVar2 = 0x105;
    if (bVar1) {
      *param_2 = *(undefined4 *)(iVar4 + 0x14);
      return 0;
    }
  }
  return uVar2;
}

