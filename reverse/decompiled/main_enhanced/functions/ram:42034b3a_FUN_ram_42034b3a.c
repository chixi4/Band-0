
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42034b3a(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = FUN_ram_42034672(1,_DAT_ram_3fcb6bc8,_DAT_ram_3fcb6bc8 + 0x108);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_ram_42034672(2,_DAT_ram_3fcb6bc8 + 0x110,_DAT_ram_3fcb6bc8 + 0x218), iVar2 == 0))
  {
    iVar2 = *(int *)(_DAT_ram_3fcb6bc8 + 0x108);
    iVar7 = *(int *)(_DAT_ram_3fcb6bc8 + 0x218);
    if ((1 < iVar2) || (1 < iVar7)) {
      iVar6 = iVar2;
      if (iVar2 < 1) {
        iVar6 = 1;
      }
      iVar6 = iVar6 + -1;
      if (iVar7 < 1) {
        iVar7 = 1;
      }
      iVar7 = iVar7 + -1;
      puVar4 = (ushort *)(_DAT_ram_3fcb6bc8 + 8);
      iVar8 = iVar6;
      if (iVar6 < iVar7) {
        iVar8 = iVar7;
      }
      for (iVar3 = 0; iVar8 != iVar3; iVar3 = iVar3 + 1) {
        if (((iVar3 < iVar6) && (puVar4[0x2c] < *puVar4)) ||
           ((iVar3 < iVar7 && (puVar4[0xb4] < puVar4[0x88])))) {
          (*(code *)&SUB_ram_40010568)(_DAT_ram_3fcb6bc8,iVar2,0x58,0x420238ea);
          (*(code *)&SUB_ram_40010568)
                    (_DAT_ram_3fcb6bc8 + 0x110,*(undefined4 *)(_DAT_ram_3fcb6bc8 + 0x218),0x58,
                     0x420238ea);
          break;
        }
        puVar4 = puVar4 + 0x2c;
      }
    }
    iVar2 = _DAT_ram_3fcb6bc8;
    uVar5 = 0;
    if (0 < *(int *)(_DAT_ram_3fcb6bc8 + 0x108)) {
      uVar5 = *(undefined2 *)
               ((*(int *)(_DAT_ram_3fcb6bc8 + 0x108) + -1) * 0x58 + _DAT_ram_3fcb6bc8 + 8);
    }
    piVar1 = (int *)(_DAT_ram_3fcb6bc8 + 0x218);
    *(undefined2 *)(_DAT_ram_3fcb6bc8 + 0x10c) = uVar5;
    uVar5 = 0;
    if (0 < *piVar1) {
      uVar5 = *(undefined2 *)((*piVar1 + -1) * 0x58 + iVar2 + 0x118);
    }
    *(undefined2 *)(iVar2 + 0x10e) = uVar5;
    iVar2 = FUN_ram_42034672(3,iVar2 + 0x21c,iVar2 + 0x27c);
    if (((iVar2 == 0) &&
        (iVar2 = FUN_ram_42034672(8,_DAT_ram_3fcb6bc8 + 0x280,_DAT_ram_3fcb6bc8 + 0x298), iVar2 == 0
        )) && (iVar2 = FUN_ram_42034672(7,_DAT_ram_3fcb6bc8 + 0x2cc,_DAT_ram_3fcb6bc8 + 0x314),
              iVar2 == 0)) {
      FUN_ram_42034672(6,_DAT_ram_3fcb6bc8 + 0x29c,_DAT_ram_3fcb6bc8 + 0x2c8);
      return;
    }
  }
  return;
}

