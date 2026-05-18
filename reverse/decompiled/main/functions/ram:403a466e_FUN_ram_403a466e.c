
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_403a466e(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)(**(code **)(_DAT_ram_3fcdfecc + 0x90c))
                            (*(undefined4 *)(_DAT_ram_3fcdff64 + 0x50),0x24);
  if (piVar3 == (int *)0x0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x7026,param_1);
  }
  else {
    uVar1 = *(ushort *)piVar3[2];
    *(short *)(piVar3 + 4) = (short)param_1;
    *piVar3 = *piVar3 + 4;
    param_1 = param_1 - (((uVar1 & 0xfffffffc) - (uint)*(byte *)((int)piVar3 + 5)) + -4);
    piVar2 = piVar3;
    while (0 < param_1) {
      param_1 = param_1 - (uVar1 & 0xfffffffc);
      piVar4 = (int *)(**(code **)(_DAT_ram_3fcdfecc + 0x908))
                                (*(undefined4 *)(_DAT_ram_3fcdff64 + 0x50),0);
      if (piVar4 == (int *)0x0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x904))(piVar3);
        return (int *)0x0;
      }
      piVar2[3] = (int)piVar4;
      piVar2 = piVar4;
    }
  }
  return piVar3;
}

