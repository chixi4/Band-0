
undefined4 FUN_ram_4201a91c(uint param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int aiStack_14 [2];
  
  aiStack_14[0] = 0;
  iVar1 = FUN_ram_4201745c(aiStack_14);
  puVar2 = (undefined4 *)(iVar1 + (param_1 & -(uint)((int)param_1 < aiStack_14[0])) * 0x10);
  if (param_2 == 0) {
    uVar3 = *puVar2;
  }
  else {
    uVar3 = puVar2[1];
  }
  return uVar3;
}

