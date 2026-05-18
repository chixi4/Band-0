
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42058a52(uint *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  piVar2 = _DAT_ram_3fcb67ac;
  if (((uVar4 & 0xf0) != 0xe0) || (iVar3 = _DAT_ram_3fcb6820, _DAT_ram_3fcb6820 == 0)) {
    for (; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      bVar1 = *(byte *)((int)piVar2 + 0x39);
      if ((((bVar1 & 1) != 0) && ((bVar1 >> 2 & 1) != 0)) && (piVar2[1] != 0)) {
        if (((piVar2[1] ^ uVar4) & piVar2[2]) == 0) {
          return (int)piVar2;
        }
        if (((bVar1 & 2) == 0) && (uVar4 == piVar2[3])) {
          return (int)piVar2;
        }
      }
    }
    iVar3 = FUN_ram_420595cc(0,param_1);
    if (((iVar3 == 0) && (_DAT_ram_3fcb67a8 != 0)) &&
       (((*(byte *)(_DAT_ram_3fcb67a8 + 0x39) & 5) == 5 &&
        ((*(int *)(_DAT_ram_3fcb67a8 + 4) != 0 && ((char)*param_1 != '\x7f')))))) {
      iVar3 = _DAT_ram_3fcb67a8;
    }
  }
  return iVar3;
}

