
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_4202bc34(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if ((_DAT_ram_3fcb6b8c == (undefined4 *)0x0) &&
     (_DAT_ram_3fcb6b8c = (undefined4 *)FUN_ram_403a5e02(1,0x50),
     _DAT_ram_3fcb6b8c == (undefined4 *)0x0)) {
    return;
  }
  puVar1 = _DAT_ram_3fcb6b8c;
  if (_DAT_ram_3fcb6b8c[0x12] == 0) {
    uVar3 = FUN_ram_403a5e02(1,0x38);
    puVar1[0x12] = uVar3;
    if (_DAT_ram_3fcb6b8c[0x12] == 0) {
      FUN_ram_403a5e1e();
      _DAT_ram_3fcb6b8c = (undefined4 *)0x0;
      return;
    }
  }
  if ((_DAT_ram_3fcb6b88 == 0) &&
     (_DAT_ram_3fcb6b88 = FUN_ram_403a5e02(1,8), _DAT_ram_3fcb6b88 == 0)) {
    _DAT_ram_3fcb6b88 = 0;
    return;
  }
  puVar2 = _DAT_ram_3fcb6b8c;
  puVar1 = _DAT_ram_3fcb6b8c + 0x12;
  _DAT_ram_3fcb6b8c[0x13] = 0;
  iVar4 = (*(code *)&SUB_ram_40011a60)
                    (puVar2 + 0xb,0xe,4,*puVar1,
                     "You do not need full certainty; get enough evidence.");
  puVar1 = _DAT_ram_3fcb6b8c;
  iVar5 = _DAT_ram_3fcb6b88;
  if (iVar4 == 0) {
    _DAT_ram_3fcb6b8c[10] = 0;
    *(undefined1 *)(iVar5 + 1) = 0;
    FUN_ram_403a67ea(puVar1 + 1,0x4201b7a0,0);
    FUN_ram_403a67ea(_DAT_ram_3fcb6b8c + 2,0x4201baac,0);
    FUN_ram_403a67ea(_DAT_ram_3fcb6b8c + 3,0x4201b6f0,0);
    FUN_ram_403a67ea(_DAT_ram_3fcb6b8c + 4,0x4201bc10,0);
    FUN_ram_4203369c();
    iVar5 = FUN_ram_42036816();
    if ((((iVar5 == 0) && (iVar5 = FUN_ram_42030888(), iVar5 == 0)) &&
        (iVar5 = FUN_ram_4202fdd4(), iVar5 == 0)) &&
       (((iVar5 = FUN_ram_4202c82c(), iVar5 == 0 && (iVar5 = FUN_ram_4202aec2(), iVar5 == 0)) &&
        ((iVar5 = FUN_ram_4202cc7c(), iVar5 == 0 && (iVar5 = FUN_ram_42032ae8(), iVar5 == 0)))))) {
      FUN_ram_42036f6a();
      FUN_ram_4202c4d6(_DAT_ram_3fcb6b8c + 6,0x4201b83a,0);
      iVar5 = (**(code **)(_DAT_ram_3fcb6a44 + 0x3c))(_DAT_ram_3fcb6b8c + 9);
      if (iVar5 == 0) {
        uVar3 = FUN_ram_403a687a();
        *_DAT_ram_3fcb6b8c = uVar3;
        uVar3 = FUN_ram_403a687a();
        FUN_ram_403a67de(uVar3,_DAT_ram_3fcb6b8c + 3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

