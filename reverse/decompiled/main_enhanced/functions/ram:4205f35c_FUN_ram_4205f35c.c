
undefined4 FUN_ram_4205f35c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = 0x103;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
    FUN_ram_42053552(uVar2,iVar3,iVar3 + 4,iVar3 + 8);
    FUN_ram_42053758(uVar2);
    FUN_ram_4205386a(uVar2);
    if (((*(uint *)(iVar1 + 0x54) & 1) == 0) || (*(int *)(iVar1 + 0x3c) == 2)) {
      FUN_ram_4205eeb4(iVar1,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

