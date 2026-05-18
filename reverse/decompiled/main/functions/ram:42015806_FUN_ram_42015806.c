
void FUN_ram_42015806(void)

{
  int iVar1;
  int iVar2;
  int iStack_2c;
  undefined1 auStack_28 [28];
  
  if (DAT_ram_3fcc4f67 == '\0') {
    return;
  }
  iVar1 = FUN_ram_420155d4(&iStack_2c);
  if (iVar1 != 0) {
    return;
  }
  if (iStack_2c < 0x96) {
    return;
  }
  if (0xb85 < iStack_2c << 1) {
    return;
  }
  iVar1 = thunk_FUN_ram_420204d8();
  iVar2 = thunk_FUN_ram_403904a6(5000);
  if (iVar2 == 0) {
    if (iVar1 != 0) goto LAB_ram_4201587e;
  }
  else {
    if (iVar1 != 0) goto LAB_ram_4201587e;
    iVar1 = FUN_ram_42021020(&DAT_ram_3c0c5a88,0x4fc,iVar2,auStack_28);
    if (iVar1 == 0) {
      thunk_FUN_ram_420205e8(iVar2);
    }
    thunk_FUN_ram_40390634(iVar2);
  }
  thunk_FUN_ram_42020360();
LAB_ram_4201587e:
  FUN_ram_420157c2();
  FUN_ram_4039c11e(auStack_28,&DAT_ram_3c0c5f88,0x18);
  FUN_ram_42048298(auStack_28);
  FUN_ram_420b4b76(2,0,0);
  FUN_ram_40398498(10);
  FUN_ram_40391640();
  return;
}

