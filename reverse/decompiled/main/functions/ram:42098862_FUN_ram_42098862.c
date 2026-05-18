
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42098862(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DAT_ram_3fcc53c4 = gp + -0x3d8;
  puVar2 = (undefined4 *)FUN_ram_4039c08e(1,0x6c);
  iVar1 = 0x101;
  _DAT_ram_3fcc53c0 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x42088502;
    puVar2[1] = 0x42088550;
    puVar2[5] = 0x4208dfa8;
    puVar2[2] = 0x420887ea;
    puVar2[3] = 0x42088730;
    puVar2[4] = 0x42088686;
    puVar2[6] = 0x4208eb8a;
    puVar2[9] = 0x420885d2;
    puVar2[10] = 0x42088fc6;
    puVar2[0xb] = 0x4208852a;
    puVar2[0xc] = 0x42088732;
    puVar2[0xd] = 0x420884ea;
    puVar2[7] = 0x42088a76;
    puVar2[8] = 0x42088d9c;
    puVar2[0xe] = 0x42050998;
    puVar2[0xf] = 0x42088580;
    puVar2[0x11] = 0x4208e996;
    puVar2[0x16] = 0x42088528;
    puVar2[0x19] = 0x4208eba2;
    puVar2[0x1a] = 0x42088572;
    puVar2[0x10] = 0;
    puVar2[0x14] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    FUN_ram_420990ce();
    iVar1 = FUN_ram_42098a16(_DAT_ram_3fcc53c0);
    if (iVar1 == 0) {
      FUN_ram_4207f4bc(_DAT_ram_3fcc53c0);
    }
  }
  return iVar1;
}

