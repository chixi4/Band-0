
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203af2c(void)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined1 auStack_3c [32];
  undefined1 uStack_1c;
  undefined1 auStack_1b [6];
  undefined1 uStack_15;
  undefined1 uStack_14;
  
  DAT_ram_3fcb5119 = 2;
  if ((**(byte **)(gp + -0x2b8) & 0xfd) == 1) {
    FUN_ram_42033fd8(1,4,4,0x3c07b4d0);
    pbVar2 = *(byte **)(gp + -0x2b8);
    if ((*pbVar2 & 0xfd) == 1) {
      FUN_ram_42031c42(0);
      if ((*(int *)(_DAT_ram_3fcb4f84 + 0x98) == 0) &&
         (*(char *)(_DAT_ram_3fcb4f84 + 0x128) != '\0')) {
        FUN_ram_42033fd8(1,4,4,0x3c07b3a0,*(char *)(_DAT_ram_3fcb4f84 + 0x128),0);
        *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 0;
        uStack_14 = 0x80;
        (*(code *)&SUB_ram_40010488)(auStack_1b,0,6);
        FUN_ram_40399daa(auStack_3c,pbVar2 + 8,0x20);
        uStack_1c = (undefined1)*(undefined4 *)(pbVar2 + 4);
        uStack_15 = 0x24;
        FUN_ram_42033fd8(1,5,4,0x3c07b3b8,0x24);
        FUN_ram_4203bea0(5,auStack_3c,0x29);
      }
      FUN_ram_4203a2a8();
      FUN_ram_42033fd8(1,0xc,4,0x3c07b3f4,8);
      FUN_ram_420392fa(8);
    }
    uVar1 = 0;
  }
  else {
    FUN_ram_42033fd8(1,3,4,0x3c07b4b4);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

