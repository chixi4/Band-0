
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4202e744(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  if ((*(char *)(_DAT_ram_3fcb6ba0 + 0xf4) == '\0') ||
     ((*(byte *)(_DAT_ram_3fcb6ba0 + 0xf5) & 1) == 0)) {
    uVar5 = 0x7fffffff;
  }
  else {
    iVar1 = *(int *)(_DAT_ram_3fcb6ba0 + 0xf8);
    iVar4 = FUN_ram_403a6810();
    uVar5 = iVar1 - iVar4;
    if ((int)uVar5 < 1) {
      if (*(char *)(_DAT_ram_3fcb6ba0 + 0xf4) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf9e(0,0,0,0);
      }
      if (*(char *)(_DAT_ram_3fcb6ba0 + 0xf4) == '\x02') {
        iVar1 = FUN_ram_420332b4(0x200e,0,0,0,0);
        if (iVar1 != 0) {
          uVar5 = FUN_ram_403a681e(100);
          goto LAB_ram_4202e7a0;
        }
        *(byte *)(_DAT_ram_3fcb6ba0 + 0xf5) = *(byte *)(_DAT_ram_3fcb6ba0 + 0xf5) & 0xfe;
      }
      uVar5 = 0x7fffffff;
    }
  }
LAB_ram_4202e7a0:
  while( true ) {
    thunk_FUN_ram_4202b7dc();
    iVar1 = FUN_ram_403a6810();
    uVar2 = 0x7fffffff;
    uVar3 = 0xffff;
    for (piVar6 = *(int **)(_DAT_ram_3fcb6ba0 + 0x154); piVar6 != (int *)0x0;
        piVar6 = (int *)*piVar6) {
      uVar7 = piVar6[4] - iVar1 & ~(piVar6[4] - iVar1) >> 0x1f;
      if ((int)uVar7 < (int)uVar2) {
        uVar3 = *(undefined2 *)(piVar6 + 5);
        uVar2 = uVar7;
      }
    }
    if (uVar2 != 0) break;
    iVar1 = FUN_ram_4202e0c4(uVar3);
    thunk_FUN_ram_4202b7f6();
    if (iVar1 == 0) goto LAB_ram_4202e7cc;
    FUN_ram_4202e1c6();
  }
  thunk_FUN_ram_4202b7f6();
LAB_ram_4202e7cc:
  if ((int)uVar2 < (int)uVar5) {
    uVar5 = uVar2;
  }
  iVar1 = FUN_ram_4202e26c();
  if ((int)uVar5 < iVar1) {
    return uVar5;
  }
  uVar5 = FUN_ram_4202e26c();
  return uVar5;
}

