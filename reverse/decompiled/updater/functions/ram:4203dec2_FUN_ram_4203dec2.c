
undefined4 FUN_ram_4203dec2(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4203de52();
  if (iVar1 == 0) {
    FUN_ram_42033fd8(1,8,4,0x3c07b5a4);
    uVar2 = 0;
  }
  else {
    FUN_ram_42045008();
    FUN_ram_4204512e(0);
    FUN_ram_420450a2(1,0,0,2);
    FUN_ram_42045078();
    FUN_ram_42045086(0);
    FUN_ram_42045094(0,0x78);
    iVar1 = FUN_ram_42044e74(0x10f,0,0x4202fe78,&DAT_ram_3fcb5098);
    if (iVar1 == 0) {
      FUN_ram_42033fd8(1,8,4,0x3c07b580,0);
      uVar2 = 0;
    }
    else {
      FUN_ram_42033fd8(1,8,4,0x3c07b560,iVar1);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

