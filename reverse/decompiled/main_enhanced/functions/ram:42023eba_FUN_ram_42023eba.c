
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42023eba(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_ec0 [1872];
  byte bStack_770;
  undefined1 uStack_76f;
  char acStack_651 [1053];
  undefined1 local_234;
  undefined1 auStack_233 [515];
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  
  (*(code *)&SUB_ram_40010488)(&bStack_770,0);
  iVar8 = _DAT_ram_3fcc518c;
  local_2c = 0x3000111;
  puVar5 = (undefined4 *)(*(int *)(_DAT_ram_3fcc518c + 0x54) + param_1 * 0x18);
  uVar3 = *(undefined2 *)(puVar5 + 1);
  FUN_ram_4039c11e(auStack_233,*puVar5,uVar3);
  local_30 = 0x180f;
  bVar1 = *(byte *)(puVar5 + 2);
  bStack_770 = bStack_770 | 1;
  uStack_76f = *(undefined1 *)(iVar8 + 0x2b);
  bVar12 = false;
  bVar11 = false;
  iVar8 = 0;
  local_2e = uVar3;
  for (uVar7 = 0; (uVar7 & 0xff) < (uint)bVar1; uVar7 = uVar7 + 1) {
    iVar10 = puVar5[3] + uVar7 * 0x14;
    cVar9 = *(char *)(iVar10 + 2);
    bVar4 = bVar11;
    if (*(char *)(iVar10 + 3) == '\x01') {
      if ((cVar9 != '\x01') && (cVar9 != '\x02')) {
        cVar9 = '\x03';
      }
      iVar6 = iVar8 * 0x106;
      cVar2 = *(char *)(iVar10 + 1);
      iVar8 = iVar8 + 1;
      acStack_651[iVar6] = cVar9;
      acStack_651[iVar6 + 1] = cVar2;
    }
    else if (cVar9 == '\x01') {
      bVar4 = true;
      if (*(int *)(iVar10 + 4) == 1) {
        bStack_770 = bStack_770 | 2;
        bVar4 = bVar11;
      }
    }
    else {
      bVar12 = true;
    }
    bVar11 = bVar4;
  }
  if (bVar12) {
    bStack_770 = bStack_770 | 4;
  }
  if (bVar11) {
    bStack_770 = bStack_770 | 8;
  }
  local_234 = (undefined1)iVar8;
  FUN_ram_4039c11e(auStack_ec0,&bStack_770);
  FUN_ram_420267da(auStack_ec0);
  return;
}

