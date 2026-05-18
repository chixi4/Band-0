
undefined1 FUN_ram_420169ae(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  char acStack_288 [210];
  char acStack_1b6 [210];
  char acStack_e4 [210];
  char acStack_12 [10];
  
  (*(code *)&SUB_ram_40010488)(acStack_288,0,0x278);
  iVar3 = FUN_ram_42020d48(0x1a,0xd2,acStack_288);
  if ((((iVar3 == 0) && (iVar3 = FUN_ram_42020d48(0x10a,0xd2,acStack_1b6), iVar3 == 0)) &&
      (iVar3 = FUN_ram_42020d48(0x1fa,0xd2,acStack_e4), iVar3 == 0)) &&
     (iVar3 = FUN_ram_42020d48(0xb4c,2,acStack_12), iVar3 == 0)) {
    iVar3 = FUN_ram_42016992(acStack_288,0xd2,0);
    uVar2 = 1;
    uVar1 = 1;
    if ((((iVar3 == 0) &&
         (iVar3 = FUN_ram_42016992(acStack_288,0xd2,0xff), uVar1 = uVar2, iVar3 == 0)) &&
        ((iVar3 = FUN_ram_42016992(acStack_1b6,0xd2,0), iVar3 == 0 &&
         ((iVar3 = FUN_ram_42016992(acStack_1b6,0xd2,0xff), iVar3 == 0 &&
          (iVar3 = FUN_ram_42016992(acStack_e4,0xd2,0), iVar3 == 0)))))) &&
       ((iVar3 = FUN_ram_42016992(acStack_e4,0xd2,0xff), iVar3 == 0 &&
        (((('\0' < acStack_12[0] && ((byte)(acStack_288[0] - 1U) < 0xfe)) &&
          ((byte)(acStack_1b6[0] - 1U) < 0xfe)) && ((byte)(acStack_e4[0] - 1U) < 0xfe)))))) {
      iVar3 = FUN_ram_42015cf0(acStack_288);
      uVar1 = iVar3 != 0;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

