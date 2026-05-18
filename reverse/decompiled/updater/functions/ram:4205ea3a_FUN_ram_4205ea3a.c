
int FUN_ram_4205ea3a(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_ram_40399d1a(1,0xac);
  if (iVar1 != 0) {
    FUN_ram_4202e7da();
    *(undefined4 *)(iVar1 + 8) = 1;
    uVar2 = FUN_ram_4205e9fa(param_1);
    iVar3 = FUN_ram_42030f1a(iVar1 + 0xc,uVar2);
    if ((iVar3 == 0) &&
       (iVar3 = FUN_ram_4202e72a(iVar1 + 0xc,iVar1 + 0x6c,iVar1 + 0x74,0x42021a46,0), iVar3 == 0)) {
      return iVar1;
    }
    FUN_ram_4202e842(iVar1);
    thunk_FUN_ram_40390608(iVar1);
  }
  return 0;
}

