
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42033ebe(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_180 [88];
  undefined1 auStack_128 [276];
  
  iVar3 = _DAT_ram_3fcb6bc8;
  piVar1 = (int *)(_DAT_ram_3fcb6bc8 + 0x108);
  *(undefined2 *)(_DAT_ram_3fcb6bc8 + 0x10c) = 0;
  FUN_ram_4039c11e(auStack_128,iVar3,*piVar1 * 0x58);
  iVar3 = *(int *)(iVar3 + 0x108);
  puVar2 = auStack_128;
  (*(code *)&SUB_ram_40010568)(auStack_128,iVar3,0x58,0x420238ea);
  puVar6 = puVar2;
  for (iVar5 = 0; iVar5 < iVar3; iVar5 = iVar5 + 1) {
    FUN_ram_4202cf60(auStack_180,puVar6);
    iVar4 = FUN_ram_42033d4c(auStack_180);
    puVar6 = puVar6 + 0x58;
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  iVar5 = 0;
  while( true ) {
    if (iVar3 <= iVar5) {
      return 0;
    }
    FUN_ram_4039c11e(auStack_180,puVar2,0x58);
    iVar4 = FUN_ram_42033f78(auStack_180);
    puVar2 = puVar2 + 0x58;
    if (iVar4 != 0) break;
    iVar5 = iVar5 + 1;
  }
  return iVar4;
}

