
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42079380(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar2 = (uint)*(byte *)(param_2 + 3);
    if (uVar2 != DAT_ram_3fcb537b) {
      FUN_ram_42033fd8(6,0x1000,1,0x3c07ddd8,0x3c072f3c,0x817);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (((param_1 % uVar2 != 0) && (uVar2 % param_1 != 0)) ||
       ((uint)*(byte *)(param_2 + 2) % param_1 == 0)) {
      return param_1 * _DAT_ram_3fcb53a4;
    }
  }
  FUN_ram_42048288();
  iVar1 = _DAT_ram_3fcb53a4;
  if (param_2 != 0) {
    iVar1 = ((uint)*(byte *)(param_2 + 2) % param_1) * _DAT_ram_3fcb53a4;
  }
  return iVar1;
}

