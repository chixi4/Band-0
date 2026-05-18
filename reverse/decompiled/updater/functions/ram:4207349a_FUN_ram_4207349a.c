
void FUN_ram_4207349a(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_ram_42012d82();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_ram_42073b0e(4);
    *puVar2 = 0x3c07a894;
    FUN_ram_42073b1a(puVar2,0x3c07a848,0x42063452);
  }
  return;
}

