
int FUN_ram_420337cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [16];
  
  iVar1 = 3;
  while ((0 < param_2 && (iVar1 = FUN_ram_420332b4(0x2018,0,0,auStack_28), iVar1 == 0))) {
    iVar2 = param_2;
    if (8 < param_2) {
      iVar2 = 8;
    }
    param_2 = param_2 - iVar2;
    FUN_ram_4039c11e(param_1,auStack_28,iVar2);
    param_1 = param_1 + iVar2;
  }
  return iVar1;
}

