
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42078f04(int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0xd4);
  if (iVar3 == 0) {
    FUN_ram_4207a038(1,0x4000,1,&DAT_ram_3c0fe5d8);
    return 0x101;
  }
  if (param_1 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe5f4,"easy pace.",0x19f);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined1 *)(param_1 + 0x17e) = 2;
  *(undefined1 *)(param_1 + 0x17f) = 0x20;
  *(undefined1 *)(param_1 + 0x180) = 0x21;
  if (param_3 == 4) {
    *(undefined1 *)(param_1 + 0x17d) = 1;
  }
  else if (param_3 == 1) {
    FUN_ram_4039c11e(iVar3,&DAT_ram_3c0fa5c4,0xd4);
    uVar2 = 0xf;
    goto LAB_ram_42078fd6;
  }
  if (param_2 == 2) {
    FUN_ram_4039c11e(iVar3,gp + -0x18c);
    uVar2 = 0xff0;
  }
  else {
    FUN_ram_4039c11e(iVar3,&DAT_ram_3c0fa698,0xd4);
    uVar2 = 0xfff;
  }
LAB_ram_42078fd6:
  if (*(uint *)(param_1 + 0x188) != 0) {
    uVar2 = uVar2 & *(uint *)(param_1 + 0x188);
  }
  *(undefined1 *)(param_1 + 0x13d) = 0;
  for (; uVar2 != 0; uVar2 = uVar2 & ~(1 << (uVar4 & 0x1f))) {
    uVar4 = (*(code *)&SUB_ram_400108ec)(uVar2);
    bVar1 = *(byte *)(param_1 + 0x13d);
    *(byte *)(param_1 + 0x13d) = bVar1 + 1;
    *(undefined1 *)(param_1 + (uint)bVar1 + 0x13e) =
         *(undefined1 *)((uVar4 + 1) * 0x10 + iVar3 + 0xe);
  }
  if (_DAT_ram_3fcc4018 == param_1) {
    DAT_ram_3fcc41d4 = 1;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar3);
  return 0;
}

