
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201a85e(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4201605e();
  if (param_1 == 2) {
    if (iVar1 == 0) {
      uVar2 = 0x3c0ad128;
      _DAT_ram_3fcc50a0 = param_1;
    }
    else {
      uVar2 = 0x3c0ad134;
      _DAT_ram_3fcc50a0 = param_1;
    }
  }
  else {
    if (param_1 != 3) {
      if (param_1 == 1) {
        if (iVar1 == 0) {
          uVar2 = 0x3c0ad10c;
        }
        else {
          uVar2 = 0x3c0ad11c;
        }
        _DAT_ram_3fcc50a0 = param_1;
        FUN_ram_4039c61e(0x3fcbb20c,uVar2,0x30);
      }
      goto LAB_ram_4201a8a4;
    }
    _DAT_ram_3fcc50a0 = 1;
    if (iVar1 == 0) {
      uVar2 = 0x3c0ad140;
    }
    else {
      uVar2 = 0x3c0ad15c;
    }
  }
  FUN_ram_4039c61e(0x3fcbb20c,uVar2,0x30);
  *(undefined1 *)(gp + -0x78f) = 1;
LAB_ram_4201a8a4:
  *(undefined1 *)(gp + -0x78e) = 1;
  FUN_ram_42018dcc();
  return;
}

