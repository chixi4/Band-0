
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202ddd4(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 **ppuVar3;
  undefined4 **ppuVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined4 **ppuVar8;
  undefined4 *puVar9;
  undefined4 *local_18;
  undefined4 **ppuStack_14;
  
  ppuStack_14 = &local_18;
  local_18 = (undefined4 *)0x0;
  thunk_FUN_ram_4202b7dc();
  iVar2 = _DAT_ram_3fcb6b9c;
  ppuVar3 = (undefined4 **)0x0;
  ppuVar4 = *(undefined4 ***)(_DAT_ram_3fcb6b9c + 0x20);
  while (ppuVar8 = ppuVar4, ppuVar7 = ppuVar3, ppuVar8 != (undefined4 **)0x0) {
    ppuVar4 = (undefined4 **)*ppuVar8;
    ppuVar3 = ppuVar8;
    if (*(ushort *)(ppuVar8 + 2) == param_1) {
      if (ppuVar7 == (undefined4 **)0x0) {
        iVar5 = **(int **)(iVar2 + 0x20);
        *(int *)(iVar2 + 0x20) = iVar5;
        if (iVar5 == 0) {
          *(int *)(iVar2 + 0x24) = iVar2 + 0x20;
        }
      }
      else {
        puVar6 = (undefined4 *)**ppuVar7;
        *ppuVar7 = puVar6;
        if (puVar6 == (undefined4 *)0x0) {
          *(undefined4 ***)(iVar2 + 0x24) = ppuVar7;
        }
      }
      *ppuVar8 = (undefined4 *)0x0;
      *ppuStack_14 = ppuVar8;
      ppuVar3 = ppuVar7;
      ppuStack_14 = ppuVar8;
    }
  }
  thunk_FUN_ram_4202b7f6();
  while (puVar6 = local_18, local_18 != (undefined4 *)0x0) {
    puVar9 = (undefined4 *)*local_18;
    pcVar1 = (char *)((int)local_18 + 10);
    local_18 = puVar9;
    if (*pcVar1 == '\0') {
      FUN_ram_4202d96e(puVar6,param_2);
    }
    FUN_ram_4202da9a(puVar6);
  }
  return;
}

