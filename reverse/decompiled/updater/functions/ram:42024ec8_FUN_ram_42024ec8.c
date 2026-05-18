
undefined4 FUN_ram_42024ec8(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = (uint)*(ushort *)((int)param_3 + 6);
  do {
    if (uVar1 == 0) {
      uVar3 = (uint)*(ushort *)((int)param_2 + 6);
LAB_ram_42024ee6:
      iVar2 = FUN_ram_4202479e(param_1,uVar3);
      if (iVar2 == 0) {
        if ((uVar1 < *(ushort *)((int)param_2 + 6)) && (param_2 != param_1)) {
          FUN_ram_40399daa(uVar1 * 4 + *param_1,*param_2 + uVar1 * 4,
                           (*(ushort *)((int)param_2 + 6) - uVar1) * 4);
        }
        uVar3 = (uint)*(ushort *)((int)param_2 + 6);
        if (uVar3 < *(ushort *)((int)param_1 + 6)) {
          (*(code *)&SUB_ram_40010488)
                    (uVar3 * 4 + *param_1,0,(*(ushort *)((int)param_1 + 6) - uVar3) * 4);
        }
        iVar2 = FUN_ram_4202660c(*param_1,*param_2,*param_3,uVar1);
        if ((iVar2 == 0) ||
           (iVar4 = *param_1 + uVar1 * 4,
           iVar2 = FUN_ram_42026cd4(iVar4,iVar4,iVar2,*(ushort *)((int)param_1 + 6) - uVar1),
           iVar2 == 0)) {
          *(undefined2 *)(param_1 + 1) = 1;
          uVar5 = 0;
        }
        else {
LAB_ram_42024f6e:
          uVar5 = 0xfffffff6;
        }
      }
      else {
        uVar5 = 0xfffffff0;
      }
      return uVar5;
    }
    if (*(int *)(*param_3 + uVar1 * 4 + -4) != 0) {
      uVar3 = (uint)*(ushort *)((int)param_2 + 6);
      if (uVar1 <= uVar3) goto LAB_ram_42024ee6;
      goto LAB_ram_42024f6e;
    }
    uVar1 = uVar1 - 1;
  } while( true );
}

