
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420279b4(uint param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)*(int *)(_DAT_ram_3fcb6b7c + 0x20);
  piVar3 = (int *)0;
  while( true ) {
    piVar2 = piVar1;
    if (piVar2 == (int *)0x0) {
      return;
    }
    if (((*(ushort *)((int)piVar2 + 10) == param_1) &&
        ((param_2 == 0xff || (*(byte *)((int)piVar2 + 0xd) == param_2)))) &&
       ((param_3 == 0xffffffff || (param_3 == (*(byte *)(piVar2 + 2) & 1))))) break;
    piVar1 = (int *)*piVar2;
    piVar3 = piVar2;
  }
  if (param_4 == (int *)0x0) {
    return;
  }
  *param_4 = (int)piVar3;
  return;
}

