
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42036716(char *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 auStack_3c [7];
  undefined1 auStack_35 [33];
  
  piVar1 = _DAT_ram_3fcb6be4;
  if (param_1 != (char *)0x0) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      if ((*param_1 == '\x01') && ((param_1[6] & 0xc0U) == 0x40)) {
        puVar2 = (undefined1 *)((int)piVar1 + 0x16);
LAB_ram_42036762:
        iVar3 = FUN_ram_4203637e(puVar2,param_1);
        if (iVar3 == 0) {
          return (int)piVar1;
        }
      }
      else {
        iVar3 = FUN_ram_4203637e(piVar1 + 2,param_1);
        if (iVar3 == 0) {
          return (int)piVar1;
        }
        if (1 < *(byte *)(piVar1 + 2)) {
          FUN_ram_42036658(piVar1,auStack_3c);
          puVar2 = auStack_35;
          goto LAB_ram_42036762;
        }
      }
    }
  }
  return 0;
}

