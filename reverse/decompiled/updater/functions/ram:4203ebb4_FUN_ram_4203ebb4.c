
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203ebb4(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined1 auStack_5c [32];
  undefined1 uStack_3c;
  undefined1 auStack_3b [6];
  undefined1 uStack_35;
  undefined1 uStack_34;
  
  iVar5 = _DAT_ram_3fcb4f84;
  _DAT_ram_3fcb3fe8 = _DAT_ram_3fcb3fe8 | 0x10;
  iVar1 = FUN_ram_4203e674();
  while( true ) {
    if (iVar1 == 0) {
      FUN_ram_4203ea16();
      FUN_ram_4203e602();
      FUN_ram_4203db88();
      FUN_ram_42033fd8(1,4,4,0x3c07b728,*(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128),3);
      *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 3;
      uStack_35 = 0xcd;
      if ((((DAT_ram_3fcb4f14 == '\0') && (uStack_35 = 0xd4, DAT_ram_3fcb4f15 == '\0')) &&
          (uStack_35 = 0xd3, DAT_ram_3fcb3fe1 == '\0')) &&
         (uStack_35 = 0xd2, DAT_ram_3fcb3fe0 == '\0')) {
        uStack_35 = 0xc9;
      }
      (**(code **)(_DAT_ram_3fcb50e8 + 0x10))(uStack_35);
      iVar1 = *(int *)(gp + -0x2b8);
      uStack_34 = 0x80;
      (*(code *)&SUB_ram_40010488)(auStack_3b,0,6);
      FUN_ram_40399daa(auStack_5c,iVar1 + 8,0x20);
      uStack_3c = (undefined1)*(undefined4 *)(iVar1 + 4);
      FUN_ram_42033fd8(1,5,4,0x3c07b6c0,uStack_35);
      FUN_ram_4203bea0(5,auStack_5c,0x29);
      FUN_ram_4204ba6c();
      if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\0') {
        FUN_ram_42033fd8(1,5,4,0x3c07b760);
      }
      else {
        if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\x02') {
          FUN_ram_42033fd8(1,5,4,0x3c07b774);
        }
        iVar1 = FUN_ram_420399ec();
        iVar5 = iVar5 + 4;
        if (iVar1 == 0) {
          FUN_ram_42033fd8(1,4,4,0x3c07b794);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar5);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar5);
          FUN_ram_42048fbe(0);
          iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
          if (iVar5 != 0) {
            (*(code *)&SUB_ram_40011ee4)();
          }
          (*(code *)&SUB_ram_40011d48)();
        }
        else {
          FUN_ram_42033fd8(1,4,3,0x3c07e524);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar5);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar5);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar5,0x4202d67a,0);
          if (DAT_ram_3fcb512c == '\x06') {
            pcVar4 = *(code **)(_DAT_ram_3fcdfdd8 + 0xe0);
            uVar3 = 4000;
          }
          else {
            uVar3 = 1000;
            pcVar4 = *(code **)(_DAT_ram_3fcdfdd8 + 0xe0);
          }
          (*pcVar4)(iVar5,uVar3,0);
        }
      }
      return 0;
    }
    FUN_ram_42033fd8(1,5,4,0x3c07b6e4,*(undefined1 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 5),
                     *(undefined1 *)(iVar1 + 6),*(undefined1 *)(iVar1 + 7),
                     *(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9));
    DAT_ram_3fcb512e = *(undefined1 *)(iVar1 + 0x29e);
    _DAT_ram_3fcb512c = *(undefined2 *)(iVar1 + 0x29c);
    DAT_ram_3fcb5137 = 0;
    *(undefined1 *)(iVar1 + 0x3ae) = DAT_ram_3fcb512e;
    DAT_ram_3fcb5130 = *(undefined1 *)(iVar1 + 0x2a0);
    _DAT_ram_3fcb5134 = *(undefined2 *)(iVar1 + 0x2a4);
    DAT_ram_3fcb51c0 = *(undefined1 *)(iVar1 + 0x37e);
    DAT_ram_3fcb51c1 = *(undefined1 *)(iVar1 + 0x37f);
    DAT_ram_3fcb5136 = *(undefined1 *)(iVar1 + 0x2a6);
    if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\x03') {
      FUN_ram_42033fd8(1,4,4,0x3c07b710,3,1);
      *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 1;
    }
    FUN_ram_42033fd8(1,4,5,0x3c07eff8,*(undefined1 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 5),
                     *(undefined1 *)(iVar1 + 6),*(undefined1 *)(iVar1 + 7),
                     *(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9),
                     *(undefined1 *)(iVar1 + 0x28a));
    DAT_ram_3fcb3fc9 = *(byte *)(iVar1 + 0x28a) ^ 1;
    if ((_DAT_ram_3fcb50e8 != 0) &&
       (iVar2 = (**(code **)(_DAT_ram_3fcb50e8 + 8))(iVar1 + 4), iVar2 == 0)) break;
    FUN_ram_4203e512(iVar1 + 4);
    FUN_ram_4203eaa0(iVar1);
    iVar1 = FUN_ram_4203e674();
  }
  return 0;
}

