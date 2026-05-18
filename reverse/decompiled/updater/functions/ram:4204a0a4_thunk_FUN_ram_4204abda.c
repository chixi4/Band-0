
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_ram_4204abda(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (*(code *)&SUB_ram_40011b0c)();
  if (iVar1 != 0) {
    if ((*(int *)(_DAT_ram_3fcdfdec + 0x334) == 0) && (*(int *)(_DAT_ram_3fcdfdec + 0x33c) == 0)) {
      piVar2 = (int *)(_DAT_ram_3fcdfdec + 0x20);
      do {
        if ((((*(char *)((int)piVar2 + 9) == '\0') && (piVar2[5] != 0)) || (*piVar2 != 0)) ||
           (*(int *)(_DAT_ram_3fcdfdec + 0x344) != 0)) goto LAB_ram_4204ac26;
        piVar2 = piVar2 + 0xc;
      } while (piVar2 != (int *)(_DAT_ram_3fcdfdec + 800));
    }
    else {
LAB_ram_4204ac26:
      iVar1 = 0;
    }
  }
  return iVar1;
}

