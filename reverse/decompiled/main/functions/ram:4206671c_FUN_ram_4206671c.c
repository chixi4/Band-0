
int FUN_ram_4206671c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar1 = -2;
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = *(undefined4 **)(param_1 + 0x310);
    uVar3 = puVar2[6];
    if (param_3 < (uint)puVar2[6]) {
      uVar3 = param_3;
    }
    iVar1 = 0;
    if ((uVar3 != 0) && (iVar1 = FUN_ram_420660d8(), -1 < iVar1)) {
      puVar2[6] = puVar2[6] - iVar1;
      uStack_18 = *(undefined4 *)*puVar2;
      iStack_14 = iVar1;
      FUN_ram_42064d46(5,&uStack_18);
    }
  }
  return iVar1;
}

