
int FUN_ram_42032c06(undefined4 param_1,int param_2,int param_3,int param_4,byte *param_5,
                    undefined4 param_6,int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_24;
  
  iVar2 = 4;
  if ((param_2 << 2 < 0x100) &&
     (iVar2 = FUN_ram_42032b0c(param_1,param_2 << 2 & 0xfc,param_6,param_4,param_5,param_7),
     iVar2 == 0)) {
    puVar1 = (undefined4 *)(param_3 + 4);
    iVar4 = 0;
    do {
      if (param_7 == 0) {
        (*(code *)&SUB_ram_40011ab4)((uint)*param_5 + param_4);
        *param_5 = *param_5 + 4;
      }
      else {
        uStack_24 = *puVar1;
        iVar3 = FUN_ram_403a3150(param_7,&uStack_24,4);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      iVar4 = iVar4 + 1;
      puVar1 = puVar1 + 2;
    } while (iVar4 < param_2);
  }
  return iVar2;
}

