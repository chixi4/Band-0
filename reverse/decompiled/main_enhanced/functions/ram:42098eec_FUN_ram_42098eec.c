
undefined4
FUN_ram_42098eec(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,char *param_9,
                undefined1 *param_10)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = FUN_ram_4207f4da();
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
LAB_ram_42098fc2:
    uVar4 = 0;
  }
  else {
    if (iVar3 != 0) {
      if (*(int *)(*(int *)(iVar3 + 0x60) + 0x14) != 0) {
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_ram_4209a0ce();
        }
        iVar5 = FUN_ram_4209a050(*(undefined4 *)(iVar3 + 0x60),param_2);
        *(int *)(param_1 + 0x18) = iVar5;
        iVar6 = 0x11;
        if (iVar5 != 0) {
          FUN_ram_4209b866(*(undefined4 *)(iVar3 + 0x60),iVar5,param_3,param_4,param_5,param_6);
          iVar6 = FUN_ram_4209bfd6();
        }
        iVar5 = FUN_ram_42098e0e(iVar3,param_2,iVar6,param_5 == 0,param_8);
        if (iVar5 == 0) {
          if (iVar6 == 0) {
            iVar5 = FUN_ram_4209bc54(*(undefined4 *)(param_1 + 0x18));
            iVar6 = *(int *)(param_1 + 0x18);
            *(bool *)param_7 = iVar5 != 0;
            cVar1 = (*(code *)&SUB_ram_40010918)(*(undefined4 *)(iVar6 + 0x200));
            *param_9 = cVar1 + -1;
            goto LAB_ram_42098faa;
          }
        }
        else {
          iVar6 = 0x11;
        }
        uVar2 = FUN_ram_42098e92(iVar6);
        *param_10 = uVar2;
        goto LAB_ram_42098fc2;
      }
LAB_ram_42098faa:
      FUN_ram_4209ada2(*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(param_1 + 0x18));
    }
    uVar4 = 1;
  }
  return uVar4;
}

