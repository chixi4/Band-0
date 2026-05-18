
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42028508(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int unaff_s2;
  uint *puVar9;
  
  thunk_FUN_ram_4202b7dc();
  iVar1 = _DAT_ram_3fcb6b7c;
  iVar5 = 0;
  puVar2 = (uint *)0x0;
  iVar3 = 0x7fffffff;
  puVar9 = (uint *)0x0;
  puVar4 = *(uint **)(_DAT_ram_3fcb6b7c + 0x20);
  while (puVar8 = puVar4, puVar8 != (uint *)0x0) {
    puVar4 = (uint *)*puVar8;
    iVar6 = puVar8[1] - unaff_s2;
    if (iVar6 < 1) {
      if (puVar9 == (uint *)0x0) {
        iVar5 = **(int **)(iVar1 + 0x20);
        *(int *)(iVar1 + 0x20) = iVar5;
        if (iVar5 == 0) {
          *(int *)(iVar1 + 0x24) = iVar1 + 0x20;
        }
      }
      else {
        uVar7 = *(uint *)*puVar9;
        *puVar9 = uVar7;
        if (uVar7 == 0) {
          *(uint **)(iVar1 + 0x24) = puVar9;
        }
      }
      *puVar8 = (uint)puVar2;
      iVar5 = 1;
      puVar2 = puVar8;
    }
    else {
      puVar9 = puVar8;
      if (iVar6 < iVar3) {
        iVar3 = iVar6;
      }
    }
  }
  thunk_FUN_ram_4202b7f6();
  puVar2 = (uint *)((uint)puVar2 & -iVar5);
  while (puVar2 != (uint *)0x0) {
    FUN_ram_4202f8e6(*(undefined2 *)((int)puVar2 + 10),0xd,0,0);
    puVar9 = (uint *)*puVar2;
    FUN_ram_420276e4(puVar2);
    puVar2 = puVar9;
  }
  return iVar3;
}

