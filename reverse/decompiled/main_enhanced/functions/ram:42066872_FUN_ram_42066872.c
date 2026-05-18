
undefined4 FUN_ram_42066872(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    return 0x102;
  }
  uVar4 = 0x102;
  if (param_2 != (undefined4 *)0x0) {
    uVar3 = *param_2;
    uVar4 = (*(code *)&SUB_ram_400104a8)(uVar3);
    iVar1 = FUN_ram_420667bc(param_1,uVar3,uVar4,param_2[1],0);
    uVar4 = 0xb002;
    if (iVar1 == 0) {
      for (iVar1 = 0; iVar1 < (int)(uint)*(ushort *)(param_1 + 0x1e); iVar1 = iVar1 + 1) {
        piVar5 = (int *)(*(int *)(param_1 + 0x7c) + iVar1 * 4);
        if (*piVar5 == 0) {
          piVar2 = (int *)thunk_FUN_ram_403904a6(0x10);
          *piVar5 = (int)piVar2;
          if (piVar2 != (int *)0x0) {
            iVar1 = (*(code *)&SUB_ram_40010510)(*param_2);
            *piVar2 = iVar1;
            if (iVar1 != 0) {
              piVar2[1] = param_2[1];
              piVar2[2] = param_2[2];
              piVar2[3] = param_2[3];
              return 0;
            }
            thunk_FUN_ram_40390634(piVar2);
          }
          return 0xb007;
        }
      }
      uVar4 = 0xb001;
    }
  }
  return uVar4;
}

