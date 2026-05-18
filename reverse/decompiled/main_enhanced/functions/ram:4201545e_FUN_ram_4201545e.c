
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4201545e(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_ram_3fcc4f66 != '\0') {
    uVar1 = 0x102;
    if ((param_1 != 0) && ((param_2 != 0 || param_3 != 0) || param_4 != 0)) {
      FUN_ram_42015016(0x102);
      iVar2 = FUN_ram_403975e0(_DAT_ram_3fcc4f5c,10);
      uVar1 = 0x107;
      if (iVar2 == 1) {
        _DAT_ram_3fcc4f58 = 0;
        _DAT_ram_3fcb9606 = (undefined2)param_4;
        _DAT_ram_3fcb9608 = &sscratch;
        _DAT_ram_3fcb9600 = (undefined2)param_1;
        _DAT_ram_3fcb9602 = (undefined2)param_2;
        _DAT_ram_3fcb9604 = (undefined2)param_3;
        iVar2 = FUN_ram_40398e0e(0x42005328,0x3c0a86d8,0x600,0,5,&DAT_ram_3fcc4f60,0x7fffffff);
        FUN_ram_40397156(_DAT_ram_3fcc4f5c,0,0,0);
        uVar1 = 0x101;
        if (iVar2 == 1) {
          uVar1 = 0;
        }
      }
    }
    return uVar1;
  }
  return 0x103;
}

