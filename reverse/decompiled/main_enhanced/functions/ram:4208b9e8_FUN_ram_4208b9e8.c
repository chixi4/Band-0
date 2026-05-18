
bool FUN_ram_4208b9e8(uint param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = FUN_ram_42079406();
  uVar3 = FUN_ram_4208b912();
  if (uVar3 < param_1) {
    bVar1 = false;
  }
  else {
    uVar3 = FUN_ram_4208b96c(uVar2);
    bVar1 = uVar3 <= param_1;
  }
  return bVar1;
}

