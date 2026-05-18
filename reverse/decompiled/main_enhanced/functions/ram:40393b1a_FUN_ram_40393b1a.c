
int FUN_ram_40393b1a(int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
    return 0x102;
  }
  iVar5 = param_1[0x1d];
  if ((*(int *)(iVar5 + 0x98) == *param_1) &&
     (piVar2 = (int *)FUN_ram_40393322(iVar5), param_1 == piVar2)) {
    iVar3 = FUN_ram_403980d6();
    while (iVar4 = FUN_ram_4039ad3a(iVar5 + 0x20), iVar4 == 0) {
      iVar4 = FUN_ram_403980d6();
      if (param_2 < (uint)(iVar4 - iVar3)) {
        return 0x107;
      }
    }
    uVar1 = **(uint **)(iVar5 + 0x58);
    FUN_ram_40393370(iVar5);
    FUN_ram_403932c2(iVar5 + 0x58);
    *(undefined1 *)(iVar5 + 0xb4) = 0;
    if (param_1 != *(int **)(iVar5 + 0xa8)) {
      if (*(int **)(iVar5 + 0xa8) != (int *)0x0) goto LAB_ram_40393b3a;
      FUN_ram_40392916(param_1[0x1e]);
    }
    return (-(uint)(uVar1 < 0x40000000) & 0xfffffefd) + 0x103;
  }
LAB_ram_40393b3a:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

