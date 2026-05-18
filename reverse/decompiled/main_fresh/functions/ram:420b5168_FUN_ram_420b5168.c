
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420b5168(void)

{
  uint uVar1;
  int iVar2;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [20];
  
  do {
    do {
    } while ((_DAT_ram_6000001c >> 0x10 & 0x3ff) != 0);
  } while ((_DAT_ram_6000006c >> 4 & 0xf) != 0);
  iVar2 = FUN_ram_403948d2(0xb,1);
  if (iVar2 == 0) goto LAB_ram_420b51a0;
  do {
    FUN_ram_4039bf1e();
LAB_ram_420b51a0:
    _DAT_ram_60000078 = _DAT_ram_60000078 | 0x300000;
    iVar2 = FUN_ram_420b3d0c(0xb,0,&uStack_34);
    uVar1 = uStack_34;
    if (iVar2 != 0) goto LAB_ram_420b51b6;
    iVar2 = (*(code *)&SUB_ram_400109f0)
                      (uStack_34 + 0x1c1e3dff,uStack_34 + 0x1c1e3dff < uStack_34,0x1c1e3e00,0);
    if (iVar2 - 1U < 0x100) {
      uVar1 = (uVar1 << 4) / (uint)(iVar2 * 0x1c200);
      _DAT_ram_60000014 =
           _DAT_ram_60000014 & 0xff0ff000 | (uVar1 & 0xffff) >> 4 | (uVar1 & 0xf) << 0x14;
      _DAT_ram_60000078 = (iVar2 - 1U & 0xff) << 0xc | _DAT_ram_60000078 & 0xfff00fff;
      uStack_30 = _DAT_ram_60000078;
    }
    iVar2 = FUN_ram_42048b76(0,0,&DAT_ram_3c0c2a38,&DAT_ram_3fcc51b4);
  } while ((iVar2 != 0) || (iVar2 = FUN_ram_40391b3c(_DAT_ram_3fcc51b4), iVar2 != 0));
  iVar2 = FUN_ram_40394e84(0x78,auStack_20);
  if (iVar2 != 0) {
    iVar2 = 0x3fcc1cd0;
    do {
      iVar2 = FUN_ram_4039c11e(iVar2,auStack_20,0x10);
      iVar2 = iVar2 + 0x10;
    } while (iVar2 != 0x3fcc1d10);
    iStack_28 = FUN_ram_4039097c();
    uStack_2c = 0x78;
    iStack_28 = iStack_28 / 1000000;
    uStack_24 = 0;
    FUN_ram_420b4f3c(&uStack_2c);
    return;
  }
LAB_ram_420b51b6:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

