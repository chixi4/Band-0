
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4208589e(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(gp + -0xb4);
  FUN_ram_4207a038(1,5,4,&DAT_ram_3c0fc9c4,param_1);
  FUN_ram_4208d908(1);
  DAT_ram_3fcc3fa4 = 0;
  DAT_ram_3fcc3074 = 0;
  DAT_ram_3fcc3075 = 0;
  DAT_ram_3fcc3fa5 = 0;
  if ((DAT_ram_3fcc41d8 == '\x01') && (**(char **)(gp + -0xb4) == '\x01')) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc3fb0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc3fb0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(0x3fcc3fb0,0x42075190,0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(0x3fcc3fb0,0x32,1);
  }
  FUN_ram_4208d852();
  uVar1 = 0x50f;
  if (param_1 != 0) {
    FUN_ram_4208defa(param_1);
    uVar1 = 0x8400;
  }
  if ((_DAT_ram_3fcc307c & 1) == 0) {
    iVar3 = iVar4 + 8;
    FUN_ram_4208d87c(0,iVar3,*(undefined1 *)(iVar4 + 4),1);
    if ((uVar1 & 0x8000) == 0) {
      iVar4 = FUN_ram_4208b9e8(*(undefined1 *)(*(int *)(gp + -0xb4) + 0x90));
      if (iVar4 == 0) {
        uVar2 = FUN_ram_4208d92e(iVar3);
      }
      else {
        uVar2 = (uint)*(byte *)(*(int *)(gp + -0xb4) + 0x90);
      }
      iVar4 = FUN_ram_4208b9e8(uVar2);
      if ((iVar4 == 0) && ((*(uint *)(*(int *)(gp + -0xb4) + 0x518) & 1) != 0)) {
        uVar2 = FUN_ram_4208b96c(1,uVar2);
      }
      FUN_ram_4208dcb0(0x20000,uVar2);
    }
  }
  else {
    uVar1 = uVar1 | 0xc000;
  }
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fca44,*(undefined1 *)(_DAT_ram_3fcc4014 + 0x128),1);
  iVar4 = _DAT_ram_3fcc4014;
  *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 1;
  *(uint *)(iVar4 + 0xa4) = *(uint *)(iVar4 + 0xa4) & 0xffffffbf;
  _DAT_ram_3fcc3078 = _DAT_ram_3fcc3078 | 0x10;
  FUN_ram_4208d7b6();
  FUN_ram_4208d860(0);
  FUN_ram_4208d622(uVar1,2,0x42076e00,0);
  return 0;
}

