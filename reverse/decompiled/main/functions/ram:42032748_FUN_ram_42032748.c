
void FUN_ram_42032748(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_4c [7];
  undefined1 uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [8];
  undefined2 uStack_34;
  char cStack_32;
  undefined1 auStack_30 [8];
  undefined2 uStack_28;
  byte bStack_26;
  byte bStack_24;
  
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_420365de(param_1);
  FUN_ram_4039c11e(auStack_3c,iVar2 + 8,7);
  auStack_3c[0] = thunk_FUN_ram_420315b6(*(undefined1 *)(iVar2 + 8));
  uStack_34 = 0;
  cStack_32 = '\0';
  thunk_FUN_ram_4202b7f6();
  do {
    iVar2 = FUN_ram_4202cf00(auStack_3c,auStack_30);
    if (iVar2 != 0) {
LAB_ram_420327b0:
      uStack_44 = 0;
      uStack_40 = 0;
      thunk_FUN_ram_4202b7dc();
      iVar2 = FUN_ram_420365de(param_1);
      if (iVar2 != 0) {
        FUN_ram_4039c11e(&uStack_44,iVar2 + 8,7);
        thunk_FUN_ram_4202b7f6();
        iVar2 = FUN_ram_4202cf1a(&uStack_44,auStack_4c);
        if (iVar2 != 0) {
          return;
        }
        thunk_FUN_ram_4202b7dc();
        iVar2 = FUN_ram_420365de(param_1);
        if (iVar2 != 0) {
          *(undefined1 *)(iVar2 + 0x66) = uStack_45;
        }
      }
      thunk_FUN_ram_4202b7f6();
      return;
    }
    thunk_FUN_ram_4202b7dc();
    iVar2 = FUN_ram_420365de(param_1);
    if (iVar2 == 0) {
      thunk_FUN_ram_4202b7f6();
      goto LAB_ram_420327b0;
    }
    iVar1 = *(int *)(iVar2 + 0x5c);
    iVar3 = FUN_ram_42031600(iVar1,uStack_28);
    if (((iVar3 == -1) || (iVar1 = iVar1 + iVar3 * 4, iVar1 == 0)) ||
       (*(byte *)(iVar1 + 2) = bStack_26, (bStack_24 & 1) == 0)) {
      iVar2 = 0;
    }
    else {
      *(byte *)(iVar1 + 2) = bStack_26 | 0x80;
      iVar2 = FUN_ram_42031628(iVar2);
    }
    thunk_FUN_ram_4202b7f6();
    FUN_ram_420319f2(param_1,uStack_28,3,0,bStack_26);
    if (iVar2 == 0x1b) {
      iVar2 = FUN_ram_4202ca12(param_1,uStack_28);
      if (iVar2 == 0) {
        bStack_24 = bStack_24 & 0xfe;
        FUN_ram_4202cf0a(auStack_30);
      }
    }
    else if (iVar2 == 0x1d) {
      FUN_ram_4202cb96(param_1,uStack_28);
    }
    cStack_32 = cStack_32 + '\x01';
  } while( true );
}

