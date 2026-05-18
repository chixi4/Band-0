
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201b994(void)

{
  int iVar1;
  int extraout_a4;
  undefined4 uVar2;
  
  (*(code *)(tp + 0x476U & 0xfffffffe))();
  if (extraout_a4 < 0x14) {
    *(undefined4 *)(gp + -0x784) = 0;
    _DAT_ram_3fcc50a4 = 2000;
  }
  else {
    iVar1 = FUN_ram_420166b8();
    uVar2 = 1;
    if (iVar1 != 0) {
      uVar2 = 2;
    }
    *(undefined4 *)(gp + -0x784) = uVar2;
  }
  FUN_ram_4201f0e4(1);
  FUN_ram_42018dcc();
  return;
}

