
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203e46a(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_ram_42033fd8(1,4,4,0x3c07b978,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
                   DAT_ram_3fcb4ee4);
  iVar3 = _DAT_ram_3fcb4ee0;
  iVar1 = 0;
  do {
    iVar4 = iVar1;
    iVar1 = iVar3;
    if (iVar1 == 0) {
      return;
    }
    iVar2 = FUN_ram_40399d6c(param_1,iVar1,6);
    iVar3 = *(int *)(iVar1 + 8);
  } while (iVar2 != 0);
  if (iVar4 != 0) {
    *(int *)(iVar4 + 8) = iVar3;
    iVar3 = _DAT_ram_3fcb4ee0;
  }
  _DAT_ram_3fcb4ee0 = iVar3;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar1);
  DAT_ram_3fcb4ee4 = DAT_ram_3fcb4ee4 + -1;
  return;
}

