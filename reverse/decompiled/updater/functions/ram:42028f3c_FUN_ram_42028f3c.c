
undefined4 FUN_ram_42028f3c(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffffaf00;
  }
  if (param_2 == (uint *)0x0) {
    return 0xffffaf00;
  }
  uVar2 = *param_2;
  *param_1 = (int)param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar2 != 9) {
    if (9 < uVar2) {
      if ((uVar2 != 10) && (uVar2 != 0xb)) {
        return 0xffffaf00;
      }
      iVar1 = FUN_ram_4202939a(1,0xd8);
      param_1[1] = iVar1;
      if (iVar1 == 0) {
        return 0xffffae80;
      }
      FUN_ram_42029490();
      goto LAB_ram_42028f9a;
    }
    if (uVar2 == 5) {
      iVar1 = FUN_ram_4202939a(1,0x68);
      param_1[1] = iVar1;
      if (iVar1 == 0) {
        return 0xffffae80;
      }
      FUN_ram_4202a97a();
      goto LAB_ram_42028f9a;
    }
    if (uVar2 != 8) {
      if (uVar2 != 3) {
        return 0xffffaf00;
      }
      iVar1 = FUN_ram_4202939a(1,0x58);
      param_1[1] = iVar1;
      if (iVar1 == 0) {
        return 0xffffae80;
      }
      thunk_EXT_FUN_ram_40012be4();
      goto LAB_ram_42028f9a;
    }
  }
  iVar1 = FUN_ram_4202939a(1,0x74);
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    return 0xffffae80;
  }
  FUN_ram_4202aba8();
LAB_ram_42028f9a:
  if (param_3 != 0) {
    iVar1 = FUN_ram_4202939a(2,*(undefined1 *)((int)param_2 + 5));
    param_1[2] = iVar1;
    if (iVar1 == 0) {
      FUN_ram_42028e3e(param_1);
      return 0xffffae80;
    }
  }
  return 0;
}

