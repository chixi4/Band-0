
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4208c310(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  
  if (_DAT_ram_3fcc4014 == 0) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x218);
    if (iVar1 == 0) {
      return 0x101;
    }
    iVar4 = *(int *)(gp + -0xb4);
    *(undefined4 *)(iVar1 + 0x120) = 0;
    *(undefined4 *)(iVar1 + 0x98) = 0;
    DAT_ram_3fcc4264 = *(char *)(iVar4 + 0x9c);
    _DAT_ram_3fcc4014 = iVar1;
    *(char *)(iVar1 + 0x13c) = DAT_ram_3fcc4264;
    *(undefined2 *)(iVar1 + 0x20e) = *(undefined2 *)(iVar4 + 0x47a);
    uVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x3b8);
    *(undefined4 *)(iVar1 + 0xe8) = uVar2;
    uVar3 = FUN_ram_42079402();
    DAT_ram_3fcc425e = *(undefined1 *)(*(int *)(gp + -0xb4) + 0x9d);
    if (uVar3 == 1) {
      cVar5 = DAT_ram_3fcc4264;
      if (_DAT_ram_3fcc4018 == iVar1) {
        cVar5 = DAT_ram_3fcc4262;
      }
    }
    else {
      cVar5 = DAT_ram_3fcc4265;
      if (_DAT_ram_3fcc4018 == iVar1) {
        cVar5 = DAT_ram_3fcc4263;
      }
    }
    if (*(int *)(iVar1 + 0xe8) == 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar1);
      _DAT_ram_3fcc4014 = 0;
      return 0x101;
    }
    FUN_ram_4039c11e(*(int *)(iVar1 + 0xe8) + 4,"th.",6);
    FUN_ram_42079058(iVar1,uVar3 & 0xff,cVar5);
    **(int **)(iVar1 + 0xe8) = iVar1;
    if (cVar5 == '\x03') {
      FUN_ram_4207bade(iVar1);
    }
    thunk_FUN_ram_42092be0(0x4038bea0,0);
    thunk_FUN_ram_42092bac(0x42078ef0);
    FUN_ram_4208c1aa();
  }
  thunk_FUN_ram_42092dce(0,_DAT_ram_3fcc4014);
  return 0;
}

