
int FUN_ram_4202ba9c(int *param_1,byte *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                    code *param_7,undefined4 param_8)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iStack_34;
  
  iVar3 = FUN_ram_4202b91a(param_1,param_2,&iStack_34,0x30);
  if (iVar3 == 0) {
    pbVar2 = (byte *)*param_1;
    if (param_2 == pbVar2 + iStack_34) {
      while (pbVar2 < param_2) {
        *param_1 = (int)(pbVar2 + 1);
        uVar5 = (uint)*pbVar2;
        if ((uVar5 & param_3) != param_4) {
          return -0x62;
        }
        iVar4 = FUN_ram_4202b8a0(param_1,param_2,&iStack_34);
        iVar1 = iStack_34;
        if (iVar4 != 0) {
          return iVar4;
        }
        if ((((uVar5 & param_5) == param_6) && (param_7 != (code *)0x0)) &&
           (iVar4 = (*param_7)(param_8,uVar5,*param_1,iStack_34), iVar4 != 0)) {
          return iVar4;
        }
        pbVar2 = (byte *)(*param_1 + iVar1);
        *param_1 = (int)pbVar2;
      }
    }
    else {
      iVar3 = -0x66;
    }
  }
  return iVar3;
}

