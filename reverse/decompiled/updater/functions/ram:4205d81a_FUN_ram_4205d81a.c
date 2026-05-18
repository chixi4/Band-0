
undefined4 FUN_ram_4205d81a(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    if (*param_2 == 0) {
      iVar1 = FUN_ram_4202175a(iVar1,param_2[1],*(undefined2 *)((int)param_2 + 10));
    }
    else {
      iVar2 = FUN_ram_42051d86(0,(short)param_2[2],0x280);
      if (iVar2 == 0) {
        return 0xffffffff;
      }
      FUN_ram_420520a2(iVar2,param_2);
      iVar1 = FUN_ram_4202175a(iVar1,*(undefined4 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 10),iVar2);
      FUN_ram_42051d02(iVar2);
    }
    if (iVar1 == 0x102) {
      return 0xfffffff0;
    }
    if (iVar1 < 0x103) {
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar1 == 0x101) {
        return 0xffffffff;
      }
    }
    else if (iVar1 == 0x500e) {
      return 0xfffffffe;
    }
  }
  return 0xfffffff4;
}

