
int FUN_ram_4206ea96(undefined4 *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar2 = FUN_ram_4206e970();
  if (iVar2 == 0) {
    iVar3 = *param_3;
    if (iVar3 == 0) {
      iVar2 = -0x60;
    }
    else {
      *param_3 = iVar3 + -1;
      pbVar4 = (byte *)*param_1;
      bVar1 = *pbVar4;
      *(byte *)(param_3 + 1) = bVar1;
      if (bVar1 < 8) {
        param_3[2] = (int)(pbVar4 + 1);
        *param_1 = pbVar4 + iVar3;
        if (param_2 != pbVar4 + iVar3) {
          iVar2 = -0x66;
        }
      }
      else {
        iVar2 = -100;
      }
    }
  }
  return iVar2;
}

