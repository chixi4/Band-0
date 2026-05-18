
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42014b52(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  
  FUN_ram_420af816(0x3c0a8644,0x3c0a863c,1);
  FUN_ram_420b098c();
  iVar2 = FUN_ram_42015bbe();
  if (iVar2 != 0) {
LAB_ram_42014b8e:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iStack_a8 = 0;
  uStack_a4 = 0;
  (*(code *)&SUB_ram_40010488)(&uStack_a0,0,0x60);
  iVar2 = FUN_ram_420179b4(&iStack_a8,&uStack_a4,&uStack_a0,0x60);
  if ((iVar2 == 0) && (iStack_a8 != 0)) {
    _DAT_ram_3fcc4f44 = iStack_a8;
    _DAT_ram_3fcc4f40 = uStack_a4;
    FUN_ram_4039c61e(&DAT_ram_3fcb95a0,&uStack_a0,0x5f);
    DAT_ram_3fcb95ff = 0;
  }
  iVar2 = FUN_ram_42015c0a();
  if ((iVar2 != 0) && (iVar3 = FUN_ram_42016b02(), iVar3 != 0)) {
    FUN_ram_42016b34();
    return;
  }
  iVar3 = FUN_ram_4201fe58();
  if (iVar3 != 0) goto LAB_ram_42014b8e;
  FUN_ram_4201746c();
  iVar3 = FUN_ram_4201566c();
  if (iVar3 != 0) goto LAB_ram_42014b8e;
  uStack_a0 = 0;
  iVar3 = FUN_ram_420156d8(&uStack_a0);
  if (iVar3 == 0) {
    FUN_ram_4201579a();
  }
  FUN_ram_40398498(10);
  FUN_ram_42015806();
  if ((iVar2 != 0) && (iVar3 = FUN_ram_42016b18(), iVar3 != 0)) {
    FUN_ram_42016c78();
    return;
  }
  iVar3 = FUN_ram_42015f7c();
  if (iVar3 == 1) {
    FUN_ram_4201801c();
    return;
  }
  if (iVar3 == 2) {
    FUN_ram_420185f4();
    return;
  }
  FUN_ram_4201fc6a();
  FUN_ram_4039c11e(&uStack_a0,"When ignored, look at the facts first.",0x18);
  FUN_ram_42048298(&uStack_a0);
  iVar3 = FUN_ram_42014f3a();
  if ((iVar3 != 0) || (iVar3 = FUN_ram_42015976(), iVar3 != 0)) goto LAB_ram_42014b8e;
  FUN_ram_4201553e();
  iVar3 = FUN_ram_4201edd8();
  if (iVar3 != 0) goto LAB_ram_42014b8e;
  if (_DAT_ram_3fcc4f44 == 0) goto LAB_ram_42014d12;
  iVar3 = FUN_ram_4201ee6a();
  if (iVar3 == 0) {
    FUN_ram_42017a70();
    goto LAB_ram_42014d12;
  }
  FUN_ram_4201eeb2(0);
  iVar8 = FUN_ram_4201605e();
  iVar3 = _DAT_ram_3fcc4f44;
  if (_DAT_ram_3fcc4f44 == 2) {
    if (iVar8 == 0) {
      uVar5 = 0x3c0a85fc;
    }
    else {
      uVar5 = 0x3c0a860c;
    }
  }
  else if (iVar8 == 0) {
    uVar5 = 0x3c0a861c;
  }
  else {
    uVar5 = 0x3c0a862c;
  }
  FUN_ram_4201f3fe(0x3c,uVar5,3);
  if (iVar3 == 2) {
    iVar3 = FUN_ram_42010096();
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0x10) != '\0')) {
      (*(code *)&SUB_ram_400106ac)(&uStack_a0,0x28,0x3c0a8648,iVar3 + 0x10);
      puVar6 = &uStack_a0;
LAB_ram_42014e6c:
      FUN_ram_4201f3fe(100,puVar6,3);
    }
  }
  else if (DAT_ram_3fcb95a0 != '\0') {
    puVar6 = (undefined4 *)&DAT_ram_3fcb95a0;
    goto LAB_ram_42014e6c;
  }
  (*(code *)&SUB_ram_400106ac)(&uStack_a0,0x20,0x3c0a864c,_DAT_ram_3fcc4f40);
  FUN_ram_4201f3fe(0x8c,&uStack_a0,3);
  FUN_ram_4201eee8();
  FUN_ram_40398498(200);
  FUN_ram_42017a70();
  _DAT_ram_3fcc4f44 = 0;
LAB_ram_42014d12:
  FUN_ram_42018c3c("stakes and second thoughts today.",0xc,-iVar2);
  FUN_ram_40398e0e(0x42004a6c,0x3c0a8654,0x800,0,10,0,0x7fffffff);
  FUN_ram_42014a46();
  iVar2 = FUN_ram_403980d6();
  do {
    iVar3 = FUN_ram_403980d6();
    FUN_ram_42018d86();
    if (0x13 < (uint)(iVar3 - iVar2)) {
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_9c = 200;
      FUN_ram_42018d20(&uStack_a0);
      iVar2 = iVar3;
    }
    FUN_ram_42018dd8();
    iVar3 = FUN_ram_42018c98();
    iVar8 = 1;
    if ((iVar3 != 8) && (iVar8 = 0, iVar3 == 7)) {
      iVar8 = FUN_ram_420172b6();
    }
    uVar9 = FUN_ram_403919ae();
    iVar1 = _DAT_ram_3fcc4f3c;
    iVar3 = _DAT_ram_3fcc4f38;
    iVar4 = FUN_ram_420162da();
    if (iVar8 == 0) {
      iVar8 = (int)((ulonglong)((longlong)iVar4 * 1000000) >> 0x20);
      uVar7 = (uint)uVar9 - iVar3;
      iVar3 = ((int)((ulonglong)uVar9 >> 0x20) - iVar1) - (uint)((uint)uVar9 < uVar7);
      if ((iVar8 <= iVar3) && ((iVar8 != iVar3 || ((uint)(iVar4 * 1000000) <= uVar7)))) {
        FUN_ram_4201f046();
        FUN_ram_42017154();
        iVar3 = FUN_ram_4201fce8();
        if (iVar3 != 0) {
          FUN_ram_42014a46();
        }
      }
    }
    iVar3 = FUN_ram_42018c98();
    if (iVar3 == 8) {
      FUN_ram_4201c0f6();
    }
    FUN_ram_40398498(2);
  } while( true );
}

