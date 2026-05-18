
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204c03a(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(&DAT_ram_3fcb08fc + param_1 * 4);
  if (((uVar3 >> (param_3 & 0x1f) & 1) != 0) &&
     (iVar1 = FUN_ram_40399d6c(*(int *)(&DAT_ram_3fcdfd28 + param_3 * 4) + 0x1f,param_2,6),
     iVar1 == 0)) {
    uVar2 = ~(1 << (param_3 & 0x1f));
    *(uint *)(&DAT_ram_3fcb08fc + param_1 * 4) = uVar3 & uVar2;
    _DAT_ram_3fcb0908 = uVar2 & _DAT_ram_3fcb0908;
    return;
  }
  FUN_ram_42033fd8(6,0x800,2,&DAT_ram_3c080100);
  return;
}

