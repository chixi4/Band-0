
void FUN_ram_4204a81e(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_ram_420b54ec(6);
  uVar2 = FUN_ram_403989ea();
  iVar3 = FUN_ram_40399046(uVar2,&uStack_1c);
  uVar1 = 1;
  if (iVar3 != 1) {
    uVar1 = FUN_ram_4204a80a();
  }
  DAT_ram_3fcc4e00 = uVar1;
  DAT_ram_3fcc5204 = DAT_ram_3fcc4e00;
  FUN_ram_4039042e(uStack_18);
  return;
}

