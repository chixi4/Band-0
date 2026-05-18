
uint FUN_ram_420aff60(undefined4 param_1,code *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  do {
    iVar1 = param_3[2];
    iVar4 = param_3[1];
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      if ((1 < *(ushort *)(iVar1 + 0xc)) && (*(short *)(iVar1 + 0xe) != -1)) {
        uVar2 = (*param_2)(param_1,iVar1);
        uVar3 = uVar3 | uVar2;
      }
      iVar1 = iVar1 + 0x68;
    }
    param_3 = (int *)*param_3;
  } while (param_3 != (int *)0x0);
  return uVar3;
}

