
void FUN_ram_420734ca(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_ram_42012da8();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_ram_42073b0e(4);
    *puVar2 = 0x3c07a8a8;
    FUN_ram_42073b1a(puVar2,0x3c07a880,&LAB_ram_42063476);
  }
  return;
}

