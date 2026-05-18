
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204bbc4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (_DAT_ram_3fcc5260 != 0) {
    uVar3 = 0x102;
    if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_2 != (int *)0x0)) &&
       ((uint)param_1[2] < 2)) {
      iVar2 = FUN_ram_403905a0(1,0x20,0x804);
      uVar3 = 0x101;
      if (iVar2 != 0) {
        iVar1 = param_1[4];
        *(int *)(iVar2 + 0x10) = *param_1;
        *(int *)(iVar2 + 0x14) = param_1[1];
        *(char *)(iVar2 + 0xf) = param_1[2] != 0 | (char)iVar1 << 1;
        *param_2 = iVar2;
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  return 0x103;
}

