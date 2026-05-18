
void FUN_ram_42054c00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && (param_1 != (int *)0x0)) {
    iVar1 = *param_1;
    if (*param_1 == param_2) {
      *param_1 = *(int *)(param_2 + 0xc);
    }
    else {
      do {
        iVar2 = iVar1;
        if (iVar2 == 0) goto LAB_ram_42054c20;
        iVar1 = *(int *)(iVar2 + 0xc);
      } while (*(int *)(iVar2 + 0xc) != param_2);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    }
LAB_ram_42054c20:
    *(undefined4 *)(param_2 + 0xc) = 0;
    FUN_ram_42054ba6(param_2);
    if (*(int *)(param_2 + 0x14) != 10) {
      if (*(int *)(param_2 + 0x14) == 1) goto LAB_ram_42054c74;
      if ((*(ushort *)(param_2 + 0x1e) & 1) != 0) {
        *(ushort *)(param_2 + 0x1e) = *(ushort *)(param_2 + 0x1e) | 2;
        FUN_ram_42057e96(param_2);
        if (*(int *)(param_2 + 0x14) == 1) goto LAB_ram_42054c74;
      }
    }
    if (((*(int *)(param_2 + 0x70) == 0) && (*(int *)(param_2 + 0x74) == 0)) &&
       (*(int *)(param_2 + 0x78) == 0)) {
LAB_ram_42054c74:
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(undefined2 *)(param_2 + 0x1a) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

