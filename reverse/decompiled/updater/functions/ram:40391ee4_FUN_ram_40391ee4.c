
bool FUN_ram_40391ee4(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = FUN_ram_40391bb2(uVar2);
  uVar4 = *(uint *)(param_1 + 8) & uVar3;
  bVar1 = (uVar4 & 0x3ff) != 0;
  if (bVar1) {
    FUN_ram_40399ffa(uVar2,(uVar3 & 0x3ff) << 10,5);
    FUN_ram_40399fcc(uVar2,~(uVar3 & 0x3ff),5);
  }
  return bVar1 || (uVar4 & 0xffc00) != 0;
}

