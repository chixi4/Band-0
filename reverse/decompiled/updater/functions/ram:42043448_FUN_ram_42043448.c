
bool FUN_ram_42043448(uint param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = FUN_ram_420339f8();
  uVar3 = FUN_ram_420433aa();
  if (uVar3 < param_1) {
    bVar1 = false;
  }
  else {
    uVar3 = FUN_ram_42043404(uVar2);
    bVar1 = uVar3 <= param_1;
  }
  return bVar1;
}

