
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203dc98(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(gp + -0x2b8);
  FUN_ram_42033fd8(1,5,4,0x3c07b5c4,param_1);
  FUN_ram_4204512e(1);
  DAT_ram_3fcb4f14 = 0;
  DAT_ram_3fcb3fe0 = 0;
  DAT_ram_3fcb3fe1 = 0;
  DAT_ram_3fcb4f15 = 0;
  if ((DAT_ram_3fcb5148 == '\x01') && (**(char **)(gp + -0x2b8) == '\x01')) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb4f20);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb4f20);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(0x3fcb4f20,0x4202d58a,0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(0x3fcb4f20,0x32,1);
  }
  FUN_ram_42045078();
  uVar1 = 0x50f;
  if (param_1 != 0) {
    FUN_ram_420455aa(param_1);
    uVar1 = 0x8400;
  }
  if ((_DAT_ram_3fcb3fec & 1) == 0) {
    iVar3 = iVar4 + 8;
    FUN_ram_420450a2(0,iVar3,*(undefined1 *)(iVar4 + 4),1);
    if ((uVar1 & 0x8000) == 0) {
      iVar4 = FUN_ram_42043448(*(undefined1 *)(*(int *)(gp + -0x2b8) + 0x90));
      if (iVar4 == 0) {
        uVar2 = FUN_ram_42045154(iVar3);
      }
      else {
        uVar2 = (uint)*(byte *)(*(int *)(gp + -0x2b8) + 0x90);
      }
      iVar4 = FUN_ram_42043448(uVar2);
      if ((iVar4 == 0) && ((*(uint *)(*(int *)(gp + -0x2b8) + 0x518) & 1) != 0)) {
        uVar2 = FUN_ram_42043404(1,uVar2);
      }
      FUN_ram_420454d6(0x20000,uVar2);
    }
  }
  else {
    uVar1 = uVar1 | 0xc000;
  }
  FUN_ram_42033fd8(1,4,4,0x3c07b5d4,*(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128),1);
  iVar4 = _DAT_ram_3fcb4f84;
  *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 1;
  *(uint *)(iVar4 + 0xa4) = *(uint *)(iVar4 + 0xa4) & 0xffffffbf;
  _DAT_ram_3fcb3fe8 = _DAT_ram_3fcb3fe8 | 0x10;
  FUN_ram_42045008();
  FUN_ram_42045086(0);
  FUN_ram_42044e74(uVar1,2,0x4202ef0a,0);
  return 0;
}

