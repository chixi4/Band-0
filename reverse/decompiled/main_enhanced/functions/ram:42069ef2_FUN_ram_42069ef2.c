
void FUN_ram_42069ef2(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,
                     undefined4 param_5,int param_6,int param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  (*(code *)&SUB_ram_40010488)(param_8,0,param_6 * 8 + 4);
  piVar8 = param_8;
  for (iVar7 = 0; iVar7 != param_6; iVar7 = iVar7 + 1) {
    iVar4 = *(int *)(iVar7 * 4 + param_2);
    iVar1 = *param_3;
    iVar5 = *piVar8;
    FUN_ram_42069cbe(piVar8,param_6 + 2,param_3,param_4,iVar4);
    FUN_ram_42069cbe(piVar8,param_6 + 2,param_5,param_6,(iVar4 * iVar1 + iVar5) * param_7);
    piVar8 = piVar8 + 1;
  }
  param_8 = param_8 + iVar7;
  uVar6 = param_8[iVar7];
  uVar2 = FUN_ram_42069c86(param_1,param_8,param_5,iVar7);
  uVar3 = FUN_ram_42069786(uVar6 ^ uVar2);
  FUN_ram_4206b350(uVar3,param_1,param_8,0,iVar7 * 4);
  return;
}

