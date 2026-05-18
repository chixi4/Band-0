
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42036816(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (_DAT_ram_3fcb6be0 == 0) {
    _DAT_ram_3fcb6be0 = FUN_ram_403a5e02(1,0x20);
    if (_DAT_ram_3fcb6be0 != 0) goto LAB_ram_4203683e;
LAB_ram_42036868:
    uVar1 = 6;
  }
  else {
LAB_ram_4203683e:
    iVar2 = _DAT_ram_3fcb6be0;
    if (*(int *)(_DAT_ram_3fcb6be0 + 0x1c) == 0) {
      uVar1 = FUN_ram_403a5e02(1,0x88);
      *(undefined4 *)(iVar2 + 0x1c) = uVar1;
      if (*(int *)(_DAT_ram_3fcb6be0 + 0x1c) == 0) {
        FUN_ram_403a5e1e(_DAT_ram_3fcb6be0);
        _DAT_ram_3fcb6be0 = 0;
        goto LAB_ram_42036868;
      }
    }
    iVar2 = _DAT_ram_3fcb6be0;
    (*(code *)&SUB_ram_40010488)(_DAT_ram_3fcb6be0,0,0x1c);
    iVar2 = (*(code *)&SUB_ram_40011a60)(iVar2,1,0x88,*(undefined4 *)(iVar2 + 0x1c),".");
    if (iVar2 == 0) {
      _DAT_ram_3fcb6be4 = 0;
      uVar1 = 0;
    }
    else {
      FUN_ram_403a5e1e(*(undefined4 *)(_DAT_ram_3fcb6be0 + 0x1c));
      *(undefined4 *)(_DAT_ram_3fcb6be0 + 0x1c) = 0;
      FUN_ram_403a5e1e();
      _DAT_ram_3fcb6be0 = 0;
      (*(code *)&SUB_ram_40010488)(0,0,0x1c);
      uVar1 = 0xb;
    }
  }
  return uVar1;
}

