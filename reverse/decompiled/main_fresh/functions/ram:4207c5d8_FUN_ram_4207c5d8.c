
void FUN_ram_4207c5d8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint uStack_1c;
  uint uStack_18;
  uint auStack_14 [4];
  
  uStack_1c = (uint)*(ushort *)(param_1 + 0xc);
  uVar4 = (uint)*(ushort *)(param_1 + 0xe);
  uVar1 = (param_2 + 0x1000) - uStack_1c;
  uStack_18 = 0;
  auStack_14[0] = 0;
  uVar5 = uVar1 & 0xfff;
  if ((uVar4 <= uVar5) && ((uVar1 & 0x800) == 0)) {
    if ((uVar4 << 1 <= uVar5) && (*(short *)(param_1 + 8) != 0)) {
      bVar7 = false;
      uVar1 = 0;
      bVar6 = false;
      uVar5 = 0;
      for (uVar2 = 0; (int)uVar2 < (int)uVar4; uVar2 = uVar2 + 1) {
        if (*(int *)(*(int *)(param_1 + 0x18) + uVar2 * 4) != 0) {
          uVar3 = 1 << (uVar2 & 0x1f);
          if ((int)uVar2 < 0x20) {
            uVar5 = uVar5 | uVar3;
            bVar6 = true;
          }
          else {
            uVar1 = uVar1 | uVar3;
            bVar7 = true;
          }
        }
      }
      if (bVar7) {
        uStack_18 = uVar1;
      }
      if (bVar6) {
        auStack_14[0] = uVar5;
      }
    }
    FUN_ram_42096042(*(undefined1 *)(param_1 + 0x20),&uStack_1c,&uStack_18,auStack_14);
  }
  return;
}

