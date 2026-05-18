
bool FUN_ram_4202805a(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 auStack_11 [9];
  
  FUN_ram_42027010(param_1,auStack_11);
  uVar2 = FUN_ram_42028026(auStack_11[0]);
  if (uVar2 == *(byte *)(param_1 + 0xd)) {
    bVar1 = (*(byte *)(param_1 + 8) & 6) == 6;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

