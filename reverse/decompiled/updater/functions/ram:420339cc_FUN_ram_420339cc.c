
void FUN_ram_420339cc(undefined1 *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_ram_42033988(*param_1);
  bVar2 = bVar1 & 1;
  if ((bVar1 & 2) != 0) {
    bVar2 = 2;
  }
  param_1[1] = bVar2;
  return;
}

