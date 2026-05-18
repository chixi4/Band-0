
int FUN_ram_4205e586(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_ram_42024bb6(param_1 + 4);
    iVar2 = FUN_ram_40399d1a(1,0x18);
    if (iVar2 != 0) {
      FUN_ram_4202f918();
      iVar3 = FUN_ram_42024c0c(iVar2,param_2,iVar1);
      if (((iVar3 == 0) && (iVar1 = FUN_ram_42024c0c(iVar2 + 8,param_2 + iVar1,iVar1), iVar1 == 0))
         && (iVar1 = FUN_ram_42024a98(iVar2 + 0x10,1), iVar1 == 0)) {
        return iVar2;
      }
      FUN_ram_4202f9ba(iVar2);
      thunk_FUN_ram_40390608(iVar2);
    }
  }
  return 0;
}

