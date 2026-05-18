
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204ae8c(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  while( true ) {
    iVar4 = _DAT_ram_3fcdfdec;
    iVar3 = *(int *)(_DAT_ram_3fcdfdec + 0x334);
    if (iVar3 == 0) break;
    iVar5 = *(int *)(iVar3 + 0x20);
    *(int *)(_DAT_ram_3fcdfdec + 0x334) = iVar5;
    if (iVar5 == 0) {
      *(int *)(iVar4 + 0x338) = iVar4 + 0x334;
    }
    *(undefined4 *)(iVar3 + 0x20) = 0;
    FUN_ram_4039bab0();
  }
  while( true ) {
    iVar4 = _DAT_ram_3fcdfdec;
    iVar3 = *(int *)(_DAT_ram_3fcdfdec + 0x33c);
    if (iVar3 == 0) break;
    iVar5 = *(int *)(iVar3 + 0x20);
    *(int *)(_DAT_ram_3fcdfdec + 0x33c) = iVar5;
    if (iVar5 == 0) {
      *(int *)(iVar4 + 0x340) = iVar4 + 0x33c;
    }
    *(undefined4 *)(iVar3 + 0x20) = 0;
    FUN_ram_4039bab0();
  }
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    FUN_ram_4204ae38(cVar1);
    cVar1 = cVar2;
  } while (cVar2 != '\x10');
  while (iVar4 = (*(code *)&SUB_ram_40011d18)(), iVar4 != 0) {
    FUN_ram_4039bab0();
  }
  FUN_ram_4204ab9e();
  return;
}

