
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4205172a(char *param_1)

{
  char cVar1;
  int *piVar2;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  cVar1 = (*(code *)&SUB_ram_40010580)(param_1 + 2);
  piVar2 = _DAT_ram_3fcb67ac;
  if ((cVar1 != '\0') || (param_1[2] == '0')) {
    for (; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      if (((*(char *)(piVar2 + 0xf) == cVar1) && (*param_1 == *(char *)((int)piVar2 + 0x3a))) &&
         (param_1[1] == *(char *)((int)piVar2 + 0x3b))) {
        return (int)piVar2;
      }
    }
  }
  return 0;
}

