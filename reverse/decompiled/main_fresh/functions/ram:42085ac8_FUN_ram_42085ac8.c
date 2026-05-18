
undefined4 FUN_ram_42085ac8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_42085a58();
  if (iVar1 == 0) {
    FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fc904);
    uVar2 = 0;
  }
  else {
    FUN_ram_4208d7b6();
    FUN_ram_4208d908(0);
    FUN_ram_4208d87c(1,0,0,2);
    FUN_ram_4208d852();
    FUN_ram_4208d860(0);
    FUN_ram_4208d86e(0,0x78);
    iVar1 = FUN_ram_4208d622(0x10f,0,0x420783e0,&DAT_ram_3fcc4128);
    if (iVar1 == 0) {
      FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fc8e0,0);
      uVar2 = 0;
    }
    else {
      FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fc8c0,iVar1);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

