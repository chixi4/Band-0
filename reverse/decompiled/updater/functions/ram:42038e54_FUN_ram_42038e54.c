
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42038e54(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_420378f4();
  if (iVar1 == 0) {
    if ((_DAT_ram_3fcb3f74 == 0) ||
       (iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x124))(0x3c072b94,1,*(int *)(gp + -0x2b8) + 0x410)
       , iVar1 == 0)) {
      iVar1 = FUN_ram_42038b4c();
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      FUN_ram_42033fd8(1,0x102,2,0x3c07fa2c,iVar1);
    }
  }
  FUN_ram_42033fd8(1,1,1,0x3c07d284,iVar1);
  FUN_ram_42038df2();
  return iVar1;
}

