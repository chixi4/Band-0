
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42030312(void)

{
  int iVar1;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined1 auStack_27 [6];
  undefined1 auStack_21 [21];
  
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  (*(code *)&SUB_ram_40010488)(&uStack_28,0,0x17);
  FUN_ram_42036ba2(0,&iStack_34,0);
  if (iStack_34 != 0) {
    FUN_ram_4039c11e((int)&uStack_30 + 1,iStack_34,6);
  }
  uStack_30 = uStack_30 & 0xffffff00;
  if ((_DAT_ram_3fcb6ba8 == 0) &&
     (_DAT_ram_3fcb6ba8 = FUN_ram_403a5e02(1,0x24), _DAT_ram_3fcb6ba8 == 0)) {
    return;
  }
  FUN_ram_42034348();
  iVar1 = FUN_ram_4202cf7e(&uStack_30,&uStack_28);
  if (iVar1 == 0) {
    FUN_ram_4039c11e(_DAT_ram_3fcb6ba8 + 0x11,auStack_21,0x10);
  }
  else {
    iVar1 = FUN_ram_420337cc(_DAT_ram_3fcb6ba8 + 0x11,0x10);
    if (iVar1 == 0) {
      (*(code *)&SUB_ram_40010488)(&uStack_28,0,0x17);
      FUN_ram_4039c11e(auStack_21,_DAT_ram_3fcb6ba8 + 0x11,0x10);
      if (iStack_34 != 0) {
        FUN_ram_4039c11e(auStack_27,iStack_34,6);
      }
      FUN_ram_4202cf88(&uStack_28);
    }
  }
  return;
}

