
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42081d04(void)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined1 auStack_3c [32];
  undefined1 uStack_1c;
  undefined1 auStack_1b [6];
  undefined1 uStack_15;
  undefined1 uStack_14;
  
  DAT_ram_3fcc41a9 = 2;
  if ((**(byte **)(gp + -0xb4) & 0xfd) == 1) {
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc820);
    pbVar2 = *(byte **)(gp + -0xb4);
    if ((*pbVar2 & 0xfd) == 1) {
      FUN_ram_42073af8(0);
      if ((*(int *)(_DAT_ram_3fcc4014 + 0x98) == 0) &&
         (*(char *)(_DAT_ram_3fcc4014 + 0x128) != '\0')) {
        FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc6f0,*(char *)(_DAT_ram_3fcc4014 + 0x128),0);
        *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 0;
        uStack_14 = 0x80;
        (*(code *)&SUB_ram_40010488)(auStack_1b,0,6);
        FUN_ram_4039c11e(auStack_3c,pbVar2 + 8,0x20);
        uStack_1c = (undefined1)*(undefined4 *)(pbVar2 + 4);
        uStack_15 = 0x24;
        FUN_ram_4207a038(1,5,4,&DAT_ram_3c0fc708,0x24);
        FUN_ram_4208344a(5,auStack_3c,0x29);
      }
      FUN_ram_42080762();
      FUN_ram_4207a038(1,0xc,4,&DAT_ram_3c0fc744,8);
      FUN_ram_4207f554(8);
    }
    uVar1 = 0;
  }
  else {
    FUN_ram_4207a038(1,3,4,&DAT_ram_3c0fc804);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

