
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42040cfa(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_ram_3fcb4f84;
  if ((_DAT_ram_3fcb4f84 != 0) && ((*(byte *)(_DAT_ram_3fcb4f84 + 0x129) & 2) != 0)) {
    uVar2 = (uint)DAT_ram_3fcb5108;
    FUN_ram_42022e8a();
    FUN_ram_42033fd8(1,4,4,0x3c07c528,*(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128),0);
    *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 0;
    *(byte *)(iVar1 + 0x129) = *(byte *)(iVar1 + 0x129) & 0xfd;
    FUN_ram_4203af2c(0);
    FUN_ram_42049be4(0,1,0,0,(int)uVar2 >> 4 & 1,DAT_ram_3fcb5104);
    FUN_ram_4204ddec();
    FUN_ram_4204637e();
    if (_DAT_ram_3fcb50e8 != 0) {
      (**(code **)(_DAT_ram_3fcb50e8 + 4))();
    }
    FUN_ram_4203bea0(3,0,0);
  }
  return 0;
}

