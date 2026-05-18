
undefined4 FUN_ram_4205eab2(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_1 + 0x48) >> 3;
  uVar5 = uVar4 << 1;
  if (param_2 != 0) {
    uVar5 = uVar4;
  }
  iVar2 = FUN_ram_40399d1a(1,uVar5);
  uVar1 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_ram_42024c5e(param_1 + 0x74,iVar2,uVar4);
    uVar1 = 0;
    if (iVar3 == 0) {
      uVar1 = FUN_ram_42065852(iVar2,0x20);
    }
    thunk_FUN_ram_40390608(iVar2);
  }
  return uVar1;
}

