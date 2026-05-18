
int FUN_ram_4205a844(int param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x38) != '\x06') {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if ((((param_2 == (uint *)0x0) || (*param_2 == 0)) ||
      (iVar1 = FUN_ram_4205be44(*param_2,param_1), iVar1 != 0)) || ((*param_2 & 0xf0) == 0xe0)) {
    iVar1 = -0x10;
  }
  else {
    iVar1 = FUN_ram_4205a716(param_2,param_4,param_1);
    if (iVar1 < 0) {
      iVar1 = (int)(char)iVar1;
    }
    else {
      if ((param_4 & 4) == 0) {
        if ((&DAT_ram_3fcc258c)[iVar1 * 0x18] == '\x05') {
          return -6;
        }
        uVar3 = 2;
      }
      else {
        uVar3 = 5;
      }
      iVar1 = iVar1 * 0x18;
      (&DAT_ram_3fcc258c)[iVar1] = uVar3;
      *(int *)(&DAT_ram_3fcc2580 + iVar1) = param_1;
      FUN_ram_4039c11e(iVar1 + 0x3fcc2584,param_3,6);
      *(undefined2 *)(&DAT_ram_3fcc258a + iVar1) = 0;
      while (piVar2 = *(int **)(&DAT_ram_3fcc2578 + iVar1), piVar2 != (int *)0x0) {
        uVar4 = piVar2[1];
        *(int *)(&DAT_ram_3fcc2578 + iVar1) = *piVar2;
        FUN_ram_420531f8(9);
        FUN_ram_4205c318(param_1,uVar4,param_1 + 0x32,param_3,0x800);
        FUN_ram_42053ac4(uVar4);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}

