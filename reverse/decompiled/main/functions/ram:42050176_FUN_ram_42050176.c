
void FUN_ram_42050176(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    for (uVar1 = 0x34; (int)uVar1 < param_1; uVar1 = uVar1 + 1) {
      if ((((int)uVar1 < 0x40) &&
          (uVar4 = 1 << (uVar1 & 0x1f), (uVar4 & *(uint *)(param_2 + 4)) != 0)) &&
         ((uVar4 & *(uint *)(param_3 + 4)) == 0)) {
        uVar2 = FUN_ram_4205c96c();
        iVar3 = FUN_ram_4205012a(uVar1);
        if (iVar3 != 0) {
          *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | uVar4;
        }
        FUN_ram_4205c996(uVar2);
      }
    }
    return;
  }
  return;
}

