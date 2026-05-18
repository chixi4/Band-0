
void FUN_ram_403962e2(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_ram_40396966();
  if ((*(int *)(gp + -0x770) == 0) && (DAT_ram_3fcc51d0 == '\0')) {
    iVar1 = FUN_ram_40391bc0();
    DAT_ram_3fcc51c0 = (undefined1)iVar1;
    if (iVar1 == 0) {
      uVar4 = FUN_ram_4039302a();
      uVar5 = FUN_ram_403919ae();
      uVar3 = (uint)uVar4 - (int)uVar5;
      iVar1 = ((int)((ulonglong)uVar4 >> 0x20) - (int)((ulonglong)uVar5 >> 0x20)) -
              (uint)((uint)uVar4 < uVar3);
      iVar2 = (int)((ulonglong)param_1 * 10000 >> 0x20);
      if ((iVar2 < iVar1) || ((iVar1 == iVar2 && (param_1 * 10000 < uVar3)))) {
        uVar3 = param_1 * 10000;
        iVar1 = iVar2;
      }
      if ((0 < iVar1) || ((iVar1 == 0 && (29999 < uVar3)))) {
        FUN_ram_403960ac(uVar3 - 100,(uint)(uVar3 - 100 < uVar3) + iVar1 + -1);
        uVar4 = FUN_ram_403919ae();
        FUN_ram_40395d9a();
        uVar5 = FUN_ram_403919ae();
        uVar3 = (uint)uVar5 - (int)uVar4;
        iVar1 = (*(code *)&SUB_ram_400108f8)
                          (uVar3,((int)((ulonglong)uVar5 >> 0x20) - (int)((ulonglong)uVar4 >> 0x20))
                                 - (uint)((uint)uVar5 < uVar3),10000,0);
        if (iVar1 != 0) {
          FUN_ram_4039815c();
          FUN_ram_403969de();
        }
      }
    }
  }
  else {
    DAT_ram_3fcc51c0 = 1;
  }
  FUN_ram_40396994();
  return;
}

