
int FUN_ram_420667bc(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 6;
  }
  iVar3 = 0;
  do {
    if ((int)(uint)*(ushort *)(param_1 + 0x1e) <= iVar3) {
      return 0;
    }
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x7c) + iVar3 * 4);
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    uVar4 = *puVar1;
    if (*(code **)(param_1 + 0x5c) == (code *)0x0) {
      iVar2 = (*(code *)&SUB_ram_400104a8)(uVar4);
      if ((param_3 == iVar2) && (iVar2 = FUN_ram_4039c5aa(uVar4,param_2,param_3), iVar2 == 0))
      goto LAB_ram_42066818;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x5c))(uVar4,param_2,param_3);
      if (iVar2 != 0) {
LAB_ram_42066818:
        iVar2 = *(int *)(*(int *)(param_1 + 0x7c) + iVar3 * 4);
        if ((param_4 == *(int *)(iVar2 + 4)) || (*(int *)(iVar2 + 4) == 0x7fffffff)) {
          if (param_5 == (undefined4 *)0x0) {
            return iVar2;
          }
          *param_5 = 0;
          return iVar2;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 7;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

