
int FUN_ram_4206a1c8(int param_1,uint param_2,uint param_3,code *param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint)((param_3 & 3) != 0) + (param_3 >> 2);
  iVar3 = uVar1 * 4 - param_3;
  iVar2 = -4;
  if (uVar1 <= param_2) {
    (*(code *)&SUB_ram_40010488)(param_1,0,iVar3);
    (*(code *)&SUB_ram_40010488)(param_1 + uVar1 * 4,0,(param_2 - uVar1) * 4);
    iVar2 = (*param_4)(param_5,param_1 + iVar3,param_3);
    if (iVar2 == 0) {
      FUN_ram_42069804(param_1,uVar1);
    }
  }
  return iVar2;
}

