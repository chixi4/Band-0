
int FUN_ram_42072ca0(uint *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uStack_14;
  
  if (0 < param_2 - (int)*param_1) {
    bVar1 = *(byte *)*param_1;
    iVar2 = FUN_ram_4202bb54(param_1,param_2,&uStack_14);
    if (iVar2 == 0) {
      uVar3 = *param_1;
      *param_3 = (uint)bVar1;
      param_3[2] = uVar3;
      param_3[1] = uStack_14;
      *param_1 = uVar3 + uStack_14;
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -0x2480;
    }
    return iVar2;
  }
  return -0x24e0;
}

