
int FUN_ram_42022d86(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_420392e8();
  iVar1 = 0x3003;
  if (iVar2 == 0) {
    iVar1 = FUN_ram_4203d146(0,0);
    if (iVar1 == 0) {
      FUN_ram_4203d146(1,0);
    }
    FUN_ram_4205dd3e();
    iVar1 = FUN_ram_4203cc28();
    if (iVar1 == 0) {
      FUN_ram_4205d2dc();
      FUN_ram_4205d2e0();
      DAT_ram_3fcb6764 = 0;
    }
  }
  return iVar1;
}

